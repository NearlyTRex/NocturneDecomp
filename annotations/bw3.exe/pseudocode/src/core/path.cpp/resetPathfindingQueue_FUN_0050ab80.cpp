// Name: core_path.cpp_resetPathfindingQueue_FUN_0050ab80
// Address: 0050ab80
// Address Range: [[0050ab80, 0050ab94]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetPathfindingQueue_FUN_0050ab80(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetPathfindingQueue_FUN_0050ab80(void)

{
  g_PathfindingQueueHead = 0;
  g_PathfindingQueueTail = 0;
  g_PathfindingNodesExpanded = 0;
  return;
}
