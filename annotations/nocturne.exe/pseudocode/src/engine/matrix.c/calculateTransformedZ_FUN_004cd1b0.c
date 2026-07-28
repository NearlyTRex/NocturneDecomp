// Name: engine_matrix.c_calculateTransformedZ_FUN_004cd1b0
// Address: 004cd1b0
// Address Range: [[004cd1b0, 004cd207]]
// Convention: unknown
// Signature: int engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int engine_matrix_c_calculateTransformedZ_FUN_004cd1b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *in_stack_00000004;
  
  lVar1 = (longlong)_DAT_01c039f0 * (longlong)(*in_stack_00000004 - _DAT_01c039b8);
  lVar2 = (longlong)_DAT_01c039fc * (longlong)(in_stack_00000004[1] - _DAT_01c039bc);
  lVar3 = (longlong)_DAT_01c03a08 * (longlong)(in_stack_00000004[2] - _DAT_01c039c0);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}
