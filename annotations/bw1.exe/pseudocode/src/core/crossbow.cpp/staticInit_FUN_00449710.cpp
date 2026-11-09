// Name: core_crossbow.cpp_staticInit_FUN_00449710
// Address: 00449710
// Address Range: [[00449710, 00449733]]
// Convention: unknown
// Signature: void core_crossbow_cpp_staticInit_FUN_00449710(void)

#include "nocturne.h"

void core_crossbow_cpp_staticInit_FUN_00449710(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCrossbowClassInfo,"CCrossbow",
             core_crossbow_cpp_factoryFuncCrossbow_FUN_00449740,&g_CCrossbowClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
