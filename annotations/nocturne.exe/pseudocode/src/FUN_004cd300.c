// Name: FUN_004cd300
// Address: 004cd300
// Address Range: [[004cd300, 004cd376]]
// Convention: unknown
// Signature: void FUN_004cd300(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd300(int param_1)

{
  *(int *)(&DAT_005c5020 + param_1 * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_005c501c)[param_1 * 0xc]);
  (&DAT_005c5024)[param_1 * 0xc] =
       (int)(((longlong)(int)(&DAT_005c5014)[param_1 * 0xc] * (longlong)_DAT_01c00c48) /
            (longlong)(int)(&DAT_005c501c)[param_1 * 0xc]) + _DAT_01c00c50;
  *(int *)(&DAT_005c5028 + param_1 * 0x30) =
       (int)(((longlong)(int)(&DAT_005c5018)[param_1 * 0xc] * (longlong)_DAT_01c00c4c) /
            (longlong)(int)(&DAT_005c501c)[param_1 * 0xc]) + _DAT_01c00c54;
  return;
}
