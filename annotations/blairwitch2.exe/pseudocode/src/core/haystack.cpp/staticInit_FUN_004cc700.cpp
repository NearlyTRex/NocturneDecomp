// Name: core_haystack.cpp_staticInit_FUN_004cc700
// Address: 004cc700
// Address Range: [[004cc700, 004cc723]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_staticInit_FUN_004cc700(void)

#include "nocturne.h"

void __cdecl core_haystack_cpp_staticInit_FUN_004cc700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHaystackClassInfo,"$@CHaystack" + 2,
             core_haystack_cpp_factoryFuncHaystack_FUN_004cc730,&g_CHaystackClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
