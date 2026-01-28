// Name: core_colonel.cpp_staticInit_FUN_0043f770
// Address: 0043f770
// Address Range: [[0043f770, 0043f793]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_staticInit_FUN_0043f770(void)

#include "nocturne.h"

void __cdecl core_colonel_cpp_staticInit_FUN_0043f770(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CColonelClassInfo,"CColonel",core_colonel_cpp_factoryFunc_FUN_0043f7a0,
             &g_CColonelClassVersion,1,&g_CHeroClassInfo);
  return;
}
