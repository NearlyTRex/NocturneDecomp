// Name: core_passngr.cpp_resetPathfindingQueue_FUN_00511b50
// Address: 00511b50
// Address Range: [[00511b50, 00511b64]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00511b50(void)

#include "nocturne.h"

void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00511b50(void)

{
  g_PathfindingQueueHead = 0;
  g_PathfindingQueueTail = 0;
  g_PathfindingNodesExpanded = 0;
  return;
}
