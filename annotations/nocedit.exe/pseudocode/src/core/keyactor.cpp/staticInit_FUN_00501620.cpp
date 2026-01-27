// Name: core_keyactor.cpp_staticInit_FUN_00501620
// Address: 00501620
// Address Range: [[00501620, 00501643]]
// Convention: __cdecl
// Signature: void core_keyactor.cpp_staticInit_FUN_00501620(void)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_staticInit_FUN_00501620(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CKeyActorClassInfo,"CKeyActor",core_keyactor_cpp_factoryFunc_FUN_00501650,
             &g_CKeyActorClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
