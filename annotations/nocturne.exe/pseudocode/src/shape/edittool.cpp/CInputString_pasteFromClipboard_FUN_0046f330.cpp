// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330
// Address: 0046f330
// Address Range: [[0046f330, 0046f388]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(0x01BCD074);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if (((&DAT_005c168c)[(byte)(character + 1)] & 8) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(this_ptr);
  return;
}
