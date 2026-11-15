// Name: shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0047da40
// Address: 0047da40
// Address Range: [[0047da40, 0047db62]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0047da40(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0047da40(CEditorTools *this_ptr,char *format,...)

{
  int iVar1;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)aCStack_418,format,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bcea5);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bceb6);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0047d230(aCStack_418,(char *)&CStack_18,0);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&CStack_18,0);
      return -1;
    }
    iVar1 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&CStack_18,0);
  return iVar1;
}
