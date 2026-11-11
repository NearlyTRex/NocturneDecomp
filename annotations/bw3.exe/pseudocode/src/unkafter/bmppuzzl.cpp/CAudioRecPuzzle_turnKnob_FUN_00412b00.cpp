// Name: unkafter_bmppuzzl.cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00
// Address: 00412b00
// Address Range: [[00412b00, 00412bbd]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00(CAudioRecPuzzle *this_ptr,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00(CAudioRecPuzzle *this_ptr,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 5 + 0xc;
  if (iVar1 != this_ptr->selected_button) {
    do {
      iVar1 = iVar1 + 1;
      if (param_2 * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != this_ptr->selected_button);
  }
  if (DAT_007dffb8 < _DAT_01c5fadc) {
    this_ptr->knob_positions[param_2] = this_ptr->knob_positions[param_2] + 1;
    this_ptr->transport_state = 1;
    if (4 < this_ptr->knob_positions[param_2]) {
      this_ptr->knob_positions[param_2] = 4;
    }
  }
  else {
    this_ptr->knob_positions[param_2] = this_ptr->knob_positions[param_2] + -1;
    this_ptr->transport_state = 1;
    if (this_ptr->knob_positions[param_2] < 0) {
      this_ptr->knob_positions[param_2] = 0;
    }
  }
  DAT_007dffb8 = _DAT_01c5fadc;
  if ((this_ptr->knob_positions[param_2] < 4) && (0 < this_ptr->knob_positions[param_2])) {
    this_ptr->cursor_index = 1;
    return;
  }
  if (this_ptr->knob_positions[param_2] != 4) {
    this_ptr->cursor_index = 3;
    return;
  }
  this_ptr->cursor_index = 2;
  return;
}
