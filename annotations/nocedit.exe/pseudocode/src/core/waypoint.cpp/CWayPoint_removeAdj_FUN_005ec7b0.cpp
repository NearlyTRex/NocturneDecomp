// Name: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
// Address: 005ec7b0
// Address Range: [[005ec7b0, 005ec821]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0()
// Cross-references:
//   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640 (005ec640) at 005ec675 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec830 (005ec830) at 005ec861 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_waypoint_cpp_0065767a
//   TerminatedCString s_CWayPoint_removeAdj_inva_0065768f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_CWayPoint_removeAdj(CWayPoint* pWayPoint,
   undefined4 iIndex) */

void core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x370) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 399;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::removeAdj - invalid index");
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x370) + -1;
  *(int *)(in_stack_00000004 + 0x370) = iVar1;
  crt_string_c_memmove_FUN_005fe5e0
            ((void *)(in_stack_00000008 * 8 + in_stack_00000004 + 0x374),
             (void *)(in_stack_00000008 * 8 + 8 + in_stack_00000004 + 0x374),
             (iVar1 - in_stack_00000008) * 8);
  return;
}


// Assembly code:
// 005ec7b0: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
// 005ec7b1: PUSH ESI
// 005ec7b2: PUSH EBP
// 005ec7b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005ec7b7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ec7bb: TEST ESI,ESI
// 005ec7bd: JL 0x005ec7fb
//   XREF to: 005ec7fb (CONDITIONAL_JUMP)
// 005ec7bf: CMP ESI,dword ptr [EBX + 0x370]
// 005ec7c5: JGE 0x005ec7fb
//   XREF to: 005ec7fb (CONDITIONAL_JUMP)
// 005ec7c7: MOV EBP,dword ptr [EBX + 0x370]
//   Label: LAB_005ec7c7
// 005ec7cd: DEC EBP
// 005ec7ce: MOV EAX,EBP
// 005ec7d0: SUB EAX,ESI
// 005ec7d2: SHL EAX,0x3
// 005ec7d5: PUSH EAX
// 005ec7d6: LEA EAX,[ESI*0x8 + 0x0]
// 005ec7dd: ADD EBX,0x374
// 005ec7e3: LEA ESI,[EAX + 0x8]
// 005ec7e6: ADD ESI,EBX
// 005ec7e8: PUSH ESI
// 005ec7e9: ADD EAX,EBX
// 005ec7eb: PUSH EAX
// 005ec7ec: MOV dword ptr [EBX + -0x4],EBP
// 005ec7ef: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005ec7f4: ADD ESP,0xc
// 005ec7f7: POP EBP
// 005ec7f8: POP ESI
// 005ec7f9: POP EBX
// 005ec7fa: RET
// 005ec7fb: PUSH EDI
//   Label: LAB_005ec7fb
// 005ec7fc: MOV ECX,0x65767a
//   XREF to: 0065767a (PARAM)
// 005ec801: MOV EDI,0x18f
// 005ec806: PUSH 0x65768f
//   XREF to: 0065768f (DATA)
// 005ec80b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ec811: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ec817: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ec81c: ADD ESP,0x4
// 005ec81f: POP EDI
// 005ec820: JMP 0x005ec7c7
//   XREF to: 005ec7c7 (UNCONDITIONAL_JUMP)
