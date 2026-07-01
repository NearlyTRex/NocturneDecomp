// Name: core_path.cpp_queuePop_FUN_005463d0
// Address: 005463d0
// Address Range: [[005463d0, 0054644e]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_005463d0(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_005463d0(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 223;
    core_main_c_displayErrorAndQuit_FUN_00506f10("queuePop - empty queue?!");
  }
  *out_x = g_PathfindingQueue[g_PathfindingQueueHead].x;
  *out_cost = g_PathfindingQueue[g_PathfindingQueueHead].cost;
  iVar1 = g_PathfindingQueueHead + 1;
  *out_z = g_PathfindingQueue[g_PathfindingQueueHead].z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_PathfindingQueueHead = iVar1;
  return;
}
