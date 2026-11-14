// Name: shape_edittool.cpp_FUN_0047da40
// Address: 0047da40
// Address Range: [[0047da40, 0047db62]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_0047da40(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_0047da40(uint param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)aCStack_418,param_2,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bcea5);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bceb6);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0047d230(aCStack_418,(char *)&CStack_18,0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&CStack_18,0);
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&CStack_18,0);
  return uVar2;
}
