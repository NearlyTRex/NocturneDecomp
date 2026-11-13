// Name: core_tommygun.cpp_staticInit_FUN_0056b310
// Address: 0056b310
// Address Range: [[0056b310, 0056b333]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_staticInit_FUN_0056b310(void)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_staticInit_FUN_0056b310(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTommyGunClassInfo,"CTommyGun",
             core_tommygun_cpp_factoryFuncTommyGun_FUN_0056b340,&g_CTommyGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
