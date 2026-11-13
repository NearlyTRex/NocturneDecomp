// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_turnKnob_FUN_0059ba10
// Address: 0059ba10
// Address Range: [[0059ba10, 0059bac4]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_0059ba10(CAudioRecPuzzle *this_ptr,int knob)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_0059ba10(CAudioRecPuzzle *this_ptr,int knob)

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
  if (_DAT_026677e4 < _DAT_01c2a37c) {
    iVar1 = this_ptr->knob_positions[knob] + 1;
    this_ptr->knob_positions[knob] = iVar1;
    if (4 < iVar1) {
      this_ptr->knob_positions[knob] = 4;
    }
  }
  else {
    iVar1 = this_ptr->knob_positions[knob] + -1;
    this_ptr->knob_positions[knob] = iVar1;
    if (iVar1 < 0) {
      this_ptr->knob_positions[knob] = 0;
    }
  }
  _DAT_026677e4 = _DAT_01c2a37c;
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
