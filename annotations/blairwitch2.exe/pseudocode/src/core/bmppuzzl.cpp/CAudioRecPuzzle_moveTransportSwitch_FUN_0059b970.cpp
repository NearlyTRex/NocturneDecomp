// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_0059b970
// Address: 0059b970
// Address Range: [[0059b970, 0059ba0f]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_0059b970(CAudioRecPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_0059b970(CAudioRecPuzzle *this_ptr)

{
  int iVar1;
  
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
  if (_DAT_026677e4 < _DAT_01c2a37c) {
    iVar1 = this_ptr->transport_state + 1;
    this_ptr->transport_state = iVar1;
    if (2 < iVar1) {
      this_ptr->transport_state = 2;
    }
  }
  else {
    iVar1 = this_ptr->transport_state + -1;
    this_ptr->transport_state = iVar1;
    if (iVar1 < 0) {
      this_ptr->transport_state = 0;
    }
  }
  _DAT_026677e4 = _DAT_01c2a37c;
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
