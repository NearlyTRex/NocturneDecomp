// Name: core_flamecan.cpp_staticInit_FUN_004a6ea0
// Address: 004a6ea0
// Address Range: [[004a6ea0, 004a6ec3]]
// Convention: unknown
// Signature: void core_flamecan_cpp_staticInit_FUN_004a6ea0(void)

#include "nocturne.h"

void core_flamecan_cpp_staticInit_FUN_004a6ea0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFlameCanClassInfo,"@CFlameCan" + 1,
             core_flamecan_cpp_factoryFuncFlameCan_FUN_004a6ed0,&g_CFlameCanClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
