// Name: core_mimic.cpp_staticInit_FUN_0051f100
// Address: 0051f100
// Address Range: [[0051f100, 0051f123]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_staticInit_FUN_0051f100(void)

#include "nocturne.h"

void __cdecl core_mimic_cpp_staticInit_FUN_0051f100(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CMimicClassInfo,"CMimic",core_mimic_cpp_factoryFunc_FUN_0051f190,
             &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return;
}
