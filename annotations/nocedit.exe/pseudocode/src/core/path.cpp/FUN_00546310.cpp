// Name: core_path.cpp_FUN_00546310
// Address: 00546310
// Address Range: [[00546310, 00546324]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00546310()
// Globals:
//   int g_PathfindingQueueHead
//   int g_PathfindingQueueTail
//   int g_PathfindingNodesExpanded

#include "nocturne.h"

void core_path_cpp_FUN_00546310(void)

{
  g_PathfindingQueueHead = 0;
  g_PathfindingQueueTail = 0;
  g_PathfindingNodesExpanded = 0;
  return;
}


// Assembly code:
// 00546310: XOR EDX,EDX
//   Label: core_path.cpp_FUN_00546310
// 00546312: MOV dword ptr [0x030d284c],EDX
//   XREF to: 030d284c (WRITE)
// 00546318: MOV dword ptr [0x030d2850],EDX
//   XREF to: 030d2850 (WRITE)
// 0054631e: MOV dword ptr [0x030d4fcc],EDX
//   XREF to: 030d4fcc (WRITE)
// 00546324: RET
