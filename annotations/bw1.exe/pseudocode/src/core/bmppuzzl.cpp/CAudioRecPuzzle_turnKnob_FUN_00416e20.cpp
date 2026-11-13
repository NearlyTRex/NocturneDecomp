// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_turnKnob_FUN_00416e20
// Address: 00416e20
// Address Range: [[00416e20, 00416f06]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00416e20(CAudioRecPuzzle *this_ptr,int knob)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_turnKnob_FUN_00416e20(CAudioRecPuzzle *this_ptr,int knob)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = knob * 5 + 0xc;
  if (iVar1 != this_ptr->selected_button) {
    do {
      iVar1 = iVar1 + 1;
      if (knob * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != this_ptr->selected_button);
  }
  if (DAT_007c397c < _DAT_01c4353c) {
    iVar1 = this_ptr->knob_positions[knob] + 1;
    this_ptr->knob_positions[knob] = iVar1;
    if (iVar1 < 5) {
      this_ptr->transport_state = 100;
      uVar2 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-DIAL?.WAV");
      this_ptr->dial_sfx = uVar2;
    }
    else {
      this_ptr->knob_positions[knob] = 4;
    }
  }
  else {
    iVar1 = this_ptr->knob_positions[knob] + -1;
    this_ptr->knob_positions[knob] = iVar1;
    if (iVar1 < 0) {
      this_ptr->knob_positions[knob] = 0;
    }
    else {
      uVar2 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-DIAL?.WAV");
      this_ptr->transport_state = 100;
      this_ptr->dial_sfx = uVar2;
    }
  }
  DAT_007c397c = _DAT_01c4353c;
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
