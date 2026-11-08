// Name: FUN_005724e0
// Address: 005724e0
// Address Range: [[005724e0, 0057250d]]
// Convention: unknown
// Signature: void FUN_005724e0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005724e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 +
          ((uint)((longlong)_DAT_01c5fad0 * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)_DAT_01c5fad0 * 0x6270) >> 0x20) << 0x10);
  *param_1 = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  *param_1 = iVar1 + -0x8000000;
  return;
}
