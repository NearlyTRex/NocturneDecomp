// Name: core_event.cpp_FUN_004b0c40
// Address: 004b0c40
// Address Range: [[004b0c40, 004b0c76]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0c40()
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004afc09 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ab68c [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_FUN_004b0d60
//   core_event.cpp_FUN_004b0db0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b0c40(undefined4 param_1, undefined4 param_2) */

undefined4 core_event_cpp_FUN_004b0c40(void)

{
  int iVar1;
  int in_stack_00000004;
  
  core_event_cpp_FUN_004b0db0();
  iVar1 = core_event_cpp_FUN_004b0d60();
  if (-1 < iVar1) {
    return *(undefined4 *)(in_stack_00000004 + 0x3acc + iVar1 * 0x120);
  }
  return 0;
}


// Assembly code:
// 004b0c40: PUSH EBX
//   Label: core_event.cpp_FUN_004b0c40
// 004b0c41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b0c45: PUSH EBX
// 004b0c46: CALL core_event.cpp_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004b0c4b: ADD ESP,0x4
// 004b0c4e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004b0c52: PUSH EDX
// 004b0c53: PUSH EBX
// 004b0c54: CALL core_event.cpp_FUN_004b0d60
//   XREF to: 004b0d60 (UNCONDITIONAL_CALL)
// 004b0c59: ADD ESP,0x8
// 004b0c5c: TEST EAX,EAX
// 004b0c5e: JL 0x004b0c73
//   XREF to: 004b0c73 (CONDITIONAL_JUMP)
// 004b0c60: MOV EDX,EAX
// 004b0c62: SHL EAX,0x3
// 004b0c65: ADD EAX,EDX
// 004b0c67: SHL EAX,0x5
// 004b0c6a: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x3acc]
// 004b0c71: POP EBX
// 004b0c72: RET
// 004b0c73: XOR EAX,EAX
//   Label: LAB_004b0c73
// 004b0c75: POP EBX
// 004b0c76: RET
