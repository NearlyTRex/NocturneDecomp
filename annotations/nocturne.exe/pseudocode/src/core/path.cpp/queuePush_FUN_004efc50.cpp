// Name: core_path.cpp_queuePush_FUN_004efc50
// Address: 004efc50
// Address Range: [[004efc50, 004efcc5]]
// Convention: unknown
// Signature: void core_path_cpp_queuePush_FUN_004efc50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_path_cpp_queuePush_FUN_004efc50(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  *(byte *)(in_stack_0000000c * 100 + in_stack_00000004 + 0x1e40098) = in_stack_00000010;
  _DAT_01e4280c = _DAT_01e4280c + 1;
  *(int *)(&DAT_01e3162c + _DAT_01e40090 * 0xc) = in_stack_00000004;
  *(uint *)(&DAT_01e31630 + _DAT_01e40090 * 0xc) = in_stack_00000008;
  iVar1 = _DAT_01e40090 + 1;
  *(int *)(&DAT_01e31634 + _DAT_01e40090 * 0xc) = in_stack_0000000c;
  if (4999 < iVar1) {
    iVar1 = 0;
  }
  _DAT_01e40090 = iVar1;
  return;
}
