// Name: core_trigger.cpp_staticInit_FUN_00577690
// Address: 00577690
// Address Range: [[00577690, 005776b3]]
// Convention: unknown
// Signature: void core_trigger_cpp_staticInit_FUN_00577690(void)

#include "nocturne.h"

void core_trigger_cpp_staticInit_FUN_00577690(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CTriggerClassInfo,"?333?CTrigger" + 5,
             core_trigger_cpp_factoryFuncTrigger_FUN_005776c0,&g_CTriggerClassVersion,0xc,
             &g_CDemonActorClassInfo);
  return;
}
