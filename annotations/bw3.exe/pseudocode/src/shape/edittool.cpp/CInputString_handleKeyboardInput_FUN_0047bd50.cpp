// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50
// Address: 0047bd50
// Address Range: [[0047bd50, 0047bf7f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(CInputString *this_ptr)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < this_ptr->cursor_position) {
      this_ptr->cursor_position = this_ptr->cursor_position + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (this_ptr->cursor_position < this_ptr->current_length) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = 0;
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = this_ptr->current_length;
  }
  iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
      if (iVar2 != 0) {
        iVar2 = this_ptr->cursor_position;
        if (iVar2 != this_ptr->selection_start) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
          return;
        }
        shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(this_ptr,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
    }
    wincore_winrun_cpp_clearKeypresses_FUN_00580770();
  }
  return;
}
