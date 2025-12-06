// Name: core_gun.cpp_staticInit_FUN_004f0280
// Address: 004f0280
// Address Range: [[004f0280, 004f02a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gun.cpp_staticInit_FUN_004f0280(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_gun_cpp_staticInit_FUN_004f0280(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGunClassInfo,"CGun",core_gun_cpp_FUN_004f02b0,&g_CGunClassVersion
                      ,1,&g_CWeaponClassInfo);
  return pCVar1;
}
