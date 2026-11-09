// Name: core_shotgun.cpp_staticInit_FUN_00561560
// Address: 00561560
// Address Range: [[00561560, 00561583]]
// Convention: unknown
// Signature: void core_shotgun_cpp_staticInit_FUN_00561560(void)

#include "nocturne.h"

void core_shotgun_cpp_staticInit_FUN_00561560(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CShotgunClassInfo,"CShotgun",
             core_shotgun_cpp_factoryFuncShotgun_FUN_00561590,&g_CShotgunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
