// Name: core_passngr.cpp_FUN_00511b90
// Address: 00511b90
// Address Range: [[00511b90, 00511c05]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00511b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_passngr_cpp_FUN_00511b90(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  *(byte *)(in_stack_0000000c * 100 + in_stack_00000004 + 0x1e5ec78) = in_stack_00000010;
  _DAT_01e613ec = _DAT_01e613ec + 1;
  *(int *)(&DAT_01e5020c + _DAT_01e5ec70 * 0xc) = in_stack_00000004;
  *(uint *)(&DAT_01e50210 + _DAT_01e5ec70 * 0xc) = in_stack_00000008;
  iVar1 = _DAT_01e5ec70 + 1;
  *(int *)(&DAT_01e50214 + _DAT_01e5ec70 * 0xc) = in_stack_0000000c;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e5ec70 = iVar1;
  return;
}
