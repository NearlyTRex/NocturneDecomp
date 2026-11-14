// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0
// Address: 0047acc0
// Address Range: [[0047acc0, 0047aeef]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047acc0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047acc0(CInputString *this_ptr)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < this_ptr->cursor_position) {
      this_ptr->cursor_position = this_ptr->cursor_position + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (this_ptr->cursor_position < this_ptr->current_length) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
    }
  }
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = 0;
  }
  iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = this_ptr->current_length;
  }
  iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x53);
      if (iVar2 != 0) {
        iVar2 = this_ptr->cursor_position;
        if (iVar2 != this_ptr->selection_start) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
          return;
        }
        shape_edittool_cpp_CInputString_deleteRange_FUN_0047ab10(this_ptr,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047ac60(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x53);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047ac60(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047ab80(this_ptr);
    }
    wincore_winrun_cpp_clearKeypresses_FUN_0058eab0();
  }
  return;
}
