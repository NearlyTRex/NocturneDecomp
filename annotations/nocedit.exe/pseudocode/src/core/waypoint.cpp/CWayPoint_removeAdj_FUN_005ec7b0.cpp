// Name: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
// Address: 005ec7b0
// Address Range: [[005ec7b0, 005ec821]]
// Convention: unknown
// Signature: void core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(void)

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_CWayPoint_removeAdj(CWayPoint* pWayPoint,
   uint iIndex) */

void core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x370) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 399;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::removeAdj - invalid index");
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x370) + -1;
  *(int *)(in_stack_00000004 + 0x370) = iVar1;
  memmove
            ((void *)(in_stack_00000008 * 8 + in_stack_00000004 + 0x374),
             (void *)(in_stack_00000008 * 8 + 8 + in_stack_00000004 + 0x374),
             (iVar1 - in_stack_00000008) * 8);
  return;
}
