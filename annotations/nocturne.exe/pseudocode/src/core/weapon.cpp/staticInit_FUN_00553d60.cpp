// Name: core_weapon.cpp_staticInit_FUN_00553d60
// Address: 00553d60
// Address Range: [[00553d60, 00553d80]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void)

#include "nocturne.h"

void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWeaponClassInfo,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &g_CWeaponClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
