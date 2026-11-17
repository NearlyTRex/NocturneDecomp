// Name: core_path.cpp_queuePop_FUN_0050ac40
// Address: 0050ac40
// Address Range: [[0050ac40, 0050acbe]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_0050ac40(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
    g_CHAR_PTR_01d71de0 = "..\\core\\path.cpp";
    g_INT_01d71de4 = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_004e4330("queuePop - empty queue?!");
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
