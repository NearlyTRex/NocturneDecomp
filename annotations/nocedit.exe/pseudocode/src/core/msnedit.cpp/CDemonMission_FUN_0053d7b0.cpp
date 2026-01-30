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
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  iVar2 = 0;
  core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
  if (0 < (int)this_ptr->set_list) {
    do {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s");
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
      for (iVar1 = 0; iVar1 < *(int *)(g_CDemonSetPtr->unk4 + 0x5dc4); iVar1 = iVar1 + 1) {
        core_waypoint_cpp_FUN_005ec4f0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this_ptr->set_list);
  }
  return;
}
