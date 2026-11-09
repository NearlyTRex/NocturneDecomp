// Name: core_ammo.cpp_staticInit_FUN_0040dd50
// Address: 0040dd50
// Address Range: [[0040dd50, 0040dd73]]
// Convention: unknown
// Signature: void core_ammo_cpp_staticInit_FUN_0040dd50(void)

#include "nocturne.h"

void core_ammo_cpp_staticInit_FUN_0040dd50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CAmmoClassInfo,"CAmmo",core_ammo_cpp_factoryFuncAmmo_FUN_0040dd80,
             &g_CAmmoClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
