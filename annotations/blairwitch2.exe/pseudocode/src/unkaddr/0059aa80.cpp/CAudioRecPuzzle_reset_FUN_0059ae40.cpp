// Name: unkaddr_0059aa80.cpp_CAudioRecPuzzle_reset_FUN_0059ae40
// Address: 0059ae40
// Address Range: [[0059ae40, 0059af1f]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_0059aa80_cpp_CAudioRecPuzzle_reset_FUN_0059ae40(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkaddr_0059aa80_cpp_CAudioRecPuzzle_reset_FUN_0059ae40(CAudioRecPuzzle *this_ptr)

{
  this_ptr->cursor_offset_x[0] = 3;
  this_ptr->cursor_offset_y[0] = 2;
  this_ptr->cursor_offset_x[1] = 0x14;
  this_ptr->cursor_offset_y[1] = 6;
  this_ptr->cursor_offset_x[2] = 2;
  this_ptr->cursor_offset_y[2] = 6;
  this_ptr->cursor_offset_x[3] = 0x12;
  this_ptr->cursor_offset_y[3] = 6;
  this_ptr->cursor_index = 0;
  this_ptr->transport_state = 1;
  this_ptr->knob_positions[0] = 2;
  this_ptr->knob_positions[1] = 2;
  this_ptr->knob_positions[2] = 2;
  this_ptr->speed_setting = 3;
  this_ptr->power_on = 1;
  this_ptr->mouse_button = 0;
  this_ptr->previous_mouse_button = 0;
  this_ptr->click_handled = 0;
  _DAT_026677e4 = 0xffffffff;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&this_ptr->reel_model,"audioreel.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&this_ptr->reel_shadow_model,"audioreelshadow.kfm");
  this_ptr->reel_angle = 0.0;
  return;
}
