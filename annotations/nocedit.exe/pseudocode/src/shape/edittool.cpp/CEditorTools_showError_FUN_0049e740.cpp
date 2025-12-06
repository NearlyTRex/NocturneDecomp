// Name: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
// Address: 0049e740
// Address Range: [[0049e740, 0049e783]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format, ...)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_ErrorMessageBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Error",g_ErrorMessageBuffer,(int)g_CUserInterfacePtr);
  return;
}
