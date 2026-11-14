// Name: core_flamegun.cpp_staticInit_FUN_004b9560
// Address: 004b9560
// Address Range: [[004b9560, 004b9583]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_staticInit_FUN_004b9560(void)

#include "nocturne.h"

void __cdecl core_flamegun_cpp_staticInit_FUN_004b9560(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFlameThrowerClassInfo,"CFlameThrower",
             core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590,&g_CFlameThrowerClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
