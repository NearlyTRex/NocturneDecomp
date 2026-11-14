// Name: core_trigger.cpp_staticInit_FUN_0056df40
// Address: 0056df40
// Address Range: [[0056df40, 0056df63]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_staticInit_FUN_0056df40(void)

#include "nocturne.h"

void __cdecl core_trigger_cpp_staticInit_FUN_0056df40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CTriggerClassInfo,"?333?CTrigger" + 5,
             core_trigger_cpp_factoryFuncTrigger_FUN_0056df70,&g_CTriggerClassVersion,0xd,
             &g_CDemonActorClassInfo);
  return;
}
