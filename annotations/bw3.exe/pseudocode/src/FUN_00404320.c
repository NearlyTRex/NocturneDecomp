// Name: FUN_00404320
// Address: 00404320
// Address Range: [[00404320, 00404363]]
// Convention: unknown
// Signature: int FUN_00404320(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404320(int param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c6e2cc;
  _DAT_01c6e2cc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c6e2d0;
  _DAT_01c6e2d0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)(int)_DAT_01c6e2d4;
  _DAT_01c6e2d4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return param_1 + 8;
}
