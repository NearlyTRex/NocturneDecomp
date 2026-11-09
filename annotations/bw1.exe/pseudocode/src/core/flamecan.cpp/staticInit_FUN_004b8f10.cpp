// Name: core_flamecan.cpp_staticInit_FUN_004b8f10
// Address: 004b8f10
// Address Range: [[004b8f10, 004b8f33]]
// Convention: unknown
// Signature: void core_flamecan_cpp_staticInit_FUN_004b8f10(void)

#include "nocturne.h"

void core_flamecan_cpp_staticInit_FUN_004b8f10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFlameCanClassInfo,"@CFlameCan" + 1,
             core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40,&g_CFlameCanClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
