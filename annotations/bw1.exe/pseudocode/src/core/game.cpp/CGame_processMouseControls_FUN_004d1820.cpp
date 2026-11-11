// Name: core_game.cpp_CGame_processMouseControls_FUN_004d1820
// Address: 004d1820
// Address Range: [[004d1820, 004d19ce]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004d1820(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004d1820(CGame *this_ptr,SPlayerInput *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_FUN_004d0ee0(this_ptr,player_control);
  if (this_ptr->screen_clear_condition == 0) {
    x = DAT_0061b498 / 2;
    y = DAT_0061b49c / 2;
    iVar1 = _DAT_01c4353c - x;
    iVar2 = _DAT_01c43540 - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(x,y);
    if (g_CDemonSetPtr->selected_camera_index == _DAT_01cd01f4) {
      local_3c = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005e19f4 * (float)_DAT_005e19fc
                 * ((float)iVar1 / (float)x);
      local_40 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005e19f4 *
                 ((float)iVar2 / (float)y);
      if (local_3c < (float)_DAT_005e1a04) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005e1a04) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (this_ptr->invert_mouse_y_axis != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c50950)[this_ptr->key_strafe] == '\0') {
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
