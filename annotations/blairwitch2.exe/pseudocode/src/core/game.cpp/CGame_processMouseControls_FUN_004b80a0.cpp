// Name: core_game.cpp_CGame_processMouseControls_FUN_004b80a0
// Address: 004b80a0
// Address Range: [[004b80a0, 004b824e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004b80a0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004b80a0(CGame *this_ptr,SPlayerInput *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_FUN_004b76c0(this_ptr,player_control);
  if (this_ptr->screen_clear_condition == 0) {
    x = DAT_006141b8 / 2;
    y = DAT_006141bc / 2;
    iVar1 = _DAT_01c2a37c - x;
    iVar2 = _DAT_01c2a380 - y;
    wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(x,y);
    if (g_CDemonSetPtr->selected_camera_index == _DAT_01cb7784) {
      local_3c = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005d78f3 * (float)_DAT_005d78fb
                 * ((float)iVar1 / (float)x);
      local_40 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005d78f3 *
                 ((float)iVar2 / (float)y);
      if (local_3c < (float)_DAT_005d7903) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005d7903) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (this_ptr->invert_mouse_y_axis != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c37790)[this_ptr->key_strafe] == '\0') {
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
