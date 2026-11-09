// Name: core_ammo.cpp_staticInit_FUN_0040db60
// Address: 0040db60
// Address Range: [[0040db60, 0040db83]]
// Convention: unknown
// Signature: void core_ammo_cpp_staticInit_FUN_0040db60(void)

#include "nocturne.h"

void core_ammo_cpp_staticInit_FUN_0040db60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CAmmoClassInfo,"CAmmo",core_ammo_cpp_factoryFuncAmmo_FUN_0040db90,
             &g_CAmmoClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
