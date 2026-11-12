// Name: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760
// Address: 0047c760
// Address Range: [[0047c760, 0047c7ea]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760(CEditorTools *this_ptr,char *format_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047c760(CEditorTools *this_ptr,char *format_string)

{
  int iVar1;
  CStrList local_18;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf((char *)0x1c239f0,format_string,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_18,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&local_18,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_FUN_0047c0f0((CStrList *)0x1c239f0,(char *)&local_18,1);
  shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&local_18,0);
  return (uint)(iVar1 == 0);
}
