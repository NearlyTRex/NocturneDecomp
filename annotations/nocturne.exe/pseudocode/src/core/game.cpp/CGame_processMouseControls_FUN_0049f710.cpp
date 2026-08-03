// Name: core_game.cpp_CGame_processMouseControls_FUN_0049f710
// Address: 0049f710
// Address Range: [[0049f710, 0049f8be]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_0049f710(CGame *this_ptr,SPlayerInput *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_CGame_processKeyboardControls_FUN_0049ee30(this_ptr,player_control);
  if (this_ptr->screen_clear_condition == 0) {
    x = DAT_005b761c / 2;
    y = DAT_005b7620 / 2;
    iVar1 = _DAT_01bd1d8c - x;
    iVar2 = _DAT_01bd1d90 - y;
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(x,y);
    if (g_CDemonSet_PTR_005be368->selected_camera_index == _DAT_01c7841c) {
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
      if ((&DAT_01c02598)[this_ptr->key_strafe] == '\0') {
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
