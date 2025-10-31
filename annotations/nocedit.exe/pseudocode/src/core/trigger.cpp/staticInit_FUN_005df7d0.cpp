// Name: core_trigger.cpp_staticInit_FUN_005df7d0
// Address: 005df7d0
// Address Range: [[005df7d0, 005df7f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trigger.cpp_staticInit_FUN_005df7d0(void)
// Globals:
//   TerminatedCString s_CTrigger_006555dc
//   int g_CTriggerClassVersion = 0xb
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CTriggerClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_trigger_cpp_staticInit_FUN_005df7d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTriggerClassInfo,"CTrigger",core_trigger_cpp_FUN_005df800,
                      &g_CTriggerClassVersion,0xb,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005df7d0: PUSH 0x821ff8
//   Label: core_trigger.cpp_staticInit_FUN_005df7d0
//   XREF to: 00821ff8 (DATA)
// 005df7d5: PUSH 0xb
// 005df7d7: PUSH 0x6843e4
//   XREF to: 006843e4 (DATA)
// 005df7dc: PUSH 0x5df800
//   XREF to: 005df800 (DATA)
// 005df7e1: PUSH 0x6555dc
//   XREF to: 006555dc (DATA)
// 005df7e6: PUSH 0x3f87458
//   XREF to: 03f87458 (DATA)
// 005df7eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005df7f0: ADD ESP,0x18
// 005df7f3: RET
