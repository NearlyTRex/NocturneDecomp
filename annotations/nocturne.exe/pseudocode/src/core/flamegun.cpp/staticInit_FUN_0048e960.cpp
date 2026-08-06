// Name: core_flamegun.cpp_staticInit_FUN_0048e960
// Address: 0048e960
// Address Range: [[0048e960, 0048e983]]
// Convention: __cdecl
// Signature: void __cdecl core_flamegun_cpp_staticInit_FUN_0048e960(void)

#include "nocturne.h"

void __cdecl core_flamegun_cpp_staticInit_FUN_0048e960(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFlameThrowerActorType_01c70690,"CFlameThrower",
             core_flamegun_cpp_factoryFunc_FUN_0048e990,&g_INT_005b91dc,1,
             &g_CWeaponActorType_02ddf970);
  return;
}
