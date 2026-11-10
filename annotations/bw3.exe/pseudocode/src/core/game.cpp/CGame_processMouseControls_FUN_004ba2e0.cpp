// Name: core_game.cpp_CGame_processMouseControls_FUN_004ba2e0
// Address: 004ba2e0
// Address Range: [[004ba2e0, 004ba48e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004ba2e0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processMouseControls_FUN_004ba2e0(CGame *this_ptr,SPlayerInput *player_control)

{
  int x;
  int y;
  int iVar1;
  int iVar2;
  float local_40;
  float local_3c;
  
  core_game_cpp_FUN_004b9960(this_ptr,player_control);
  if (this_ptr->screen_clear_condition == 0) {
    x = DAT_005fba18 / 2;
    y = DAT_005fba1c / 2;
    iVar1 = _DAT_01c5fadc - x;
    iVar2 = _DAT_01c5fae0 - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005809d0(x,y);
    if (g_CDemonSetPtr->selected_camera_index == _DAT_01d221fc) {
      local_3c = (float)this_ptr->x_mouse_sensitivity * (float)_DAT_005c2830 * (float)_DAT_005c2838
                 * ((float)iVar1 / (float)x);
      local_40 = (float)this_ptr->y_mouse_sensitivity * (float)_DAT_005c2830 *
                 ((float)iVar2 / (float)y);
      if (local_3c < (float)_DAT_005c2840) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005c2840) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (this_ptr->invert_mouse_y_axis != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c6cef0)[*(int *)&this_ptr->field_0x34] == '\0') {
        if (ABS(*(float *)(player_control + 0x2c)) < ABS(local_3c)) {
          *(float *)(player_control + 0x2c) = local_3c;
        }
      }
      else if (ABS(*(float *)(player_control + 0x28)) < ABS(local_3c)) {
        *(float *)(player_control + 0x28) = local_3c;
      }
      if (ABS(*(float *)(player_control + 0x30)) < ABS(local_40)) {
        *(float *)(player_control + 0x30) = local_40;
        return;
      }
    }
  }
  return;
}
