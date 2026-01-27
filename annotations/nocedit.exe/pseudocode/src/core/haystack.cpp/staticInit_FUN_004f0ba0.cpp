// Name: core_haystack.cpp_staticInit_FUN_004f0ba0
// Address: 004f0ba0
// Address Range: [[004f0ba0, 004f0bc3]]
// Convention: __cdecl
// Signature: void core_haystack.cpp_staticInit_FUN_004f0ba0(void)

#include "nocturne.h"

void __cdecl core_haystack_cpp_staticInit_FUN_004f0ba0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CHaystackClassInfo,"CHaystack",core_haystack_cpp_factoryFunc_FUN_004f0bd0,
             &g_CHaystackClassVersion,1,&g_CHeroClassInfo);
  return;
}
