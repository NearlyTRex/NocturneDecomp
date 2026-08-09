// Name: core_hpriest.cpp_staticInit_FUN_004f7b00
// Address: 004f7b00
// Address Range: [[004f7b00, 004f7b23]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_staticInit_FUN_004f7b00(void)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_staticInit_FUN_004f7b00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHighPriestOfGardathClassInfo,"CHighPriestOfGardath",
             core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f7b30,
             &g_CHighPriestOfGardathClassVersion,1,&g_CNPCClassInfo);
  return;
}
