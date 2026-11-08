// Name: FUN_004e0bb0
// Address: 004e0bb0
// Address Range: [[004e0bb0, 004e0df0]]
// Convention: unknown
// Signature: int FUN_004e0bb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e0bb0(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int aiStackY_100c [1017];
  int local_24;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar3 = ((uint)((longlong)param_1 * (longlong)_DAT_01c6e2f0) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)_DAT_01c6e2f0) >> 0x20) << 0x10) +
          ((uint)((longlong)param_2 * (longlong)_DAT_01c6e2f4) >> 0x10 |
          (int)((ulonglong)((longlong)param_2 * (longlong)_DAT_01c6e2f4) >> 0x20) << 0x10) +
          ((uint)((longlong)param_3 * (longlong)_DAT_01c6e2f8) >> 0x10 |
          (int)((ulonglong)((longlong)param_3 * (longlong)_DAT_01c6e2f8) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - DAT_006002c4);
  uVar5 = DAT_006002c4 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (0x00000001 == 0) {
    uVar5 = (uint)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x20) << 0x10;
    goto LAB_004e0d78;
  }
  iVar4 = ((uint)((longlong)param_1 * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          _DAT_01c6e2f0;
  local_18 = ((uint)((longlong)param_2 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_2 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c6e2f4;
  local_14 = ((uint)((longlong)param_3 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_3 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c6e2f8;
  if (((_DAT_01d70c44 != _DAT_01c6e2cc) || (_DAT_01d70c48 != _DAT_01c6e2d0)) ||
     (_DAT_01d70c4c != _DAT_01c6e2d4)) {
    _DAT_01d70c44 = _DAT_01c6e2cc;
    _DAT_01d70c48 = _DAT_01c6e2d0;
    _DAT_01d70c4c = _DAT_01c6e2d4;
    FUN_004e61c0(&DAT_01d70c44);
    _DAT_01d70c50 = local_24;
    *(uint *)(&DAT_01d70c54 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
    *(uint *)(&DAT_01d70c58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  }
  lVar1 = (longlong)iVar4 * (longlong)_DAT_01d70c50;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_18 * (longlong)_DAT_01d70c54) >> 0x10 |
          (int)((ulonglong)((longlong)local_18 * (longlong)_DAT_01d70c54) >> 0x20) << 0x10) +
          ((uint)((longlong)local_14 * (longlong)_DAT_01d70c58) >> 0x10 |
          (int)((ulonglong)((longlong)local_14 * (longlong)_DAT_01d70c58) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) goto LAB_004e0d78;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_004e0d2d;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_004e0d2d:
    uVar2 = (uint)((longlong)iVar4 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  uVar5 = ((uint)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x20) << 0x10) +
          ((uint)((longlong)0x00010000 * (longlong)(int)uVar2) >> 0x10 |
          (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar2) >> 0x20) << 0x10);
LAB_004e0d78:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
