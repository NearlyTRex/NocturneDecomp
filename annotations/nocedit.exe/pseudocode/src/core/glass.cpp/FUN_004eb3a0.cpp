// Name: core_glass.cpp_FUN_004eb3a0
// Address: 004eb3a0
// Address Range: [[004eb3a0, 004eb3b9]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004eb3a0()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a6aa [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 004494c2 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0a34 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bbd5 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de24d [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3bdf [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

void core_glass_cpp_FUN_004eb3a0(void)

{
  int in_stack_00000004;
  
  core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
            (g_CEventListPtr,(char *)(in_stack_00000004 + 0x30c));
  return;
}


// Assembly code:
// 004eb3a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_glass.cpp_FUN_004eb3a0
//   XREF to: Stack[0x4] (READ)
// 004eb3a4: ADD EAX,0x30c
// 004eb3a9: PUSH EAX
// 004eb3aa: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004eb3b0: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004eb3b1: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004eb3b6: ADD ESP,0x8
// 004eb3b9: RET
