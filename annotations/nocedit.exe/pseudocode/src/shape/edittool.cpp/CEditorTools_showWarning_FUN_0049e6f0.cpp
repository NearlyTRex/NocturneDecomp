// Name: shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
// Address: 0049e6f0
// Address Range: [[0049e6f0, 0049e733]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format, ...)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  
  crt_stdio_c_vsprintf_FUN_005fdba8(g_DialogMessageBuffer,format,(va_list_t *)&stack0xfffffff8);
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0049e130
            ("Warning",g_DialogMessageBuffer,(int)g_DialogParentWindow);
  return;
}
