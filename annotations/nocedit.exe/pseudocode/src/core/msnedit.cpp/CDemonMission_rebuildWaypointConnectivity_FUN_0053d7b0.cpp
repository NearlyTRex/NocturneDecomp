// Name: core_msnedit.cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0
// Address: 0053d7b0
// Address Range: [[0053d7b0, 0053d85a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int set_index;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  set_index = 0;
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  if (0 < this_ptr->num_sets) {
    do {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s");
      core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,set_index);
      iVar2 = 0;
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->waypoint_count; iVar3 = iVar3 + 1) {
        puVar1 = (uint *)((int)g_CDemonSetPtr->waypoints + iVar2);
        iVar2 = iVar2 + 4;
        core_waypoint_cpp_CWayPoint_FUN_005ec4f0((CWayPoint *)*puVar1);
      }
      set_index = set_index + 1;
    } while (set_index < this_ptr->num_sets);
  }
  return;
}
