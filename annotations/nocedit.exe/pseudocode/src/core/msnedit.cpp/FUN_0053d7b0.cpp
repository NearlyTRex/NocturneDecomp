// Name: core_msnedit.cpp_FUN_0053d7b0
// Address: 0053d7b0
// Address Range: [[0053d7b0, 0053d85a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d7b0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053d7b0(uint param_1) */

void core_msnedit_cpp_FUN_0053d7b0(void)

{
  int iVar1;
  int iVar2;
  CDemonMission *in_stack_00000004;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  iVar2 = 0;
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  if (0 < (int)in_stack_00000004->set_list) {
    do {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s");
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
      for (iVar1 = 0; iVar1 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4); iVar1 = iVar1 + 1
          ) {
        core_waypoint_cpp_FUN_005ec4f0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_stack_00000004->set_list);
  }
  return;
}
