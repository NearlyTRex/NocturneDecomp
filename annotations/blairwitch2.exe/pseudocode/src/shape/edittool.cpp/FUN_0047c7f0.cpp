// Name: shape_edittool.cpp_FUN_0047c7f0
// Address: 0047c7f0
// Address Range: [[0047c7f0, 0047c87a]]
// Convention: unknown
// Signature: bool shape_edittool_cpp_FUN_0047c7f0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool shape_edittool_cpp_FUN_0047c7f0(void)

{
  int iVar1;
  char *in_stack_00000008;
  CStrList CStack_18;
  byte *puStack_8;
  
  puStack_8 = &stack0x0000000c;
  _vsprintf((char *)0x1c23df0,in_stack_00000008,(va_list_t)&puStack_8);
  puStack_8 = (byte *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&CStack_18);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2041);
  shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_18,(char *)0x5d2046);
  iVar1 = shape_edittool_cpp_FUN_0047c0f0((CStrList *)0x1c23df0,(char *)&CStack_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_00480d40(&CStack_18,0);
  return iVar1 == 0;
}
