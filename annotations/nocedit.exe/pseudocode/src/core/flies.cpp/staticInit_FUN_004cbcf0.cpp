// Name: core_flies.cpp_staticInit_FUN_004cbcf0
// Address: 004cbcf0
// Address Range: [[004cbcf0, 004cbd13]]
// Convention: __cdecl
// Signature: void core_flies.cpp_staticInit_FUN_004cbcf0(void)

#include "nocturne.h"

void __cdecl core_flies_cpp_staticInit_FUN_004cbcf0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFliesClassInfo,"CFlies",core_flies_cpp_factoryFunc_FUN_004cbd20,
             &g_CFliesClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
