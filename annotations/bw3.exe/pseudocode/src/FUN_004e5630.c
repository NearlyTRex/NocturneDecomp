// Name: FUN_004e5630
// Address: 004e5630
// Address Range: [[004e5630, 004e56a6]]
// Convention: unknown
// Signature: void FUN_004e5630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5630(int param_1)

{
  *(int *)(&DAT_0060b020 + param_1 * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0060b01c)[param_1 * 0xc]);
  (&DAT_0060b024)[param_1 * 0xc] =
       (int)(((longlong)(int)(&DAT_0060b014)[param_1 * 0xc] * (longlong)_DAT_01c6b598) /
            (longlong)(int)(&DAT_0060b01c)[param_1 * 0xc]) + _DAT_01c6b5a0;
  *(int *)(&DAT_0060b028 + param_1 * 0x30) =
       (int)(((longlong)(int)(&DAT_0060b018)[param_1 * 0xc] * (longlong)_DAT_01c6b59c) /
            (longlong)(int)(&DAT_0060b01c)[param_1 * 0xc]) + _DAT_01c6b5a4;
  return;
}
