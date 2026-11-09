// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0
// Address: 004942e0
// Address Range: [[004942e0, 0049433b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools *this_ptr,char *format)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_408,format,&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_drawSingleButtonPrompt_FUN_00493d40("Message",local_408,_DAT_01c3f55c)
  ;
  return;
}
