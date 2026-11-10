// Name: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0
// Address: 0047d8c0
// Address Range: [[0047d8c0, 0047d970]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0(CEditorTools *this_ptr,char *format_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0(CEditorTools *this_ptr,char *format_string)

{
  int iVar1;
  CStrList local_418 [64];
  CStrList local_18;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf(local_418,format_string,&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&local_18,&DAT_005bce93);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&local_18,&DAT_005bce98);
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0047d230(local_418,(char *)&local_18,1);
  shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&local_18,0);
  return (uint)(iVar1 == 0);
}
