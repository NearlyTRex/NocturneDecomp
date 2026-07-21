// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330
// Address: 0046f330
// Address Range: [[0046f330, 0046f388]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(undefined4 param_1)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(uint param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(0x01BCD074);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 8) != 0) {
      if (cVar1 == '\t') {
        cVar1 = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(param_1,cVar1,1);
    }
    pcVar2 = pcVar2 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(param_1);
  return;
}
