// Name: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// Address: 005ec700
// Address Range: [[005ec700, 005ec7a3]]
// Convention: unknown
// Signature: void core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(void)

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_CWayPoint_addAdj(CWayPoint* param_1, uint
   param_2) */

void core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_waypoint_cpp_FUN_005ec830();
  core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
  if (0x3b < *(int *)(in_stack_00000004 + 0x370)) {
    g_CurrentFilename = "..\\core\\waypoint.cpp";
    g_CurrentLineNumber = 0x188;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWayPoint::addAdj - too many adjacent waypoints!");
  }
  *(int *)(in_stack_00000004 + 0x374 + *(int *)(in_stack_00000004 + 0x370) * 8) = in_stack_00000008;
  fVar1 = *(float *)(in_stack_00000004 + 0x20) - *(float *)(in_stack_00000008 + 0x20);
  fVar3 = *(float *)(in_stack_00000004 + 0x24) - *(float *)(in_stack_00000008 + 0x24);
  fVar2 = *(float *)(in_stack_00000004 + 0x28) - *(float *)(in_stack_00000008 + 0x28);
  *(float *)(in_stack_00000004 + 0x378 + *(int *)(in_stack_00000004 + 0x370) * 8) =
       SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  *(int *)(in_stack_00000004 + 0x370) = *(int *)(in_stack_00000004 + 0x370) + 1;
  return;
}
