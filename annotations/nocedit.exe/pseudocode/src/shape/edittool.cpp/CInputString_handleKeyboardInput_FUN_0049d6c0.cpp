// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
// Address: 0049d6c0
// Address Range: [[0049d6c0, 0049d8ef]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString * this_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString *this_ptr)

{
  bool bVar1;
  int iVar2;
  uint uStack0000000c;
  uint uStack00000020;
  uint uStack00000034;
  uint uStack00000048;
  uint uStack0000005c;
  uint uStack00000070;
  uint uStack00000090;
  uint uStack000000d0;
  
  bVar1 = false;
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < this_ptr->cursor_position) {
      this_ptr->cursor_position = this_ptr->cursor_position + -1;
    }
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (this_ptr->cursor_position < this_ptr->current_length) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
    }
  }
  uStack0000000c = 0x49d736;
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = 0;
  }
  uStack00000020 = 0x49d759;
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = this_ptr->current_length;
  }
  uStack00000034 = 0x49d77d;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    uStack00000048 = 0x49d843;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
      if (iVar2 != 0) {
        iVar2 = this_ptr->cursor_position;
        if (iVar2 != this_ptr->selection_start) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
          return;
        }
        uStack00000070 = 0x49d8e8;
        shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      uStack0000005c = 0x49d857;
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(this_ptr);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
      if (iVar2 != 0) {
        uStack00000090 = 0x49d88a;
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
        return;
      }
    }
  }
  else {
    uStack00000048 = 0x49d796;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
    }
    uStack000000d0 = 0x49d832;
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  }
  return;
}
