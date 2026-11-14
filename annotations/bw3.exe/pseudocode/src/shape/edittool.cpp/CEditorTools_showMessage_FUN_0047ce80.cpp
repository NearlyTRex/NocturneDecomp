// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80
// Address: 0047ce80
// Address Range: [[0047ce80, 0047cedb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools *this_ptr,char *format)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_408,format,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_0047c8e0("Message",local_408,_DAT_01c5bb04)
  ;
  return;
}
