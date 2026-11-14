// Name: core_flintlck.cpp_staticInit_FUN_004ae780
// Address: 004ae780
// Address Range: [[004ae780, 004ae7a3]]
// Convention: __cdecl
// Signature: void __cdecl core_flintlck_cpp_staticInit_FUN_004ae780(void)

#include "nocturne.h"

void __cdecl core_flintlck_cpp_staticInit_FUN_004ae780(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFlintlockClassInfo,"@CFlintlock" + 1,
             core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0,&g_CFlintlockClassVersion,2,
             &g_CWeaponClassInfo);
  return;
}
