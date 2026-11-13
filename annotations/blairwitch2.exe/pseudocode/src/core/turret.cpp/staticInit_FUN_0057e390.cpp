// Name: core_turret.cpp_staticInit_FUN_0057e390
// Address: 0057e390
// Address Range: [[0057e390, 0057e3b3]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_staticInit_FUN_0057e390(void)

#include "nocturne.h"

void __cdecl core_turret_cpp_staticInit_FUN_0057e390(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTurretClassInfo,"CTurret",core_turret_cpp_factoryFuncTurret_FUN_0057e3c0,
             &g_CTurretClassVersion,2,&g_CWeaponClassInfo);
  return;
}
