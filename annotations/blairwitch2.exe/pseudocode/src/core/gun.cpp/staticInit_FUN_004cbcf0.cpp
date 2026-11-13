// Name: core_gun.cpp_staticInit_FUN_004cbcf0
// Address: 004cbcf0
// Address Range: [[004cbcf0, 004cbd13]]
// Convention: __cdecl
// Signature: void __cdecl core_gun_cpp_staticInit_FUN_004cbcf0(void)

#include "nocturne.h"

void __cdecl core_gun_cpp_staticInit_FUN_004cbcf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGunClassInfo,(char *)0x5d97ae,core_gun_cpp_factoryFuncGun_FUN_004cbd20,
             &g_CGunClassVersion,1,&g_CWeaponClassInfo);
  return;
}
