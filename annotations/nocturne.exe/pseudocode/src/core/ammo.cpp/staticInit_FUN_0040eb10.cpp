// Name: core_ammo.cpp_staticInit_FUN_0040eb10
// Address: 0040eb10
// Address Range: [[0040eb10, 0040eb33]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_staticInit_FUN_0040eb10(void)

#include "nocturne.h"

void __cdecl core_ammo_cpp_staticInit_FUN_0040eb10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CAmmoActorType_007641bc,"CAmmo",core_ammo_cpp_FUN_0040eb40,&g_INT_005acea0,
             1,&g_CDemonActorActorType_00763e48);
  return;
}
