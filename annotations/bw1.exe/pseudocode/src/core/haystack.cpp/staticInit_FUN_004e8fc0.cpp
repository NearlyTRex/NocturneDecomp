// Name: core_haystack.cpp_staticInit_FUN_004e8fc0
// Address: 004e8fc0
// Address Range: [[004e8fc0, 004e8fe3]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_staticInit_FUN_004e8fc0(void)

#include "nocturne.h"

void __cdecl core_haystack_cpp_staticInit_FUN_004e8fc0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CHaystackClassInfo,"CHaystack",
             core_haystack_cpp_factoryFuncHaystack_FUN_004e8ff0,&g_CHaystackClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
