// Name: core_batcreat.cpp_staticInit_FUN_004120a0
// Address: 004120a0
// Address Range: [[004120a0, 004120c3]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_staticInit_FUN_004120a0(void)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_staticInit_FUN_004120a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBatCreatureActorType_007645cc,"CBatCreature",
             core_batcreat_cpp_factoryFuncBatCreature_FUN_004120d0,&g_INT_005acfa4,1,
             &g_CEnemyActorType_01bcdebc);
  return;
}
