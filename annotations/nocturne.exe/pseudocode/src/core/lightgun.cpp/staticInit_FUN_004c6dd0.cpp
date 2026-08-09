// Name: core_lightgun.cpp_staticInit_FUN_004c6dd0
// Address: 004c6dd0
// Address Range: [[004c6dd0, 004c6df3]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_staticInit_FUN_004c6dd0(void)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_staticInit_FUN_004c6dd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLightGunActorType_01cc3688,"CLightGun",
             core_lightgun_cpp_factoryFuncLightGun_FUN_004c6e00,&INT_005bace0,1,
             &g_CWeaponActorType_02ddf970);
  return;
}
