// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
// Address: 0049d660
// Address Range: [[0049d660, 0049d6b8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if ((g_CharacterClassificationTable[(byte)(character + 1)] & 8) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
  return;
}
