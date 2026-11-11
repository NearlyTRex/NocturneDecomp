// Name: unkafter_alphabit.cpp_CAudioRecPuzzle_reset_FUN_00415e70
// Address: 00415e70
// Address Range: [[00415e70, 00415faf]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_alphabit_cpp_CAudioRecPuzzle_reset_FUN_00415e70(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

void __cdecl unkafter_alphabit_cpp_CAudioRecPuzzle_reset_FUN_00415e70(CAudioRecPuzzle *this_ptr)

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
  this_ptr->playback_started = 0;
  this_ptr->transport_state = 1;
  this_ptr->knob_positions[0] = 2;
  this_ptr->knob_positions[1] = 2;
  this_ptr->knob_positions[2] = 2;
  this_ptr->speed_setting = 3;
  this_ptr->previous_speed_setting = 3;
  this_ptr->power_on = 1;
  this_ptr->mouse_button = 0;
  this_ptr->previous_mouse_button = 0;
  this_ptr->click_handled = 0;
  DAT_007c397c = 0xffffffff;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&this_ptr->reel_model,"audioreel.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&this_ptr->reel_shadow_model,"audioreelshadow.kfm");
  this_ptr->reel_angle = 0.0;
  this_ptr->solution[0] = 2;
  this_ptr->solution[1] = 2;
  this_ptr->solution[2] = 2;
  this_ptr->solution[3] = 2;
  this_ptr->solution[4] = 2;
  this_ptr->recording_id = 0;
  this_ptr->solved = 0;
  this_ptr->dial_sfx = 0;
  this_ptr->unknown_0x54 = 0;
  this_ptr->switch_sfx = 0;
  return;
}
