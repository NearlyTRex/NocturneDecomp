// Name: core_path.cpp_queuePop_FUN_00532f60
// Address: 00532f60
// Address Range: [[00532f60, 00532fde]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_queuePop_FUN_00532f60(int *out_x,int *out_cost,int *out_z)

#include "nocturne.h"

void __cdecl core_path_cpp_queuePop_FUN_00532f60(int *out_x,int *out_cost,int *out_z)

{
  int iVar1;
  
  if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
    g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
    g_INT_01d1d404 = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_005030e0("queuePop - empty queue?!");
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
