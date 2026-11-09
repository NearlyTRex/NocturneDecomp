// Name: shape_edittool.cpp_FUN_0047c7ee
// Address: 0047c7ee
// Address Range: [[0047c7ee, 0047c87a]]
// Convention: unknown
// Signature: bool shape_edittool_cpp_FUN_0047c7ee(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool shape_edittool_cpp_FUN_0047c7ee(uint param_1,uint param_2)

{
  int iVar1;
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(0x1c23df0,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2041);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2046);
  iVar1 = shape_edittool_cpp_FUN_0047c0f0((CStrList *)0x1c23df0,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&CStack_18,0);
  return iVar1 == 0;
}
