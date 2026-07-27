// Name: core_weapon.cpp_staticInit_FUN_00553d60
// Address: 00553d60
// Address Range: [[00553d60, 00553d80]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void)

#include "nocturne.h"

void __cdecl core_weapon_cpp_staticInit_FUN_00553d60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWeaponActorType_02ddf970,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &INT_005c1590,7,&g_CDemonActorActorType_00763e48);
  return;
}
