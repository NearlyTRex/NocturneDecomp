// Name: core_flamecan.cpp_staticInit_FUN_004a0660
// Address: 004a0660
// Address Range: [[004a0660, 004a0683]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_staticInit_FUN_004a0660(void)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_staticInit_FUN_004a0660(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFlameCanClassInfo,"@CFlameCan" + 1,
             core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690,&g_CFlameCanClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
