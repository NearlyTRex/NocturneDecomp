// Name: core_weapon.cpp_staticInit_FUN_0057ad40
// Address: 0057ad40
// Address Range: [[0057ad40, 0057ad60]]
// Convention: unknown
// Signature: void core_weapon_cpp_staticInit_FUN_0057ad40(void)

#include "nocturne.h"

void core_weapon_cpp_staticInit_FUN_0057ad40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWeaponClassInfo,"CWeapon",(CDemonActor_FactoryFunc *)0x0,
             &g_CWeaponClassVersion,0xc,&g_CDemonActorClassInfo);
  return;
}
