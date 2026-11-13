// Name: core_gun.cpp_staticInit_FUN_004e8570
// Address: 004e8570
// Address Range: [[004e8570, 004e8593]]
// Convention: __cdecl
// Signature: void __cdecl core_gun_cpp_staticInit_FUN_004e8570(void)

#include "nocturne.h"

void __cdecl core_gun_cpp_staticInit_FUN_004e8570(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGunClassInfo,"CGun",core_gun_cpp_factoryFuncGun_FUN_004e85a0,
             &g_CGunClassVersion,1,&g_CWeaponClassInfo);
  return;
}
