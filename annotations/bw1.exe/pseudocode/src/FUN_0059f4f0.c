// Name: FUN_0059f4f0
// Address: 0059f4f0
// Address Range: [[0059f4f0, 0059f51d]]
// Convention: unknown
// Signature: void FUN_0059f4f0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059f4f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 +
          ((uint)((longlong)_DAT_01c43530 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c43530 * 0x6270) >> 0x20) << 0x10);
  *param_1 = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  *param_1 = iVar1 + -0x8000000;
  return;
}
