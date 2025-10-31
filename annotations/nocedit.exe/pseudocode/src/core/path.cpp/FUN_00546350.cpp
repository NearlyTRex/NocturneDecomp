// Name: core_path.cpp_FUN_00546350
// Address: 00546350
// Address Range: [[00546350, 005463c5]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00546350()
// Globals:
//   CPathQueueNode[5000] g_PathfindingQueue
//   undefined4 g_PathfindingQueue[0].cost
//   undefined4 g_PathfindingQueue[0].z
//   int g_PathfindingQueueTail
//   char[101][100] g_PathfindingVisited
//   int g_PathfindingNodesExpanded

#include "nocturne.h"

void core_path_cpp_FUN_00546350(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  char in_stack_00000010;
  
  g_PathfindingVisited[in_stack_0000000c][in_stack_00000004] = in_stack_00000010;
  g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
  g_PathfindingQueue[g_PathfindingQueueTail].x = in_stack_00000004;
  g_PathfindingQueue[g_PathfindingQueueTail].cost = in_stack_00000008;
  iVar1 = g_PathfindingQueueTail + 1;
  g_PathfindingQueue[g_PathfindingQueueTail].z = in_stack_0000000c;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_PathfindingQueueTail = iVar1;
  return;
}


// Assembly code:
// 00546350: PUSH EBX
//   Label: core_path.cpp_FUN_00546350
// 00546351: MOV ECX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 00546357: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0054635b: LEA EAX,[EDX*0x4 + 0x0]
// 00546362: SUB EAX,EDX
// 00546364: SHL EAX,0x3
// 00546367: ADD EAX,EDX
// 00546369: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054636d: SHL EAX,0x2
// 00546370: ADD EAX,EDX
// 00546372: MOV DL,byte ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00546376: MOV byte ptr [EAX + 0x30d2858],DL
//   XREF to: 030d2858 (DATA)
// 0054637c: LEA EAX,[ECX*0x4 + 0x0]
// 00546383: MOV EBX,dword ptr [0x030d4fcc]
//   XREF to: 030d4fcc (READ)
// 00546389: SUB EAX,ECX
// 0054638b: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054638f: INC EBX
// 00546390: MOV dword ptr [EAX*0x4 + 0x30c3dec],EDX
//   XREF to: 030c3dec (DATA)
// 00546397: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054639b: MOV dword ptr [0x030d4fcc],EBX
//   XREF to: 030d4fcc (WRITE)
// 005463a1: MOV dword ptr [EAX*0x4 + 0x30c3df0],EDX
//   XREF to: 030c3df0 (DATA)
// 005463a8: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005463ac: INC ECX
// 005463ad: MOV dword ptr [EAX*0x4 + 0x30c3df4],EDX
//   XREF to: 030c3df4 (DATA)
// 005463b4: CMP ECX,0x1388
// 005463ba: JL 0x005463be
//   XREF to: 005463be (CONDITIONAL_JUMP)
// 005463bc: XOR ECX,ECX
// 005463be: MOV dword ptr [0x030d2850],ECX
//   Label: LAB_005463be
//   XREF to: 030d2850 (WRITE)
// 005463c4: POP EBX
// 005463c5: RET
