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
      if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x34] == '\0') {
        if (ABS(*(float *)(player_control + 0x28)) < ABS(local_3c)) {
          *(float *)(player_control + 0x28) = local_3c;
        }
      }
      else if (ABS(*(float *)(player_control + 0x24)) < ABS(local_3c)) {
        *(float *)(player_control + 0x24) = local_3c;
      }
      if (ABS(*(float *)(player_control + 0x2c)) < ABS(local_40)) {
        *(float *)(player_control + 0x2c) = local_40;
        return;
      }
    }
  }
  return;
}
