// Name: core_passngr.cpp_FUN_0050abc0
// Address: 0050abc0
// Address Range: [[0050abc0, 0050ac35]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_0050abc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_passngr_cpp_FUN_0050abc0(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  *(byte *)(in_stack_0000000c * 100 + in_stack_00000004 + 0x1ed02b8) = in_stack_00000010;
  _DAT_01ed2a2c = _DAT_01ed2a2c + 1;
  *(int *)(&DAT_01ec184c + _DAT_01ed02b0 * 0xc) = in_stack_00000004;
  *(uint *)(&DAT_01ec1850 + _DAT_01ed02b0 * 0xc) = in_stack_00000008;
  iVar1 = _DAT_01ed02b0 + 1;
  *(int *)(&DAT_01ec1854 + _DAT_01ed02b0 * 0xc) = in_stack_0000000c;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01ed02b0 = iVar1;
  return;
}
