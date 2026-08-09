// Name: core_ammo.cpp_staticInit_FUN_00410d50
// Address: 00410d50
// Address Range: [[00410d50, 00410d73]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_staticInit_FUN_00410d50(void)

#include "nocturne.h"

void __cdecl core_ammo_cpp_staticInit_FUN_00410d50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CAmmoClassInfo,"CAmmo",core_ammo_cpp_factoryFuncAmmo_FUN_00410d80,
             &g_CAmmoClassVersion,1,&g_CDemonActorClassInfo);
  return;
}
