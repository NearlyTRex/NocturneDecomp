// Name: core_lightgun.cpp_staticInit_FUN_004e29c0
// Address: 004e29c0
// Address Range: [[004e29c0, 004e29e3]]
// Convention: unknown
// Signature: void core_lightgun_cpp_staticInit_FUN_004e29c0(void)

#include "nocturne.h"

void core_lightgun_cpp_staticInit_FUN_004e29c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLightGunClassInfo,"CLightGun",
             core_lightgun_cpp_factoryFuncLightGun_FUN_004e29f0,&g_CLightGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
