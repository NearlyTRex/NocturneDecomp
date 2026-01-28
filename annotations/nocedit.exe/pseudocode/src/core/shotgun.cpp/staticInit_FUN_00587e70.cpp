// Name: core_shotgun.cpp_staticInit_FUN_00587e70
// Address: 00587e70
// Address Range: [[00587e70, 00587e93]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_staticInit_FUN_00587e70(void)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_staticInit_FUN_00587e70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CShotgunClassInfo,"CShotgun",core_shotgun_cpp_factoryFunc_FUN_00587ea0,
             &g_CShotgunClassVersion,1,&g_CWeaponClassInfo);
  return;
}
