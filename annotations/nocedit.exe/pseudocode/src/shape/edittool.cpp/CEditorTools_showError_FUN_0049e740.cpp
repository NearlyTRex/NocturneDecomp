// Name: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
// Address: 0049e740
// Address Range: [[0049e740, 0049e783]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *this_ptr,char *format,...)

{
  va_list_t local_8;
  
  local_8.value[0] = (char * [1])&stack0x0000000c;
  _vsprintf(g_ErrorMessageBuffer_02cef530,format,(va_list_t)&local_8);
  local_8.value[0] = (char * [1])(char *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Error",g_ErrorMessageBuffer_02cef530,INT_02cf2a94);
  return;
}
