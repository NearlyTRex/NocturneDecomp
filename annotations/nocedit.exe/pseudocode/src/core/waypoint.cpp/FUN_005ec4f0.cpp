// Name: core_waypoint.cpp_FUN_005ec4f0
// Address: 005ec4f0
// Address Range: [[005ec4f0, 005ec5d6]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec4f0()

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ec4f0(uint param_1) */

void core_waypoint_cpp_FUN_005ec4f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  core_waypoint_cpp_FUN_005ec830();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      iVar2 = iVar2 + 1;
      core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x370));
  }
  iVar3 = 0;
  iVar2 = 0;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(g_CDemonMissionPtr);
  *(uint *)(in_stack_00000004 + 0x370) = 0;
  do {
    if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4) <= iVar3) {
      return;
    }
    if ((((*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 0x5dc8) != in_stack_00000004) &&
         (*(int *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 0x5dc8) + 0x370) < 0x3c)) &&
        (iVar1 = core_waypoint_cpp_FUN_005ebd40(), iVar1 != 0)) &&
       (iVar1 = core_waypoint_cpp_FUN_005ebd40(), iVar1 != 0)) {
      core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700();
      core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700();
      if (0x3b < *(int *)(in_stack_00000004 + 0x370)) {
        return;
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
