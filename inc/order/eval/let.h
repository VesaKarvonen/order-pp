// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_EVAL_LET_SPLIT(s,i) s,i,

#define ORDER_PP_DEF_8let(bs,...) 8EVAL_LET,ORDER_PP_EVAL_LET_SPLIT bs(,0let),ORDER_PP_IS_TUPLE_SIZE_1(,__VA_ARGS__)(,ORDER_PP_REM,8do)(__VA_ARGS__),

#define ORDER_PP_8EVAL_LET(P,e,s0,i0,bs,t,G,...) (,P##e,ORDER_PP_DEF_##i0,8EVAL_LET_LOOP,P##s0,,P##e,ORDER_PP_EVAL_LET_SPLIT bs##P,P##t,P##__VA_ARGS__)
#define ORDER_PP_8EVAL_LET_LOOP(P,v0,s0,ext,e,s1,i1,bs,...) (,P##e,ORDER_PP_DEF_##i1,8EVAL_LET_LOOP,P##s1,(,P##s0,P##v0)P##ext,P##e,ORDER_PP_EVAL_LET_SPLIT bs##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_0let 0EVAL_LET,
#define ORDER_PP_0EVAL_LET(P,e,G,eval_let_loop,s1,ext,e2,split_bs,t,...) (,P##ext P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
