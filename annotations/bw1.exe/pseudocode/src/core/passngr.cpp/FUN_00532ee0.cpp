// Name: core_passngr.cpp_FUN_00532ee0
// Address: 00532ee0
// Address Range: [[00532ee0, 00532f55]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00532ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_passngr_cpp_FUN_00532ee0(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  *(byte *)(in_stack_0000000c * 100 + in_stack_00000004 + 0x1e7abe8) = in_stack_00000010;
  _DAT_01e7d35c = _DAT_01e7d35c + 1;
  *(int *)(&DAT_01e6c17c + _DAT_01e7abe0 * 0xc) = in_stack_00000004;
  *(uint *)(&DAT_01e6c180 + _DAT_01e7abe0 * 0xc) = in_stack_00000008;
  iVar1 = _DAT_01e7abe0 + 1;
  *(int *)(&DAT_01e6c184 + _DAT_01e7abe0 * 0xc) = in_stack_0000000c;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e7abe0 = iVar1;
  return;
}
