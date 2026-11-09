// Name: shape_edittool.cpp_FUN_00494de0
// Address: 00494de0
// Address Range: [[00494de0, 00494e90]]
// Convention: unknown
// Signature: bool shape_edittool_cpp_FUN_00494de0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool shape_edittool_cpp_FUN_00494de0(uint param_1,uint param_2)

{
  int iVar1;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(aCStack_418,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00499380(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,(char *)0x5dbddf);
  shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_18,(char *)0x5dbde4);
  iVar1 = shape_edittool_cpp_FUN_00494690(aCStack_418,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004993a0(&CStack_18,0);
  return iVar1 == 0;
}
