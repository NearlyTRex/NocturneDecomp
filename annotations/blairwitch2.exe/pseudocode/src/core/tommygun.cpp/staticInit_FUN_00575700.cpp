// Name: core_tommygun.cpp_staticInit_FUN_00575700
// Address: 00575700
// Address Range: [[00575700, 00575723]]
// Convention: unknown
// Signature: void core_tommygun_cpp_staticInit_FUN_00575700(void)

#include "nocturne.h"

void core_tommygun_cpp_staticInit_FUN_00575700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTommyGunClassInfo,"CTommyGun",
             core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730,&g_CTommyGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
