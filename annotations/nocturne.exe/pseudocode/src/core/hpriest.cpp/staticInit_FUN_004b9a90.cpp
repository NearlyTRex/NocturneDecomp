// Name: core_hpriest.cpp_staticInit_FUN_004b9a90
// Address: 004b9a90
// Address Range: [[004b9a90, 004b9ab3]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_staticInit_FUN_004b9a90(void)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_staticInit_FUN_004b9a90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHighPriestOfGardathClassInfo,"CHighPriestOfGardath",
             core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004b9ac0,
             &g_CHighPriestOfGardathClassVersion,1,&g_CNPCClassInfo);
  return;
}
