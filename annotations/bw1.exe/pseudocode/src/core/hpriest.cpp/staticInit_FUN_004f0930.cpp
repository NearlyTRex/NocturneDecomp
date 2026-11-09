// Name: core_hpriest.cpp_staticInit_FUN_004f0930
// Address: 004f0930
// Address Range: [[004f0930, 004f0953]]
// Convention: unknown
// Signature: void core_hpriest_cpp_staticInit_FUN_004f0930(void)

#include "nocturne.h"

void core_hpriest_cpp_staticInit_FUN_004f0930(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHighPriestOfGardathClassInfo,"@CHighPriestOfGardath" + 1,
             core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960,
             &g_CHighPriestOfGardathClassVersion,1,&g_CNPCClassInfo);
  return;
}
