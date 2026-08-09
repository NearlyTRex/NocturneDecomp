// Name: core_trigger.cpp_staticInit_FUN_00547850
// Address: 00547850
// Address Range: [[00547850, 00547873]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_staticInit_FUN_00547850(void)

#include "nocturne.h"

void __cdecl core_trigger_cpp_staticInit_FUN_00547850(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTriggerActorType_02dd1084,"CTrigger",
             core_trigger_cpp_factoryFuncTrigger_FUN_00547880,&INT_005c1130,0xb,
             &g_CDemonActorActorType_00763e48);
  return;
}
