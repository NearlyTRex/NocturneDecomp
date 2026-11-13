// Name: core_lightgun.cpp_staticInit_FUN_004ffe50
// Address: 004ffe50
// Address Range: [[004ffe50, 004ffe73]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_staticInit_FUN_004ffe50(void)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_staticInit_FUN_004ffe50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLightGunClassInfo,"CLightGun",
             core_lightgun_cpp_factoryFuncLightGun_FUN_004ffe80,&g_CLightGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
