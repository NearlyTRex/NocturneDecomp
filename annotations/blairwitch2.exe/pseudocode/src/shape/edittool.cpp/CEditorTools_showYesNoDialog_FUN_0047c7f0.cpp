// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0047c7f0
// Address: 0047c7f0
// Address Range: [[0047c7f0, 0047c87a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0047c7f0(CEditorTools *this_ptr,char *format_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0047c7f0(CEditorTools *this_ptr,char *format_string)

{
  int iVar1;
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)0x1c23df0,format_string,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2041);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2046);
  iVar1 = shape_edittool_cpp_FUN_0047c0f0((CStrList *)0x1c23df0,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&CStack_18,0);
  return (uint)(iVar1 == 0);
}
