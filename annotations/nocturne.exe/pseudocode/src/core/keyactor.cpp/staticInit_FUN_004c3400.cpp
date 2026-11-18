// Name: core_keyactor.cpp_staticInit_FUN_004c3400
// Address: 004c3400
// Address Range: [[004c3400, 004c3423]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_staticInit_FUN_004c3400(void)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_staticInit_FUN_004c3400(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CKeyActorClassInfo,"CKeyActor",
             core_keyactor_cpp_factoryFuncKeyActor_FUN_004c3430,&g_CKeyActorClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
