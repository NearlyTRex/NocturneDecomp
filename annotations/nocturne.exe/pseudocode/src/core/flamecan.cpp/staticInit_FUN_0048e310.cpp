// Name: core_flamecan.cpp_staticInit_FUN_0048e310
// Address: 0048e310
// Address Range: [[0048e310, 0048e333]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_staticInit_FUN_0048e310(void)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_staticInit_FUN_0048e310(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFlameCanClassInfo,"CFlameCan",
             core_flamecan_cpp_factoryFuncFlameCan_FUN_0048e340,&g_CFlameCanClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
