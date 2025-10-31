// Name: core_hpriest.cpp_FUN_004f7c00
// Address: 004f7c00
// Address Range: [[004f7c00, 004f7c41]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_FUN_004f7c00()
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_npc.cpp_CNPC_process_FUN_005448b0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_highpriestg.cpp_FUN_004f7c00(undefined4 param_1, undefined4
   param_2) */

void core_hpriest_cpp_FUN_004f7c00(void)

{
  int iVar1;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_process_FUN_005448b0(in_stack_00000004);
  iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 1));
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042b9e0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 004f7c00: PUSH EBX
//   Label: core_hpriest.cpp_FUN_004f7c00
// 004f7c01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7c05: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7c09: PUSH EBX
// 004f7c0a: CALL core_npc.cpp_CNPC_process_FUN_005448b0
//   XREF to: 005448b0 (UNCONDITIONAL_CALL)
// 004f7c0f: ADD ESP,0x8
// 004f7c12: LEA EAX,[EBX + 0x1f708]
// 004f7c18: PUSH EAX
// 004f7c19: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004f7c1f: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004f7c20: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004f7c25: ADD ESP,0x8
// 004f7c28: TEST EAX,EAX
// 004f7c2a: JNZ 0x004f7c2e
//   XREF to: 004f7c2e (CONDITIONAL_JUMP)
// 004f7c2c: POP EBX
// 004f7c2d: RET
// 004f7c2e: PUSH 0x1
//   Label: LAB_004f7c2e
// 004f7c30: PUSH 0xbf800000
// 004f7c35: PUSH 0x0
// 004f7c37: PUSH EBX
// 004f7c38: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 004f7c3d: ADD ESP,0x10
// 004f7c40: POP EBX
// 004f7c41: RET
