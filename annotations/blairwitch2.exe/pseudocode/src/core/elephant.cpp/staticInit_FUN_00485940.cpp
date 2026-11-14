// Name: core_elephant.cpp_staticInit_FUN_00485940
// Address: 00485940
// Address Range: [[00485940, 00485963]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_staticInit_FUN_00485940(void)

#include "nocturne.h"

void __cdecl core_elephant_cpp_staticInit_FUN_00485940(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CElephantGunClassInfo,"CElephantGun",
             core_elephant_cpp_factoryFuncElephantGun_FUN_00485970,&g_CElephantGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
