// Name: core_weapon.cpp_staticInit_FUN_005ad490
// Address: 005ad490
// Address Range: [[005ad490, 005ad4b0]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_staticInit_FUN_005ad490(void)

#include "nocturne.h"

void __cdecl core_weapon_cpp_staticInit_FUN_005ad490(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CWeaponClassInfo,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &g_CWeaponClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
