// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8and(...) 8EVAL_AND,(,__VA_ARGS__),

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8EVAL_AND(P,e,ts,G,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST ts##P())(,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_AND_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P),)P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AND_LOOP(P,b,e,ts,...) ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST ts##P())(,ORDER_PP_IF_NOT_##b(,8false,P##e,ORDER_PP_DEF_FIRST ts##P ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,,8EVAL_AND_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P))),P##__VA_ARGS__)
#else
#define ORDER_PP_8EVAL_AND(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST ts##P,ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,8EVAL_AND_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P),)P##__VA_ARGS__)
#define ORDER_PP_8EVAL_AND_LOOP(P,b,e,ts,...) (,ORDER_PP_IF_NOT_##b(,8false,P##e,ORDER_PP_DEF_FIRST ts##P ORDER_PP_IS_TUPLE_SIZE_1 ts##P(,,,8EVAL_AND_LOOP,P##e,(,ORDER_PP_TUPLE_REST ts##P))),P##__VA_ARGS__)
#endif
