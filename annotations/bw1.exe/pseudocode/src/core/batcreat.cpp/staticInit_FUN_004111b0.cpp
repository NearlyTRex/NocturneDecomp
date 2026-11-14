// Name: core_batcreat.cpp_staticInit_FUN_004111b0
// Address: 004111b0
// Address Range: [[004111b0, 004111d3]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_staticInit_FUN_004111b0(void)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_staticInit_FUN_004111b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBatCreatureClassInfo,"CBatCreature",
             core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0,&g_CBatCreatureClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
