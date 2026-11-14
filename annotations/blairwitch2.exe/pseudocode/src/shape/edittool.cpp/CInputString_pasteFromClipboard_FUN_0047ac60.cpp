// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60
// Address: 0047ac60
// Address Range: [[0047ac60, 0047acb8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047ac60(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0047ac60(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_0047fbb0(g_CEditorToolsPtr);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if (((&DAT_0061ed94)[(byte)(character + 1)] & 8) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0047aa80(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(this_ptr);
  return;
}
