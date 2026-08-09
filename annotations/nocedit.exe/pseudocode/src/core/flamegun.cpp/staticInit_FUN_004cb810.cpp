// Name: core_flamegun.cpp_staticInit_FUN_004cb810
// Address: 004cb810
// Address Range: [[004cb810, 004cb833]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_staticInit_FUN_004cb810(void)

#include "nocturne.h"

void __cdecl core_flamegun_cpp_staticInit_FUN_004cb810(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFlameThrowerClassInfo,"CFlameThrower",
             core_flamegun_cpp_factoryFuncFlameThrower_FUN_004cb840,&g_CFlameThrowerClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
