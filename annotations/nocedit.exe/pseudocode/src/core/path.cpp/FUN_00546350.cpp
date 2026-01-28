// Name: core_path.cpp_FUN_00546350
// Address: 00546350
// Address Range: [[00546350, 005463c5]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00546350(void)

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
