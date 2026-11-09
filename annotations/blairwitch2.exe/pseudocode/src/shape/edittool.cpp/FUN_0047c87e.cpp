// Name: shape_edittool.cpp_FUN_0047c87e
// Address: 0047c87e
// Address Range: [[0047c87e, 0047c96a]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_0047c87e(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_0047c87e(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf(0x1c241f0,param_2,&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d204a);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d205b);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,"^Cancel");
  iVar1 = shape_edittool_cpp_FUN_0047c0f0((CStrList *)0x1c241f0,(char *)&CStack_18,0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&CStack_18,0);
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&CStack_18,0);
  return uVar2;
}
