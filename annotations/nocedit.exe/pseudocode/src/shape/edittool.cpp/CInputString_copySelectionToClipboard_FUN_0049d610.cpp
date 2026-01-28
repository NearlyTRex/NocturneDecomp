// Name: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
// Address: 0049d610
// Address Range: [[0049d610, 0049d65c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString *this_ptr)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  CEditorTools *this_ptr_00;
  int iVar4;
  int iVar5;
  
  this_ptr_00 = g_CEditorToolsPtr;
  iVar3 = this_ptr->cursor_position;
  iVar5 = this_ptr->selection_start;
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      iVar4 = iVar5;
      iVar5 = iVar3;
    }
    pcVar1 = this_ptr->string_data + iVar4;
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
              (this_ptr_00,this_ptr->string_data + iVar5);
    *pcVar1 = cVar2;
  }
  return;
}
