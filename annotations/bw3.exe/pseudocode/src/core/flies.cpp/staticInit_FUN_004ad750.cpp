// Name: core_flies.cpp_staticInit_FUN_004ad750
// Address: 004ad750
// Address Range: [[004ad750, 004ad773]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_staticInit_FUN_004ad750(void)

#include "nocturne.h"

void __cdecl core_flies_cpp_staticInit_FUN_004ad750(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFliesClassInfo,"CFlies",core_flies_cpp_factoryFuncFlies_FUN_004ad780,
             &g_CFliesClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
