// Name: core_gun.cpp_staticInit_FUN_004d0f00
// Address: 004d0f00
// Address Range: [[004d0f00, 004d0f23]]
// Convention: __cdecl
// Signature: void __cdecl core_gun_cpp_staticInit_FUN_004d0f00(void)

#include "nocturne.h"

void __cdecl core_gun_cpp_staticInit_FUN_004d0f00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGunClassInfo,(char *)0x5c49c7,core_gun_cpp_factoryFuncGun_FUN_004d0f30,
             &g_CGunClassVersion,1,&g_CWeaponClassInfo);
  return;
}
