// Name: shape_edittool.cpp_FUN_0047d980
// Address: 0047d980
// Address Range: [[0047d980, 0047da30]]
// Convention: unknown
// Signature: bool shape_edittool_cpp_FUN_0047d980(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool shape_edittool_cpp_FUN_0047d980(uint param_1,uint param_2)

{
  int iVar1;
  CStrList aCStack_418 [64];
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(aCStack_418,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bce9c);
  shape_edittool_cpp_CStrList_add_FUN_00482070(&CStack_18,(char *)0x5bcea1);
  iVar1 = shape_edittool_cpp_FUN_0047d230(aCStack_418,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_00481f40(&CStack_18,0);
  return iVar1 == 0;
}
