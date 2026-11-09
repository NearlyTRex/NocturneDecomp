// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0
// Address: 004931b0
// Address Range: [[004931b0, 004933df]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_004931b0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_004931b0(CInputString *this_ptr)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < *(int *)(this_ptr + 0x134)) {
      *(int *)(this_ptr + 0x134) = *(int *)(this_ptr + 0x134) + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (*(int *)(this_ptr + 0x134) < *(int *)(this_ptr + 0x130)) {
      *(int *)(this_ptr + 0x134) = *(int *)(this_ptr + 0x134) + 1;
    }
  }
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(this_ptr + 0x134) = 0;
  }
  iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(this_ptr + 0x134) = *(uint *)(this_ptr + 0x130);
  }
  iVar2 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x53);
      if (iVar2 != 0) {
        iVar2 = *(int *)(this_ptr + 0x134);
        if (iVar2 != *(int *)(this_ptr + 0x138)) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
          return;
        }
        shape_edittool_cpp_CInputString_deleteRange_FUN_00493000(this_ptr,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_00493150(this_ptr);
      }
      iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x53);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_00493150(this_ptr);
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_00493070(this_ptr);
    }
    wincore_winrun_cpp_clearKeypresses_FUN_005b24f0();
  }
  return;
}
