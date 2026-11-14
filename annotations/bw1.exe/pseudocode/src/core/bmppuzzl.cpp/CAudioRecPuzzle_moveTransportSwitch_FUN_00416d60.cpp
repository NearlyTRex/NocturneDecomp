// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_00416d60
// Address: 00416d60
// Address Range: [[00416d60, 00416e16]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_00416d60(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_00416d60(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_007c397c;
  iVar1 = 2;
  if (this_ptr->selected_button != 2) {
    do {
      iVar1 = iVar1 + 1;
      if (4 < iVar1) {
        return;
      }
    } while (iVar1 != this_ptr->selected_button);
  }
  this_ptr->buttons[iVar1].visible = 0;
  if (iVar2 < _DAT_01c4353c) {
    iVar2 = this_ptr->transport_state + 1;
    this_ptr->transport_state = iVar2;
    if (2 < iVar2) {
      this_ptr->transport_state = 2;
    }
  }
  else {
    iVar2 = this_ptr->transport_state + -1;
    this_ptr->transport_state = iVar2;
    if (iVar2 < 0) {
      this_ptr->transport_state = 0;
    }
  }
  uVar3 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-FOWARD-SWITCH.WAV");
  this_ptr->switch_sfx = uVar3;
  DAT_007c397c = _DAT_01c4353c;
  if ((this_ptr->transport_state < 2) && (0 < this_ptr->transport_state)) {
    this_ptr->cursor_index = 1;
    return;
  }
  if (this_ptr->transport_state != 2) {
    this_ptr->cursor_index = 3;
    return;
  }
  this_ptr->cursor_index = 2;
  return;
}
