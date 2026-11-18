// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_00494de0
// Address: 00494de0
// Address Range: [[00494de0, 00494e90]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_00494de0(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_00494de0(CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)aCStack_418,format_string,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00499380(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,"^No");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_00494690(aCStack_418,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&CStack_18,0);
  return (uint)(iVar1 == 0);
}
