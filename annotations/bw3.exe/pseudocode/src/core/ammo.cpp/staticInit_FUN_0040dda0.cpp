// Name: core_ammo.cpp_staticInit_FUN_0040dda0
// Address: 0040dda0
// Address Range: [[0040dda0, 0040de2c]]
// Convention: unknown
// Signature: void core_ammo_cpp_staticInit_FUN_0040dda0(void)

#include "nocturne.h"

void core_ammo_cpp_staticInit_FUN_0040dda0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CAmmoClassInfo,"CAmmo",core_ammo_cpp_factoryFuncAmmo_FUN_0040de30,
             &g_CAmmoClassVersion,1,&g_CDemonActorClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007dfd28,"CAmmo_Mana",core_ammo_cpp_FUN_0040e0c0,
             (int *)&DAT_005f0b58,1,&g_CAmmoClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007dfd64,"CAmmo_ManaLarge",core_ammo_cpp_FUN_0040e230,
             (int *)&DAT_005f0b5c,1,&g_CAmmoClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            ((CDemonActorType *)&DAT_007dfda0,"CAmmo_Bullet",core_ammo_cpp_FUN_0040e3a0,
             (int *)&DAT_005f0b60,1,&g_CAmmoClassInfo);
  return;
}
