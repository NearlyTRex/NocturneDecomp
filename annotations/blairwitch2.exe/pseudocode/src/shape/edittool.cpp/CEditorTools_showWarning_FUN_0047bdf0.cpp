// Name: shape_edittool.cpp_CEditorTools_showWarning_FUN_0047bdf0
// Address: 0047bdf0
// Address Range: [[0047bdf0, 0047be33]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(CEditorTools *this_ptr,char *format)

{
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf((char *)0x1c229f0,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047b800
            ("Warning",(char *)0x1c229f0,_DAT_01c263a0);
  return;
}
