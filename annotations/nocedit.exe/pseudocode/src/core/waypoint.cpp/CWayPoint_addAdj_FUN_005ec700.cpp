// Name: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// Address: 005ec700
// Address Range: [[005ec700, 005ec7a3]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700()
// Cross-references:
//   core_waypoint.cpp_FUN_005ec4f0 (005ec4f0) at 005ec5b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_waypoint_cpp_00657634
//   TerminatedCString s_CWayPoint_addAdj_too_man_00657649
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
//   core_waypoint.cpp_FUN_005ec830

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_CWayPoint_addAdj(CWayPoint* param_1, undefined4
   param_2) */

void core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_waypoint_cpp_FUN_005ec830();
  core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
  if (0x3b < *(int *)(in_stack_00000004 + 0x370)) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 0x188;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::addAdj - too many adjacent waypoints!");
  }
  *(int *)(in_stack_00000004 + 0x374 + *(int *)(in_stack_00000004 + 0x370) * 8) = in_stack_00000008;
  fVar1 = *(float *)(in_stack_00000004 + 0x20) - *(float *)(in_stack_00000008 + 0x20);
  fVar3 = *(float *)(in_stack_00000004 + 0x24) - *(float *)(in_stack_00000008 + 0x24);
  fVar2 = *(float *)(in_stack_00000004 + 0x28) - *(float *)(in_stack_00000008 + 0x28);
  *(float *)(in_stack_00000004 + 0x378 + *(int *)(in_stack_00000004 + 0x370) * 8) =
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  *(int *)(in_stack_00000004 + 0x370) = *(int *)(in_stack_00000004 + 0x370) + 1;
  return;
}


// Assembly code:
// 005ec700: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// 005ec701: PUSH ESI
// 005ec702: SUB ESP,0x10
// 005ec705: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005ec709: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005ec70d: PUSH EBX
// 005ec70e: CALL core_waypoint.cpp_FUN_005ec830
//   XREF to: 005ec830 (UNCONDITIONAL_CALL)
// 005ec713: ADD ESP,0x4
// 005ec716: PUSH ESI
// 005ec717: PUSH EBX
// 005ec718: CALL core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
//   XREF to: 005ec640 (UNCONDITIONAL_CALL)
// 005ec71d: MOV EDX,dword ptr [EBX + 0x370]
// 005ec723: ADD ESP,0x8
// 005ec726: CMP EDX,0x3c
// 005ec729: JGE 0x005ec77d
//   XREF to: 005ec77d (CONDITIONAL_JUMP)
// 005ec72b: MOV EAX,dword ptr [EBX + 0x370]
//   Label: LAB_005ec72b
// 005ec731: LEA EDX,[EBX + 0x20]
// 005ec734: MOV dword ptr [EBX + EAX*0x8 + 0x374],ESI
// 005ec73b: LEA EAX,[ESI + 0x20]
// 005ec73e: FLD float ptr [EDX]
// 005ec740: FSUB float ptr [EAX]
// 005ec742: FMUL ST0
// 005ec744: FLD float ptr [EDX + 0x4]
// 005ec747: FSUB float ptr [EAX + 0x4]
// 005ec74a: FMUL ST0
// 005ec74c: FLD float ptr [EDX + 0x8]
// 005ec74f: FXCH
// 005ec751: FADDP ST2,ST0
// 005ec753: FSUB float ptr [EAX + 0x8]
// 005ec756: FMUL ST0
// 005ec758: FADDP
// 005ec75a: FSQRT
// 005ec75c: MOV EAX,dword ptr [EBX + 0x370]
// 005ec762: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005ec766: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 005ec76a: MOV dword ptr [EBX + EAX*0x8 + 0x378],EDX
// 005ec771: INC dword ptr [EBX + 0x370]
// 005ec777: ADD ESP,0x10
// 005ec77a: POP ESI
// 005ec77b: POP EBX
// 005ec77c: RET
// 005ec77d: PUSH EDI
//   Label: LAB_005ec77d
// 005ec77e: MOV ECX,0x657634
//   XREF to: 00657634 (PARAM)
// 005ec783: MOV EDI,0x188
// 005ec788: PUSH 0x657649
//   XREF to: 00657649 (DATA)
// 005ec78d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ec793: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ec799: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ec79e: ADD ESP,0x4
// 005ec7a1: POP EDI
// 005ec7a2: JMP 0x005ec72b
//   XREF to: 005ec72b (UNCONDITIONAL_JUMP)
