// Name: core_haystack.cpp_staticInit_FUN_004b3040
// Address: 004b3040
// Address Range: [[004b3040, 004b3063]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_staticInit_FUN_004b3040(void)

#include "nocturne.h"

void __cdecl core_haystack_cpp_staticInit_FUN_004b3040(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHaystackActorType_01cae05c,"CHaystack",
             core_haystack_cpp_factoryFunc_FUN_004b3070,&INT_005ba910,1,&g_CHeroActorType_01cae0ec);
  return;
}
