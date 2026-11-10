// Name: core_game.cpp_FUN_004b7fc0
// Address: 004b7fc0
// Address Range: [[004b7fc0, 004b8026]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b7fc0(int param_1,int param_2)

#include "nocturne.h"

void core_game_cpp_FUN_004b7fc0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != *(int *)(param_1 + 0x25c)) && (*(int *)(param_1 + 0x25c) = param_2, param_2 == 0))
  {
    iVar1 = g_CDemonSetPtr->selected_camera_index;
    core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,g_CScriptPtr->focus_actor,1);
    g_CScriptPtr->focus_actor_changed = 0;
    if (iVar1 == g_CDemonSetPtr->selected_camera_index) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                (g_CDemonSetPtr,g_CDemonSetPtr->selected_camera_index);
      return;
    }
  }
  return;
}
