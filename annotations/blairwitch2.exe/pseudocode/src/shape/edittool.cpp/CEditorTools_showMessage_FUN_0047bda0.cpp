// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0
// Address: 0047bda0
// Address Range: [[0047bda0, 0047bde3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools *this_ptr,char *format)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(g_CHAR_ARRAY_01c225f0,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800
            ("Message",g_CHAR_ARRAY_01c225f0,g_WindowFontColor);
  return;
}
