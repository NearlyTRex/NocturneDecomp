// Name: core_keyactor.cpp_staticInit_FUN_004df0e0
// Address: 004df0e0
// Address Range: [[004df0e0, 004df103]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_staticInit_FUN_004df0e0(void)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_staticInit_FUN_004df0e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CKeyActorClassInfo,"CKeyActor",
             core_keyactor_cpp_factoryFuncKeyActor_FUN_004df110,&g_CKeyActorClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
