// Name: shape_edittool.cpp_CEditorTools_showWarning_FUN_00494340
// Address: 00494340
// Address Range: [[00494340, 0049439b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_00494340(CEditorTools *this_ptr,char *format,...)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_408,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40
            ("Warning",local_408,g_WarningTextColor);
  return;
}
