// Name: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0
// Address: 0046f2e0
// Address Range: [[0046f2e0, 0046f32c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(CInputString *this_ptr)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  CEditorTools *this_ptr_00;
  int iVar4;
  int iVar5;
  
  this_ptr_00 = 0x01BCD074;
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
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_00472d10
              (this_ptr_00,this_ptr->string_data + iVar5);
    *pcVar1 = cVar2;
  }
  return;
}
