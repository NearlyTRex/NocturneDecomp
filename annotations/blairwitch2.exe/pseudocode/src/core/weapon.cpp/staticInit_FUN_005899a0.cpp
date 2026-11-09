// Name: core_weapon.cpp_staticInit_FUN_005899a0
// Address: 005899a0
// Address Range: [[005899a0, 005899c0]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_staticInit_FUN_005899a0(void)

#include "nocturne.h"

void __cdecl core_weapon_cpp_staticInit_FUN_005899a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CWeaponClassInfo,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &g_CWeaponClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
