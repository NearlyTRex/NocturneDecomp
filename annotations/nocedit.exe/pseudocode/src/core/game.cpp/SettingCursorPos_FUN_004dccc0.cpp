// Name: core_game.cpp_SettingCursorPos_FUN_004dccc0
// Address: 004dccc0
// Address Range: [[004dccc0, 004dce6e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_SettingCursorPos_FUN_004dccc0(CGame *game,SPlayerControl *ctrl)

#include "nocturne.h"

void __cdecl core_game_cpp_SettingCursorPos_FUN_004dccc0(CGame *game,SPlayerControl *ctrl)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(game,ctrl);
  if (game->screen_clear_condition == 0) {
    x = g_WindowWidth / 2;
    y = g_WindowHeight / 2;
    iVar1 = g_MouseX - x;
    iVar2 = g_MouseY - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(x,y);
    if (g_CDemonSetPtr->selected_camera_index == g_StoredCameraValue) {
      local_3c = (float)game->x_mouse_sensitivity * (float)1.52587890625e-05 * (float)0.75
                 * ((float)iVar1 / (float)x);
      local_40 = (float)game->y_mouse_sensitivity * (float)1.52587890625e-05 *
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
      if (game->invert_mouse_y_axis != 0) {
        local_40 = -local_40;
      }
      if (g_KeyboardState[game->key_strafe] == '\0') {
        if (ABS(ctrl->turn_speed) < ABS(local_3c)) {
          ctrl->turn_speed = local_3c;
        }
      }
      else if (ABS(ctrl->strafe_speed) < ABS(local_3c)) {
        ctrl->strafe_speed = local_3c;
      }
      if (ABS(ctrl->look_up_down_speed) < ABS(local_40)) {
        ctrl->look_up_down_speed = local_40;
        return;
      }
    }
  }
  return;
}
