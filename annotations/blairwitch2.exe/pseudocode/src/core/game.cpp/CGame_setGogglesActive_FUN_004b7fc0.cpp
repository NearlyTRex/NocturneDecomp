// Name: core_game.cpp_CGame_setGogglesActive_FUN_004b7fc0
// Address: 004b7fc0
// Address Range: [[004b7fc0, 004b8026]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004b7fc0(CGame *this_ptr,int active)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004b7fc0(CGame *this_ptr,int active)

{
  int iVar1;
  
  if ((active != this_ptr->goggles_active) && (this_ptr->goggles_active = active, active == 0)) {
    iVar1 = g_CDemonSetPtr->selected_camera_index;
    core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00538d10
              (g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
    g_CScriptPtr->focus_actor_changed = 0;
    if (iVar1 == g_CDemonSetPtr->selected_camera_index) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      return;
    }
  }
  return;
}
