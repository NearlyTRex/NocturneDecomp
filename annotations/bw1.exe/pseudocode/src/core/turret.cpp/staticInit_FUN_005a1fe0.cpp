// Name: core_turret.cpp_staticInit_FUN_005a1fe0
// Address: 005a1fe0
// Address Range: [[005a1fe0, 005a2003]]
// Convention: unknown
// Signature: void core_turret_cpp_staticInit_FUN_005a1fe0(void)

#include "nocturne.h"

void core_turret_cpp_staticInit_FUN_005a1fe0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTurretClassInfo,"CTurret",core_turret_cpp_factoryFuncTurret_FUN_005a2010,
             &g_CTurretClassVersion,2,&g_CWeaponClassInfo);
  return;
}
