// Name: shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
// Address: 0047be40
// Address Range: [[0047be40, 0047be83]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(CEditorTools *this_ptr,char *format)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(g_CHAR_ARRAY_01c22df0,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800
            ("Error",g_CHAR_ARRAY_01c22df0,g_INT_01c263a4);
  return;
}
