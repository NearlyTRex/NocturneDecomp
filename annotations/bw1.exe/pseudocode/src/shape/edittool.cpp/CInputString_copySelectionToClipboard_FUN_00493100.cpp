// Name: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_00493100
// Address: 00493100
// Address Range: [[00493100, 0049314c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(CInputString *this_ptr)

{
  CInputString *pCVar1;
  CInputString CVar2;
  int iVar3;
  CEditorTools *this_ptr_00;
  int iVar4;
  int iVar5;
  
  this_ptr_00 = g_CEditorToolsPtr;
  iVar3 = *(int *)(this_ptr + 0x134);
  iVar5 = *(int *)(this_ptr + 0x138);
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      iVar4 = iVar5;
      iVar5 = iVar3;
    }
    pCVar1 = this_ptr + iVar4;
    CVar2 = *pCVar1;
    *pCVar1 = (CInputString)0x0;
    shape_edittool_cpp_FUN_00498290(this_ptr_00,(char *)(this_ptr + iVar5));
    *pCVar1 = CVar2;
  }
  return;
}
