// Name: core_path.cpp_FUN_005463d0
// Address: 005463d0
// Address Range: [[005463d0, 0054644e]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_005463d0(void)

#include "nocturne.h"

void core_path_cpp_FUN_005463d0(void)

{
  int iVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
    g_CurrentFilename = "..\\core\\path.cpp";
    g_CurrentLineNumber = 0xdf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("queuePop - empty queue?!");
  }
  *in_stack_00000004 = g_PathfindingQueue[g_PathfindingQueueHead].x;
  *in_stack_00000008 = g_PathfindingQueue[g_PathfindingQueueHead].cost;
  iVar1 = g_PathfindingQueueHead + 1;
  *in_stack_0000000c = g_PathfindingQueue[g_PathfindingQueueHead].z;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  g_PathfindingQueueHead = iVar1;
  return;
}
