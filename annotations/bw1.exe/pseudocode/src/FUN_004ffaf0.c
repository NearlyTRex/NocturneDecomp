// Name: FUN_004ffaf0
// Address: 004ffaf0
// Address Range: [[004ffaf0, 004ffd30]]
// Convention: unknown
// Signature: int FUN_004ffaf0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ffaf0(int param_1,int param_2,int param_3)

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
  iVar3 = ((uint)((longlong)param_1 * (longlong)_DAT_01c51d50) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)_DAT_01c51d50) >> 0x20) << 0x10) +
          ((uint)((longlong)param_2 * (longlong)_DAT_01c51d54) >> 0x10 |
          (int)((ulonglong)((longlong)param_2 * (longlong)_DAT_01c51d54) >> 0x20) << 0x10) +
          ((uint)((longlong)param_3 * (longlong)_DAT_01c51d58) >> 0x10 |
          (int)((ulonglong)((longlong)param_3 * (longlong)_DAT_01c51d58) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - DAT_0061f310);
  uVar5 = DAT_0061f310 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (0x00000001 == 0) {
    uVar5 = (uint)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)0x00010000 * (longlong)(int)uVar5) >> 0x20) << 0x10;
    goto LAB_004ffcb8;
  }
  iVar4 = ((uint)((longlong)param_1 * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)param_1 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          _DAT_01c51d50;
  local_18 = ((uint)((longlong)param_2 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_2 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c51d54;
  local_14 = ((uint)((longlong)param_3 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_3 * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             _DAT_01c51d58;
  if (((_DAT_01d1c22c != _DAT_01c51d2c) || (_DAT_01d1c230 != _DAT_01c51d30)) ||
     (_DAT_01d1c234 != _DAT_01c51d34)) {
    _DAT_01d1c22c = _DAT_01c51d2c;
    _DAT_01d1c230 = _DAT_01c51d30;
    _DAT_01d1c234 = _DAT_01c51d34;
    FUN_00508780(&DAT_01d1c22c);
    _DAT_01d1c238 = local_24;
    *(uint *)(&DAT_01d1c23c + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
    *(uint *)(&DAT_01d1c240 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  }
  lVar1 = (longlong)iVar4 * (longlong)_DAT_01d1c238;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_18 * (longlong)_DAT_01d1c23c) >> 0x10 |
          (int)((ulonglong)((longlong)local_18 * (longlong)_DAT_01d1c23c) >> 0x20) << 0x10) +
          ((uint)((longlong)local_14 * (longlong)_DAT_01d1c240) >> 0x10 |
          (int)((ulonglong)((longlong)local_14 * (longlong)_DAT_01d1c240) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) goto LAB_004ffcb8;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_004ffc6d;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_004ffc6d:
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
LAB_004ffcb8:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
