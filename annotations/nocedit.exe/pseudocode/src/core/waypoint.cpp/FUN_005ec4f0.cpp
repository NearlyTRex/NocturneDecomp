// Name: core_waypoint.cpp_FUN_005ec4f0
// Address: 005ec4f0
// Address Range: [[005ec4f0, 005ec5d6]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_FUN_005ec4f0(void)

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ec4f0(uint param_1) */

void __cdecl core_waypoint_cpp_FUN_005ec4f0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
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
    if (*(int *)(g_CDemonSetPtr->unk4 + 0x5dc4) <= iVar3) {
      return;
    }
    if ((((*(int *)(g_CDemonSetPtr->unk4 + iVar2 + 0x5dc8) != in_stack_00000004) &&
         (*(int *)(*(int *)(g_CDemonSetPtr->unk4 + iVar2 + 0x5dc8) + 0x370) < 0x3c)) &&
        (bVar1 = core_waypoint_cpp_FUN_005ebd40(), CONCAT31(extraout_var,bVar1) != 0)) &&
       (bVar1 = core_waypoint_cpp_FUN_005ebd40(), CONCAT31(extraout_var_00,bVar1) != 0)) {
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
