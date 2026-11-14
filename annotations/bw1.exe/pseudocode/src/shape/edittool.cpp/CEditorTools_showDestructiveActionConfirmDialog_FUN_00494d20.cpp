// Name: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20
// Address: 00494d20
// Address Range: [[00494d20, 00494dd0]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20(CEditorTools *this_ptr,char *format_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20(CEditorTools *this_ptr,char *format_string)

{
  int iVar1;
  CStrList local_418 [64];
  CStrList local_18;
  byte *local_8;
  
  local_8 = &stack0x0000000c;
  _vsprintf((char *)local_418,format_string,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00499380(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_18,&DAT_005dbdd6);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_18,&DAT_005dbddb);
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_00494690(local_418,(char *)&local_18,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&local_18,0);
  return (uint)(iVar1 == 0);
}
