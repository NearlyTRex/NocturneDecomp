// Name: core_mimic.cpp_staticInit_FUN_0051f100
// Address: 0051f100
// Address Range: [[0051f100, 0051f123]]
// Convention: __cdecl
// Signature: CDemonActorType * core_mimic.cpp_staticInit_FUN_0051f100(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_mimic_cpp_staticInit_FUN_0051f100(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMimicClassInfo,"CMimic",core_mimic_cpp_FUN_0051f190,
                      &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return pCVar1;
}
