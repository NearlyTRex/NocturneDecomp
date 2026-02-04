// Name: core_msnedit.cpp_CDemonMission_FUN_0053d7b0
// Address: 0053d7b0
// Address Range: [[0053d7b0, 0053d85a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d7b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d7b0(CDemonMission *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  iVar4 = 0;
  core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  if (0 < (int)this_ptr->set_list) {
    do {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s");
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
      iVar2 = 0;
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
      for (iVar3 = 0; iVar3 < *(int *)(g_CDemonSetPtr->unk4 + 0x5dc4); iVar3 = iVar3 + 1) {
        iVar1 = iVar2 + 0x5dc8;
        iVar2 = iVar2 + 4;
        core_waypoint_cpp_CWayPoint_FUN_005ec4f0(*(CWayPoint **)(g_CDemonSetPtr->unk4 + iVar1));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)this_ptr->set_list);
  }
  return;
}
