// Name: core_elephant.cpp_staticInit_FUN_004a6f70
// Address: 004a6f70
// Address Range: [[004a6f70, 004a6f93]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_staticInit_FUN_004a6f70(void)

#include "nocturne.h"

void __cdecl core_elephant_cpp_staticInit_FUN_004a6f70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CElephantGunClassInfo,"CElephantGun",
             core_elephant_cpp_factoryFunc_FUN_004a6fa0,&g_CElephantGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
