// Name: core_flamegun.cpp_staticInit_FUN_004cb810
// Address: 004cb810
// Address Range: [[004cb810, 004cb833]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flamegun.cpp_staticInit_FUN_004cb810(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_flamegun_cpp_staticInit_FUN_004cb810(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlameThrowerClassInfo,"CFlameThrower",
                      core_flamegun_cpp_FUN_004cb840,&g_CFlameThrowerClassVersion,1,
                      &g_CWeaponClassInfo);
  return pCVar1;
}
