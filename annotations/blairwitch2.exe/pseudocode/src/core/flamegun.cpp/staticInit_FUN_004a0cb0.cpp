// Name: core_flamegun.cpp_staticInit_FUN_004a0cb0
// Address: 004a0cb0
// Address Range: [[004a0cb0, 004a0cd3]]
// Convention: unknown
// Signature: void core_flamegun_cpp_staticInit_FUN_004a0cb0(void)

#include "nocturne.h"

void core_flamegun_cpp_staticInit_FUN_004a0cb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFlameThrowerClassInfo,"CFlameThrower",
             core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0,&g_CFlameThrowerClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
