// Name: shape_edittool.cpp_FUN_00494ea0
// Address: 00494ea0
// Address Range: [[00494ea0, 00494fc2]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00494ea0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_00494ea0(uint param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)aCStack_418,param_2,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00499380(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,(char *)0x5dbde8);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,(char *)0x5dbdf9);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_00494690(aCStack_418,(char *)&CStack_18,0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&CStack_18,0);
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&CStack_18,0);
  return uVar2;
}
