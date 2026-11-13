// Name: core_grave.cpp_staticInit_FUN_004ca0c0
// Address: 004ca0c0
// Address Range: [[004ca0c0, 004ca0e3]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_staticInit_FUN_004ca0c0(void)

#include "nocturne.h"

void __cdecl core_grave_cpp_staticInit_FUN_004ca0c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGraveClassInfo,"CGrave",core_grave_cpp_factoryFuncGrave_FUN_004ca0f0,
             &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
