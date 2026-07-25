// Name: FUN_00526020
// Address: 00526020
// Address Range: [[00526020, 00526083]]
// Convention: unknown
// Signature: void FUN_00526020(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00526020(void)

{
  int iVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1b9c) = in_stack_00000004;
  *(uint *)(iVar1 + 0x2dc1ba0) = in_stack_00000008;
  *(uint *)(iVar1 + 0x2dc1ba4) = in_stack_0000000c;
  *(uint *)(iVar1 + 0x2dc1ba8) = in_stack_00000010;
  *(uint *)(iVar1 + 0x2dc1bac) = in_stack_00000014;
  *(uint *)(iVar1 + 0x2dc1bb0) = in_stack_00000018;
  *(uint *)(iVar1 + 0x2dc1bb4) = 0;
  *(uint *)(iVar1 + 0x2dc1bb8) = 0;
  return;
}
