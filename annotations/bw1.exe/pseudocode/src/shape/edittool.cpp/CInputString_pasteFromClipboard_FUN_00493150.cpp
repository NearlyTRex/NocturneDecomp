// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_00493150
// Address: 00493150
// Address Range: [[00493150, 004931a8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_00493150(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_00493150(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00498210(g_CEditorToolsPtr);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if (((&DAT_00626114)[(byte)(character + 1)] & 8) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_00492f70(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(this_ptr);
  return;
}
