// Name: core_health.cpp_staticInit_FUN_004f1d60
// Address: 004f1d60
// Address Range: [[004f1d60, 004f1d83]]
// Convention: __cdecl
// Signature: CDemonActorType * core_health.cpp_staticInit_FUN_004f1d60(void)
// Globals:
//   TerminatedCString s_CHealthItem_0062e9d1
//   undefined4 g_CHealthItemClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CHealthItemClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_health_cpp_staticInit_FUN_004f1d60(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHealthItemClassInfo,"CHealthItem",core_health_cpp_FUN_004f1d90,
                      &g_CHealthItemClassVersion,3,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f1d60: PUSH 0x821ff8
//   Label: core_health.cpp_staticInit_FUN_004f1d60
//   XREF to: 00821ff8 (DATA)
// 004f1d65: PUSH 0x3
// 004f1d67: PUSH 0x67cc04
//   XREF to: 0067cc04 (DATA)
// 004f1d6c: PUSH 0x4f1d90
//   XREF to: 004f1d90 (DATA)
// 004f1d71: PUSH 0x62e9d1
//   XREF to: 0062e9d1 (DATA)
// 004f1d76: PUSH 0x2db8780
//   XREF to: 02db8780 (DATA)
// 004f1d7b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f1d80: ADD ESP,0x18
// 004f1d83: RET
