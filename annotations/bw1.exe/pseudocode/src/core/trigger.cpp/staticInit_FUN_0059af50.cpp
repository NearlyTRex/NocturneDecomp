// Name: core_trigger.cpp_staticInit_FUN_0059af50
// Address: 0059af50
// Address Range: [[0059af50, 0059af73]]
// Convention: unknown
// Signature: void core_trigger_cpp_staticInit_FUN_0059af50(void)

#include "nocturne.h"

void core_trigger_cpp_staticInit_FUN_0059af50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CTriggerClassInfo,"?333?CTrigger" + 5,
             core_trigger_cpp_factoryFuncTrigger_FUN_0059af80,&g_CTriggerClassVersion,0xd,
             &g_CDemonActorClassInfo);
  return;
}
