// Name: core_game.cpp_SettingCursorPos_FUN_004dccc0
// Address: 004dccc0
// Address Range: [[004dccc0, 004dce6e]]
// Convention: __cdecl
// Signature: void core_game.cpp_SettingCursorPos_FUN_004dccc0(CGame * game, SPlayerControl * ctrl)

#include "nocturne.h"

void __cdecl core_game_cpp_SettingCursorPos_FUN_004dccc0(CGame *game,SPlayerControl *ctrl)

{
  int x;
  int y;
  int iVar1;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(game,ctrl);
  if (game->screen_clear_condition == 0) {
    x = g_WindowWidth / 2;
    y = g_WindowHeight / 2;
    iVar1 = g_MouseY - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(x,y);
    if (g_CDemonSetPtr->selected_camera_index == g_StoredCameraValue) {
      fStack_34 = (float)game->x_mouse_sensitivity * (float)1.52587890625e-05 * (float)0.75
                  * ((float)iVar1 / (float)local_18);
      fStack_38 = (float)game->y_mouse_sensitivity * (float)1.52587890625e-05 * ((float)x / (float)y);
      if (fStack_34 < (float)-1) {
        fStack_34 = -1.0;
      }
      if (1.0 < fStack_34) {
        fStack_34 = 1.0;
      }
      if (fStack_38 < (float)-1) {
        fStack_38 = -1.0;
      }
      if (1.0 < fStack_38) {
        fStack_38 = 1.0;
      }
      if (game->invert_mouse_y_axis != 0) {
        fStack_38 = -fStack_38;
      }
      if (g_KeyboardState[game->key_strafe] == '\0') {
        if (ABS(ctrl->turn_speed) < ABS(fStack_34)) {
          ctrl->turn_speed = fStack_34;
        }
      }
      else if (ABS(ctrl->strafe_speed) < ABS(fStack_34)) {
        ctrl->strafe_speed = fStack_34;
      }
      if (ABS(ctrl->look_up_down_speed) < ABS(fStack_38)) {
        ctrl->look_up_down_speed = fStack_38;
        return;
      }
    }
  }
  return;
}
