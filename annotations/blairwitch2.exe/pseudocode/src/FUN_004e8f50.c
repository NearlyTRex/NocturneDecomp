// Name: FUN_004e8f50
// Address: 004e8f50
// Address Range: [[004e8f50, 004e8fc6]]
// Convention: unknown
// Signature: void FUN_004e8f50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8f50(int param_1)

{
  *(int *)(&DAT_00622020 + param_1 * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0062201c)[param_1 * 0xc]);
  (&DAT_00622024)[param_1 * 0xc] =
       (int)(((longlong)(int)(&DAT_00622014)[param_1 * 0xc] * (longlong)_DAT_01c35e38) /
            (longlong)(int)(&DAT_0062201c)[param_1 * 0xc]) + _DAT_01c35e40;
  *(int *)(&DAT_00622028 + param_1 * 0x30) =
       (int)(((longlong)(int)(&DAT_00622018)[param_1 * 0xc] * (longlong)_DAT_01c35e3c) /
            (longlong)(int)(&DAT_0062201c)[param_1 * 0xc]) + _DAT_01c35e44;
  return;
}
