// Name: core_batcreat.cpp_staticInit_FUN_004111b0
// Address: 004111b0
// Address Range: [[004111b0, 004111d3]]
// Convention: unknown
// Signature: void core_batcreat_cpp_staticInit_FUN_004111b0(void)

#include "nocturne.h"

void core_batcreat_cpp_staticInit_FUN_004111b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBatCreatureClassInfo,"CBatCreature",
             core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0,&g_CBatCreatureClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
