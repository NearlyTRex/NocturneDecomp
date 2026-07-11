// Name: FUN_004c6cc0
// Address: 004c6cc0
// Address Range: [[004c6cc0, 004c6d63]]
// Convention: unknown
// Signature: int FUN_004c6cc0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c6cc0(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((uint)((longlong)param_1 * (longlong)_DAT_01c039dc) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)_DAT_01c039dc) >> 0x20) << 0x10) +
          ((uint)((longlong)param_2 * (longlong)_DAT_01c039e0) >> 0x10 |
          (int)((ulonglong)((longlong)param_2 * (longlong)_DAT_01c039e0) >> 0x20) << 0x10) +
          ((uint)((longlong)param_3 * (longlong)_DAT_01c039e4) >> 0x10 |
          (int)((ulonglong)((longlong)param_3 * (longlong)_DAT_01c039e4) >> 0x20) << 0x10);
  iVar2 = -iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar2) {
    iVar2 = 0xffff;
  }
  lVar1 = (longlong)iVar2 * (longlong)(0xffff - DAT_005bacd0);
  iVar3 = DAT_005bacd0 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (-1 < iVar3) {
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    return ((int)((iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0)) >> 4) +
           0x100;
  }
  return 0x100;
}
