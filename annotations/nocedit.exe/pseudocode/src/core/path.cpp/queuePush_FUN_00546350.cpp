// Name: core_path.cpp_queuePush_FUN_00546350
// Address: 00546350
// Address Range: [[00546350, 005463c5]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePush_FUN_00546350(int grid_x,int cost,int grid_z,char direction)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePush_FUN_00546350(int grid_x,int cost,int grid_z,char direction)

{
  int iVar1;
  
  g_PathfindingVisited[grid_z][grid_x] = direction;
  g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
  g_PathfindingQueue[g_PathfindingQueueTail].x = grid_x;
  g_PathfindingQueue[g_PathfindingQueueTail].cost = cost;
  iVar1 = g_PathfindingQueueTail + 1;
  g_PathfindingQueue[g_PathfindingQueueTail].z = grid_z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_PathfindingQueueTail = iVar1;
  return;
}
