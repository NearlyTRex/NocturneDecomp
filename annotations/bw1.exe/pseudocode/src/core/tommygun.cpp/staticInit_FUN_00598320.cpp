// Name: core_tommygun.cpp_staticInit_FUN_00598320
// Address: 00598320
// Address Range: [[00598320, 00598343]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_staticInit_FUN_00598320(void)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_staticInit_FUN_00598320(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTommyGunClassInfo,"CTommyGun",
             core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350,&g_CTommyGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
