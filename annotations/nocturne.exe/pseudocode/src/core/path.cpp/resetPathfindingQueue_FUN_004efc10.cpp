// Name: core_path.cpp_resetPathfindingQueue_FUN_004efc10
// Address: 004efc10
// Address Range: [[004efc10, 004efc24]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetPathfindingQueue_FUN_004efc10(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetPathfindingQueue_FUN_004efc10(void)

{
  g_PathfindingQueueHead = 0;
  g_PathfindingQueueTail = 0;
  g_PathfindingNodesExpanded = 0;
  return;
}
