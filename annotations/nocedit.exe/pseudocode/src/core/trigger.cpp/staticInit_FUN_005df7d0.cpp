// Name: core_trigger.cpp_staticInit_FUN_005df7d0
// Address: 005df7d0
// Address Range: [[005df7d0, 005df7f3]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_staticInit_FUN_005df7d0(void)

#include "nocturne.h"

void __cdecl core_trigger_cpp_staticInit_FUN_005df7d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CTriggerClassInfo,"CTrigger",
             core_trigger_cpp_factoryFuncTrigger_FUN_005df800,&g_CTriggerClassVersion,0xb,
             &g_CDemonActorClassInfo);
  return;
}
