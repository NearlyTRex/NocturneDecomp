// Name: core_msnedit.cpp_CDemonMission_selectActor_FUN_0053c140
// Address: 0053c140
// Address Range: [[0053c140, 0053c203]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(CDemonMission *this_ptr,CDemonActor *actor)

{
  int set_index;
  _FILE *file_handle;
  
  remove("$$UNDO$$.TMP");
  g_SelectedMotionPropertyIndex = -1;
  this_ptr->selected_actor = actor;
  if (actor != (CDemonActor *)0x0) {
    actor->is_editor_hidden = 0;
    set_index = (this_ptr->selected_actor->location).area_id;
    if (set_index != this_ptr->current_set_index) {
      core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0(this_ptr,set_index);
    }
    if ((INT_02f7c53c == 0) && (g_CEdCheckInstance.checked_state != 0)) {
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,this_ptr->selected_actor,1);
    }
    file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("$$UNDO$$.TMP",(char *)0x0,"wt",
                             "..\\core\\msnedit.cpp",2558);
    if (file_handle != (_FILE *)0x0) {
      core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
      core_actor_cpp_CDemonActor_save_FUN_0040af30(this_ptr->selected_actor,file_handle);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",2562);
      return;
    }
  }
  return;
}
