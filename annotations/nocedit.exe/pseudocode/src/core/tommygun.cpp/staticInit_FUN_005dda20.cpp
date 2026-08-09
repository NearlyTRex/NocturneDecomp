// Name: core_tommygun.cpp_staticInit_FUN_005dda20
// Address: 005dda20
// Address Range: [[005dda20, 005dda43]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_staticInit_FUN_005dda20(void)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_staticInit_FUN_005dda20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTommyGunClassInfo,"CTommyGun",
             core_tommygun_cpp_factoryFuncTommyGun_FUN_005dda50,&g_CTommyGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
