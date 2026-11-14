// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0
// Address: 0047bcf0
// Address Range: [[0047bcf0, 0047bd48]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00480db0(g_CEditorToolsPtr);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if (((&DAT_006074b8)[(byte)(character + 1)] & 8) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0047bb10(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(this_ptr);
  return;
}
