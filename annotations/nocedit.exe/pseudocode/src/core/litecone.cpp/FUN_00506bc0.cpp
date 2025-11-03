// Name: core_litecone.cpp_FUN_00506bc0
// Address: 00506bc0
// Address Range: [[00506bc0, 00506c1f]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506bc0()
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   CEventList g_CEventListInstance
// Function calls:
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0

#include "nocturne.h"

/* Signature: undefined1 actors_other_litecone.cpp_FUN_00506bc0(undefined4 param_1) */

void core_litecone_cpp_FUN_00506bc0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x160) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x164));
    if (iVar1 != 0) {
      *(undefined4 *)(in_stack_00000004 + 0x160) = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x1c8));
    if (iVar1 != 0) {
      *(undefined4 *)(in_stack_00000004 + 0x160) = 0;
      return;
    }
  }
  return;
}


// Assembly code:
// 00506bc0: PUSH EBX
//   Label: core_litecone.cpp_FUN_00506bc0
// 00506bc1: PUSH ESI
// 00506bc2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00506bc6: CMP dword ptr [EBX + 0x160],0x0
// 00506bcd: JNZ 0x00506bf9
//   XREF to: 00506bf9 (CONDITIONAL_JUMP)
// 00506bcf: LEA EAX,[EBX + 0x164]
// 00506bd5: PUSH EAX
// 00506bd6: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00506bdc: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00506bdd: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00506be2: ADD ESP,0x8
// 00506be5: TEST EAX,EAX
// 00506be7: JNZ 0x00506bec
//   XREF to: 00506bec (CONDITIONAL_JUMP)
// 00506be9: POP ESI
//   Label: LAB_00506be9
// 00506bea: POP EBX
// 00506beb: RET
// 00506bec: MOV dword ptr [EBX + 0x160],0x1
//   Label: LAB_00506bec
// 00506bf6: POP ESI
// 00506bf7: POP EBX
// 00506bf8: RET
// 00506bf9: LEA EAX,[EBX + 0x1c8]
//   Label: LAB_00506bf9
// 00506bff: PUSH EAX
// 00506c00: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00506c06: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00506c07: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00506c0c: ADD ESP,0x8
// 00506c0f: TEST EAX,EAX
// 00506c11: JZ 0x00506be9
//   XREF to: 00506be9 (CONDITIONAL_JUMP)
// 00506c13: MOV dword ptr [EBX + 0x160],0x0
// 00506c1d: POP ESI
// 00506c1e: POP EBX
// 00506c1f: RET
