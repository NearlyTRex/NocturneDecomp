// Name: core_weapon.cpp_staticInit_FUN_005ede40
// Address: 005ede40
// Address Range: [[005ede40, 005ede60]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_staticInit_FUN_005ede40(void)

#include "nocturne.h"

void __cdecl core_weapon_cpp_staticInit_FUN_005ede40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CWeaponClassInfo,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &g_CWeaponClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
