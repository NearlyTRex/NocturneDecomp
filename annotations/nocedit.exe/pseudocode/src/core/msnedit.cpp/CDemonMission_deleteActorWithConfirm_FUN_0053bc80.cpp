// Name: core_msnedit.cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053bce0]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(CDemonMission *this_ptr,CDemonActor *actor,int skip_confirmation)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_deleteActorWithConfirm_FUN_0053bc80(CDemonMission *this_ptr,CDemonActor *actor,int skip_confirmation)

{
  int iVar1;
  
  if (actor != (CDemonActor *)0x0) {
    if (skip_confirmation == 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Really delete actor %s",actor);
      if (iVar1 == 0) {
        return;
      }
    }
    if (actor == this_ptr->selected_actor) {
      core_msnedit_cpp_CDemonMission_selectNearestActor_FUN_0053bcf0(this_ptr);
    }
    core_msnedit_cpp_CDemonMission_deleteActor_FUN_00538ea0(this_ptr,actor);
    core_mission_cpp_CDemonMission_removeActor_FUN_00523f20(this_ptr,actor,1);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  }
  return;
}
