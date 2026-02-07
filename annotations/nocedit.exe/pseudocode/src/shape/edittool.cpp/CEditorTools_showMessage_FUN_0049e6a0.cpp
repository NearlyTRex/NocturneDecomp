// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
// Address: 0049e6a0
// Address Range: [[0049e6a0, 0049e6e3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools *this_ptr,char *format,...)

{
  va_list_t local_8;
  
  local_8.value[0] = (char * [1])&stack0x0000000c;
  vsprintf(g_MessageFormatBuffer,format,(va_list_t)&local_8);
  local_8.value[0] = (char * [1])(char *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Message",g_MessageFormatBuffer,g_WindowFontColor);
  return;
}
