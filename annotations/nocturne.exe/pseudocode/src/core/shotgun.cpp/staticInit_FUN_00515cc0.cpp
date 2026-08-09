// Name: core_shotgun.cpp_staticInit_FUN_00515cc0
// Address: 00515cc0
// Address Range: [[00515cc0, 00515ce3]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_staticInit_FUN_00515cc0(void)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_staticInit_FUN_00515cc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CShotgunActorType_0267189c,"CShotgun",
             core_shotgun_cpp_factoryFuncShotgun_FUN_00515cf0,&INT_005be93c,1,
             &g_CWeaponActorType_02ddf970);
  return;
}
