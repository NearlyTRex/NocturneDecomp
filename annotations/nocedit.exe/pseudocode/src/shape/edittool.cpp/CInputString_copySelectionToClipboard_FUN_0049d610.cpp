// Name: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
// Address: 0049d610
// Address Range: [[0049d610, 0049d65c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString *this_ptr)

{
  int iVar1;
  CEditorTools *this_ptr_00;
  int iVar2;
  int iVar3;
  char unaff_retaddr;
  
  this_ptr_00 = g_CEditorToolsPtr;
  iVar1 = this_ptr->cursor_position;
  iVar3 = this_ptr->selection_start;
  if (iVar3 != iVar1) {
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
      iVar3 = iVar1;
    }
    this_ptr->string_data[iVar2] = '\0';
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
              (this_ptr_00,this_ptr->string_data + iVar3);
    this_ptr->string_data[iVar2] = unaff_retaddr;
  }
  return;
}
