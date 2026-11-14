// Name: shape_edittool.cpp_CEditorTools_showError_FUN_004943a0
// Address: 004943a0
// Address Range: [[004943a0, 004943fb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_004943a0(CEditorTools *this_ptr,char *format)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_408,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40("Error",local_408,_DAT_01c3f564);
  return;
}
