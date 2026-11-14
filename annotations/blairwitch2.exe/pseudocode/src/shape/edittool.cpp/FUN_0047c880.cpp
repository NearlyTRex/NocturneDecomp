// Name: shape_edittool.cpp_FUN_0047c880
// Address: 0047c880
// Address Range: [[0047c880, 0047c96a]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_0047c880(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint shape_edittool_cpp_FUN_0047c880(void)

{
  int iVar1;
  uint uVar2;
  char *in_stack_00000008;
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)0x1c241f0,in_stack_00000008,(va_list_t)&puStack_8);
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
