// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8is_tuple ORDER_PP_FN_CM(1,8IS_TUPLE)
#define ORDER_PP_8IS_TUPLE(P,t,...) (,ORDER_PP_IS_EDIBLE(,P##t)(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8pair ORDER_PP_FN_NATIVE(2,9PAIR)
#define ORDER_PP_9PAIR(P,l,r) (P##l,P##r)

#define ORDER_PP_DEF_8tuple_at ORDER_PP_FN_NATIVE(2,9TUPLE_AT)
#define ORDER_PP_9TUPLE_AT(P,i,t) ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_TUPLE_REST_N(,P##i)(,P##i,P##t),))

#define ORDER_PP_DEF_8tuple_at_0 ORDER_PP_FN_CM(1,8TUPLE_AT_0)
#define ORDER_PP_DEF_8tuple_at_1 ORDER_PP_FN_CM(1,8TUPLE_AT_1)
#define ORDER_PP_DEF_8tuple_at_2 ORDER_PP_FN_CM(1,8TUPLE_AT_2)
#define ORDER_PP_DEF_8tuple_at_3 ORDER_PP_FN_CM(1,8TUPLE_AT_3)
#define ORDER_PP_DEF_8tuple_at_4 ORDER_PP_FN_CM(1,8TUPLE_AT_4)
#define ORDER_PP_DEF_8tuple_at_5 ORDER_PP_FN_CM(1,8TUPLE_AT_5)
#define ORDER_PP_DEF_8tuple_at_6 ORDER_PP_FN_CM(1,8TUPLE_AT_6)
#define ORDER_PP_DEF_8tuple_at_7 ORDER_PP_FN_CM(1,8TUPLE_AT_7)
#define ORDER_PP_DEF_8tuple_at_8 ORDER_PP_FN_CM(1,8TUPLE_AT_8)
#define ORDER_PP_DEF_8tuple_at_9 ORDER_PP_FN_CM(1,8TUPLE_AT_9)

#define ORDER_PP_8TUPLE_AT_0(P,t,...) (,ORDER_PP_FX(TUPLE_AT_0,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_1(P,t,...) (,ORDER_PP_FX(TUPLE_AT_1,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_2(P,t,...) (,ORDER_PP_FX(TUPLE_AT_2,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_3(P,t,...) (,ORDER_PP_FX(TUPLE_AT_3,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_4(P,t,...) (,ORDER_PP_FX(TUPLE_AT_4,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_5(P,t,...) (,ORDER_PP_FX(TUPLE_AT_5,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_6(P,t,...) (,ORDER_PP_FX(TUPLE_AT_6,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_7(P,t,...) (,ORDER_PP_FX(TUPLE_AT_7,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_8(P,t,...) (,ORDER_PP_FX(TUPLE_AT_8,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_AT_9(P,t,...) (,ORDER_PP_FX(TUPLE_AT_9,(,ORDER_PP_REM t##P,)),P##__VA_ARGS__)

#define ORDER_PP_DEF_8tuple_rest_n ORDER_PP_FN_NATIVE(2,9TUPLE_REST_N)
#define ORDER_PP_9TUPLE_REST_N(P,n,t) (ORDER_PP_TUPLE_REST_N(,P##n)(,P##n,P##t))
#define ORDER_PP_TUPLE_REST_N(P,n) ORDER_PP_TEST(ORDER_PP_TUPLE_REST_N_,ORDER_PP_IS_EDIBLE_TEST P##n,NAT,LIT)
#define ORDER_PP_TUPLE_REST_N_LIT(P,n,t) ORDER_PP_FX(TUPLE_REST_##n,(,ORDER_PP_REM t##P))
#define ORDER_PP_TUPLE_REST_N_NAT(P,n,t) ORDER_PP_EXPAND(ORDER_PP_OVERLOAD(TUPLE_REST,ORDER_PP_SCAN(ORDER_PP_NAT_MOD_100_LIT P##n)),(,ORDER_PP_PM(,ORDER_PP_NAT_DIV_100 P##n,8TUPLE_REST_100N,(,ORDER_PP_REM t##P),)))

#define ORDER_PP_DEF_8tuple_rest   ORDER_PP_FN_CM(1,8TUPLE_REST_1)
#define ORDER_PP_DEF_8tuple_rest_1 ORDER_PP_FN_CM(1,8TUPLE_REST_1)
#define ORDER_PP_DEF_8tuple_rest_2 ORDER_PP_FN_CM(1,8TUPLE_REST_2)
#define ORDER_PP_DEF_8tuple_rest_3 ORDER_PP_FN_CM(1,8TUPLE_REST_3)
#define ORDER_PP_DEF_8tuple_rest_4 ORDER_PP_FN_CM(1,8TUPLE_REST_4)
#define ORDER_PP_DEF_8tuple_rest_5 ORDER_PP_FN_CM(1,8TUPLE_REST_5)
#define ORDER_PP_DEF_8tuple_rest_6 ORDER_PP_FN_CM(1,8TUPLE_REST_6)
#define ORDER_PP_DEF_8tuple_rest_7 ORDER_PP_FN_CM(1,8TUPLE_REST_7)
#define ORDER_PP_DEF_8tuple_rest_8 ORDER_PP_FN_CM(1,8TUPLE_REST_8)
#define ORDER_PP_DEF_8tuple_rest_9 ORDER_PP_FN_CM(1,8TUPLE_REST_9)

#define ORDER_PP_8TUPLE_REST_1(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_1,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_2(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_2,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_3(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_3,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_4(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_4,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_5(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_5,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_6(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_6,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_7(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_7,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_8(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_8,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_REST_9(P,t,...) (,(ORDER_PP_FX(TUPLE_REST_9,(,ORDER_PP_REM t##P))),P##__VA_ARGS__)

#define ORDER_PP_DEF_8tuple_size ORDER_PP_FN_CM(1,8TUPLE_SIZE)
#define ORDER_PP_8TUPLE_SIZE(P,t,...) (,ORDER_PP_FY(TUPLE_SIZE,(,ORDER_PP_REM P##t)),P##__VA_ARGS__)

#define ORDER_PP_TUPLE_SIZE(P,...) ORDER_PP_OVERLOAD(TUPLE_SIZE,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE(,P##__VA_ARGS__))(,P##__VA_ARGS__)
#define ORDER_PP_TUPLE_SIZE_1(...) 1
#define ORDER_PP_TUPLE_SIZE_2(...) 2
#define ORDER_PP_TUPLE_SIZE_3(...) 3
#define ORDER_PP_TUPLE_SIZE_4(...) 4
#define ORDER_PP_TUPLE_SIZE_5(...) 5
#define ORDER_PP_TUPLE_SIZE_6(...) 6
#define ORDER_PP_TUPLE_SIZE_7(...) 7
#define ORDER_PP_TUPLE_SIZE_8(...) 8
#define ORDER_PP_TUPLE_SIZE_9(...) 9
#define ORDER_PP_TUPLE_SIZE_10(...) 10
#define ORDER_PP_TUPLE_SIZE_11_OR_MORE(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) ORDER_PP_PM(,(,P##__VA_ARGS__),8TUPLE_SIZE_2,(01),)
#define ORDER_PP_8TUPLE_SIZE_2(P,t,n,...) ORDER_PP_OVERLOAD(8TUPLE_SIZE_2,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE P##t)(,P##t,P##n)
#define ORDER_PP_8TUPLE_SIZE_2_1(P,t,n) ,(1)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_2(P,t,n) ,(2)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_3(P,t,n) ,(3)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_4(P,t,n) ,(4)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_5(P,t,n) ,(5)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_6(P,t,n) ,(6)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_7(P,t,n) ,(7)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_8(P,t,n) ,(8)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_9(P,t,n) ,(9)P##n)
#define ORDER_PP_8TUPLE_SIZE_2_10(P,t,n) ,(0)ORDER_PP_NAT_SUCC P##n)
#define ORDER_PP_8TUPLE_SIZE_2_11_OR_MORE(P,t,n) (,(,ORDER_PP_TUPLE_REST_10 P##t),8TUPLE_SIZE_2,ORDER_PP_NAT_SUCC P##n,)

#define ORDER_PP_DEF_8tuple_to_seq ORDER_PP_FN_CM(1,8TUPLE_TO_SEQ)
#define ORDER_PP_8TUPLE_TO_SEQ(P,t,...) (,ORDER_PP_FY(TUPLE_TO_SEQ,(,ORDER_PP_REM P##t)),P##__VA_ARGS__)

#define ORDER_PP_TUPLE_TO_SEQ(P,...) ORDER_PP_PM(,ORDER_PP_OVERLOAD(TUPLE_TO_SEQ,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE(,P##__VA_ARGS__))(,P##__VA_ARGS__),8STOP,)
#define ORDER_PP_TUPLE_TO_SEQ_1(P,_0) (P##_0)
#define ORDER_PP_TUPLE_TO_SEQ_2(P,_0,_1) (P##_0)(P##_1)
#define ORDER_PP_TUPLE_TO_SEQ_3(P,_0,_1,_2) (P##_0)(P##_1)(P##_2)
#define ORDER_PP_TUPLE_TO_SEQ_4(P,_0,_1,_2,_3) (P##_0)(P##_1)(P##_2)(P##_3)
#define ORDER_PP_TUPLE_TO_SEQ_5(P,_0,_1,_2,_3,_4) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)
#define ORDER_PP_TUPLE_TO_SEQ_6(P,_0,_1,_2,_3,_4,_5) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)
#define ORDER_PP_TUPLE_TO_SEQ_7(P,_0,_1,_2,_3,_4,_5,_6) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)
#define ORDER_PP_TUPLE_TO_SEQ_8(P,_0,_1,_2,_3,_4,_5,_6,_7) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)
#define ORDER_PP_TUPLE_TO_SEQ_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)
#define ORDER_PP_TUPLE_TO_SEQ_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)(P##_9)
#define ORDER_PP_TUPLE_TO_SEQ_11_OR_MORE(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,...) (P##_0)(P##_1)(P##_2)(P##_3)(P##_4)(P##_5)(P##_6)(P##_7)(P##_8)(P##_9),8TUPLE_TO_SEQ_2,(,P##__VA_ARGS__)
#define ORDER_PP_8TUPLE_TO_SEQ_2(P,s,t,...) (,ORDER_PP_LEFT(,s##P)ORDER_PP_OVERLOAD(TUPLE_TO_SEQ,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE P##t)P##t,P##__VA_ARGS__)

// Details

#define ORDER_PP_IS_TUPLE_SIZE_1(P,...) ORDER_PP_IS_TUPLE_SIZE_1_B(P##__VA_ARGS__,ORDER_PP_COMMA_1,)
#define ORDER_PP_IS_TUPLE_SIZE_1_B(_,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_IF_,x,0,)

#define ORDER_PP_IS_TUPLE_SIZE_2(P,...) ORDER_PP_IS_TUPLE_SIZE_2_B(P##__VA_ARGS__,ORDER_PP_COMMA_1,,)
#define ORDER_PP_IS_TUPLE_SIZE_2_B(_,A,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_IF_,x,0,)

#define ORDER_PP_TUPLE_LAST(P,...) ORDER_PP_OVERLOAD(TUPLE_LAST,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE(,P##__VA_ARGS__))(,P##__VA_ARGS__)
#define ORDER_PP_TUPLE_LAST_1(P,_0) P##_0
#define ORDER_PP_TUPLE_LAST_2(P,_0,_1) P##_1
#define ORDER_PP_TUPLE_LAST_3(P,_0,_1,_2) P##_2
#define ORDER_PP_TUPLE_LAST_4(P,_0,_1,_2,_3) P##_3
#define ORDER_PP_TUPLE_LAST_5(P,_0,_1,_2,_3,_4) P##_4
#define ORDER_PP_TUPLE_LAST_6(P,_0,_1,_2,_3,_4,_5) P##_5
#define ORDER_PP_TUPLE_LAST_7(P,_0,_1,_2,_3,_4,_5,_6) P##_6
#define ORDER_PP_TUPLE_LAST_8(P,_0,_1,_2,_3,_4,_5,_6,_7) P##_7
#define ORDER_PP_TUPLE_LAST_9(P,_0,_1,_2,_3,_4,_5,_6,_7,_8) P##_8
#define ORDER_PP_TUPLE_LAST_10(P,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9) P##_9
#define ORDER_PP_TUPLE_LAST_11_OR_MORE() // This should never occure.

#define ORDER_PP_TUPLE_REST(P,_0,...) P##__VA_ARGS__

#define ORDER_PP_8TUPLE_REST_100N(P,n,t,...) ORDER_PP_NAT_IS_ZERO P##n(,ORDER_PP_8EXIT_TUPLE P##t,(,ORDER_PP_NAT_PRED P##n,8TUPLE_REST_100N,(,ORDER_PP_TUPLE_REST_100 t##P),))

#define ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE(P,...) ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE_B(P##__VA_ARGS__,ORDER_PP_COMMA_10,ORDER_PP_COMMA_9,ORDER_PP_COMMA_8,ORDER_PP_COMMA_7,ORDER_PP_COMMA_6,ORDER_PP_COMMA_5,ORDER_PP_COMMA_4,ORDER_PP_COMMA_3,ORDER_PP_COMMA_2,ORDER_PP_COMMA_1,)
#define ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE_B(_,A,B,C,D,E,F,G,H,I,x,...) ORDER_PP_TUPLE_AT_1(,x,11_OR_MORE,)

#define ORDER_PP_8EXIT_TUPLE(P,...) ,P##__VA_ARGS__)

#include "order/prelude/tuple_tables.h"
