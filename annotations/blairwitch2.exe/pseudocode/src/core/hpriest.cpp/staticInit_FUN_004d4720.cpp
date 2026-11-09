// Name: core_hpriest.cpp_staticInit_FUN_004d4720
// Address: 004d4720
// Address Range: [[004d4720, 004d4743]]
// Convention: unknown
// Signature: void core_hpriest_cpp_staticInit_FUN_004d4720(void)

#include "nocturne.h"

void core_hpriest_cpp_staticInit_FUN_004d4720(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHighPriestOfGardathClassInfo,"@CHighPriestOfGardath" + 1,
             core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750,
             &g_CHighPriestOfGardathClassVersion,1,&g_CNPCClassInfo);
  return;
}
