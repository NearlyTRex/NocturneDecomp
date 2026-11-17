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
  iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD4);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < this_ptr->cursor_position) {
      this_ptr->cursor_position = this_ptr->cursor_position + -1;
    }
  }
  iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD6);
  if (iVar2 != 0) {
    bVar1 = true;
    if (this_ptr->cursor_position < this_ptr->current_length) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
    }
  }
  iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD7);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = 0;
  }
  iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD1);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = this_ptr->current_length;
  }
  iVar2 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LCONTROL);
  if (iVar2 == 0) {
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LSHIFT);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(this_ptr);
      }
      iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_DECIMAL)
      ;
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
      iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD0)
      ;
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(this_ptr);
      }
      iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_DECIMAL)
      ;
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
        return;
      }
    }
  }
  else {
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_X);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
    }
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD0);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
    }
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_C);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(this_ptr);
    }
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_V);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(this_ptr);
    }
    iVar2 = (*g_CKeys_PTR_00600284->vtable->getAndClearKeyState)(g_CKeys_PTR_00600284,DIK_DECIMAL);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0047bc10(this_ptr);
    }
    wincore_winrun_cpp_clearKeypresses_FUN_00580770();
  }
  return;
}
