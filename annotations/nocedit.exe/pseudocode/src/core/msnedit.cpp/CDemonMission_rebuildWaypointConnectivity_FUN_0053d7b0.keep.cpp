// Name: core_msnedit.cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0
// Address: 0053d7b0
// MANUAL RECONSTRUCTION
// Address Range: [[0053d7b0, 0053d85a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_rebuildWaypointConnectivity_FUN_0053d7b0(CDemonMission *this_ptr)

{
  int iVar3;
  int set_index;

  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  for (set_index = 0; set_index < this_ptr->num_sets; set_index = set_index + 1) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s",
               this_ptr->set_names[set_index]);
    core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,set_index);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    for (iVar3 = 0; iVar3 < g_CDemonSetPtr->waypoint_count; iVar3 = iVar3 + 1) {
      core_waypoint_cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0
                (g_CDemonSetPtr->waypoints[iVar3]);
    }
  }
  return;
}
