// Name: FUN_00507bf0
// Address: 00507bf0
// Address Range: [[00507bf0, 00507c66]]
// Convention: unknown
// Signature: void FUN_00507bf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507bf0(int param_1)

{
  *(int *)(&DAT_00629020 + param_1 * 0x30) =
       (int)(0x7fffffff / (longlong)(int)(&DAT_0062901c)[param_1 * 0xc]);
  (&DAT_00629024)[param_1 * 0xc] =
       (int)(((longlong)(int)(&DAT_00629014)[param_1 * 0xc] * (longlong)_DAT_01c4eff8) /
            (longlong)(int)(&DAT_0062901c)[param_1 * 0xc]) + _DAT_01c4f000;
  *(int *)(&DAT_00629028 + param_1 * 0x30) =
       (int)(((longlong)(int)(&DAT_00629018)[param_1 * 0xc] * (longlong)_DAT_01c4effc) /
            (longlong)(int)(&DAT_0062901c)[param_1 * 0xc]) + _DAT_01c4f004;
  return;
}
