// Name: core_game.cpp_CGame_processMouseControls_FUN_004dccc0
// Address: 004dccc0
// Address Range: [[004dccc0, 004dce6e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004dccc0(CGame *this_ptr,SPlayerControl *player_control)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004dccc0(CGame *this_ptr,SPlayerControl *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_CGame_processKeyboardControls_FUN_004dc3e0(this_ptr,player_control);
  if (this_ptr->screen_clear_condition == 0) {
    x = g_WindowWidth / 2;
    y = g_WindowHeight / 2;
    iVar1 = g_MouseX - x;
    iVar2 = g_MouseY - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(x,y);
    if (g_CDemonSetPtr->selected_camera_index == g_StoredCameraValue) {
      local_3c = (float)this_ptr->x_mouse_sensitivity * (float)1.52587890625e-05 *
                 (float)0.75 * ((float)iVar1 / (float)x);
      local_40 = (float)this_ptr->y_mouse_sensitivity * (float)1.52587890625e-05 *
                 ((float)iVar2 / (float)y);
      if (local_3c < (float)-1) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)-1) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (this_ptr->invert_mouse_y_axis != 0) {
        local_40 = -local_40;
      }
      if (g_KeyboardState[this_ptr->key_strafe] == '\0') {
        if (ABS(player_control->turn_speed) < ABS(local_3c)) {
          player_control->turn_speed = local_3c;
        }
      }
      else if (ABS(player_control->strafe_speed) < ABS(local_3c)) {
        player_control->strafe_speed = local_3c;
      }
      if (ABS(player_control->look_up_down_speed) < ABS(local_40)) {
        player_control->look_up_down_speed = local_40;
        return;
      }
    }
  }
  return;
}
