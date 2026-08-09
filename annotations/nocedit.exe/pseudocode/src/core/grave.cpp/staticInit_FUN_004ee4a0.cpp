// Name: core_grave.cpp_staticInit_FUN_004ee4a0
// Address: 004ee4a0
// Address Range: [[004ee4a0, 004ee4c3]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void)

#include "nocturne.h"

void __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGraveClassInfo,"CGrave",core_grave_cpp_factoryFuncGrave_FUN_004ee4d0,
             &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
