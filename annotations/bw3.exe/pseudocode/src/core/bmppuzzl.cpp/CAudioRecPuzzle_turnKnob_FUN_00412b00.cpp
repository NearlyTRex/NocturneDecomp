// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00
// Address: 00412b00
// Address Range: [[00412b00, 00412bbd]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00(CAudioRecPuzzle *this_ptr,int knob)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00412b00(CAudioRecPuzzle *this_ptr,int knob)

{
  int iVar1;
  
  iVar1 = knob * 5 + 0xc;
  if (iVar1 != this_ptr->selected_button) {
    do {
      iVar1 = iVar1 + 1;
      if (knob * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != this_ptr->selected_button);
  }
  if (DAT_007dffb8 < _DAT_01c5fadc) {
    this_ptr->knob_positions[knob] = this_ptr->knob_positions[knob] + 1;
    this_ptr->transport_state = 1;
    if (4 < this_ptr->knob_positions[knob]) {
      this_ptr->knob_positions[knob] = 4;
    }
  }
  else {
    this_ptr->knob_positions[knob] = this_ptr->knob_positions[knob] + -1;
    this_ptr->transport_state = 1;
    if (this_ptr->knob_positions[knob] < 0) {
      this_ptr->knob_positions[knob] = 0;
    }
  }
  DAT_007dffb8 = _DAT_01c5fadc;
  if ((this_ptr->knob_positions[knob] < 4) && (0 < this_ptr->knob_positions[knob])) {
    this_ptr->cursor_index = 1;
    return;
  }
  if (this_ptr->knob_positions[knob] != 4) {
    this_ptr->cursor_index = 3;
    return;
  }
  this_ptr->cursor_index = 2;
  return;
}
