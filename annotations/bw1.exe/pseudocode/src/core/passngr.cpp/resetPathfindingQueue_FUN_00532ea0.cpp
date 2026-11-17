// Name: core_passngr.cpp_resetPathfindingQueue_FUN_00532ea0
// Address: 00532ea0
// Address Range: [[00532ea0, 00532eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00532ea0(void)

#include "nocturne.h"

void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00532ea0(void)

{
  g_PathfindingQueueHead = 0;
  g_PathfindingQueueTail = 0;
  g_PathfindingNodesExpanded = 0;
  return;
}
