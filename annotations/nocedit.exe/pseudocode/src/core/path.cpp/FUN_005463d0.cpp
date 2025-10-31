// Name: core_path.cpp_FUN_005463d0
// Address: 005463d0
// Address Range: [[005463d0, 0054644e]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_005463d0()
// Globals:
//   TerminatedCString s_core_path_cpp_0063e878
//   TerminatedCString s_queuePop_empty_queue_0063e889
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CPathQueueNode[5000] g_PathfindingQueue
//   undefined4 g_PathfindingQueue[0].cost
//   undefined4 g_PathfindingQueue[0].z
//   int g_PathfindingQueueHead
//   int g_PathfindingQueueTail
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void core_path_cpp_FUN_005463d0(void)

{
  int iVar1;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int *in_stack_00000010;
  
  if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("queuePop - empty queue?!");
  }
  *in_stack_00000008 = g_PathfindingQueue[g_PathfindingQueueHead].x;
  *in_stack_0000000c = g_PathfindingQueue[g_PathfindingQueueHead].cost;
  iVar1 = g_PathfindingQueueHead + 1;
  *in_stack_00000010 = g_PathfindingQueue[g_PathfindingQueueHead].z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_PathfindingQueueHead = iVar1;
  return;
}


// Assembly code:
// 005463d0: PUSH EBX
//   Label: core_path.cpp_FUN_005463d0
// 005463d1: MOV EBX,dword ptr [0x030d284c]
//   XREF to: 030d284c (READ)
// 005463d7: CMP EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 005463dd: JZ 0x00546428
//   XREF to: 00546428 (CONDITIONAL_JUMP)
// 005463df: MOV EBX,dword ptr [0x030d284c]
//   Label: LAB_005463df
//   XREF to: 030d284c (READ)
// 005463e5: LEA EAX,[EBX*0x4 + 0x0]
// 005463ec: SUB EAX,EBX
// 005463ee: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005463f2: MOV EDX,dword ptr [EAX*0x4 + 0x30c3dec]
//   XREF to: 030c3dec (DATA)
// 005463f9: MOV dword ptr [ECX],EDX
// 005463fb: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005463ff: MOV EDX,dword ptr [EAX*0x4 + 0x30c3df0]
//   XREF to: 030c3df0 (DATA)
// 00546406: MOV dword ptr [ECX],EDX
// 00546408: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0054640c: MOV EAX,dword ptr [EAX*0x4 + 0x30c3df4]
//   XREF to: 030c3df4 (DATA)
// 00546413: INC EBX
// 00546414: MOV dword ptr [EDX],EAX
// 00546416: CMP EBX,0x1388
// 0054641c: JL 0x00546420
//   XREF to: 00546420 (CONDITIONAL_JUMP)
// 0054641e: XOR EBX,EBX
// 00546420: MOV dword ptr [0x030d284c],EBX
//   Label: LAB_00546420
//   XREF to: 030d284c (WRITE)
// 00546426: POP EBX
// 00546427: RET
// 00546428: PUSH ESI
//   Label: LAB_00546428
// 00546429: MOV ECX,0x63e878
//   XREF to: 0063e878 (DATA)
// 0054642e: MOV ESI,0xdf
// 00546433: PUSH 0x63e889
//   XREF to: 0063e889 (DATA)
// 00546438: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054643e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00546444: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00546449: ADD ESP,0x4
// 0054644c: POP ESI
// 0054644d: JMP 0x005463df
//   XREF to: 005463df (UNCONDITIONAL_JUMP)
