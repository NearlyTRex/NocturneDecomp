// Name: core_batcreat.cpp_staticInit_FUN_00411630
// Address: 00411630
// Address Range: [[00411630, 00411653]]
// Convention: unknown
// Signature: void core_batcreat_cpp_staticInit_FUN_00411630(void)

#include "nocturne.h"

void core_batcreat_cpp_staticInit_FUN_00411630(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBatCreatureClassInfo,"?CBatCreature" + 1,
             core_batcreat_cpp_factoryFuncBatCreature_FUN_00411660,&g_CBatCreatureClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
