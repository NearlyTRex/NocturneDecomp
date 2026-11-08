// Name: FUN_0058043c
// Address: 0058043c
// Address Range: [[0058043c, 00580704]]
// Convention: unknown
// Signature: void FUN_0058043c(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058043c(uint *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_01c51d00 != 0) {
    iVar2 = *param_2 - _DAT_01c51d38;
    iVar7 = param_2[1] - _DAT_01c51d3c;
    iVar8 = param_2[2] - _DAT_01c51d40;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c51d68 + (longlong)iVar2 * (longlong)_DAT_01c51d5c +
            (longlong)iVar8 * (longlong)_DAT_01c51d74;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c51d6c + (longlong)iVar2 * (longlong)_DAT_01c51d60 +
            (longlong)iVar8 * (longlong)_DAT_01c51d78;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c51d70 + (longlong)iVar2 * (longlong)_DAT_01c51d64 +
            (longlong)iVar8 * (longlong)_DAT_01c51d7c;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = 0;
    if ((int)uVar5 < (int)uVar3) {
      uVar6 = 0x80000001;
    }
    if ((int)uVar3 < (int)-uVar5) {
      uVar6 = uVar6 | 0x80000002;
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar6 = uVar6 | 0x80000004;
    }
    if ((int)uVar4 < (int)-uVar5) {
      uVar6 = uVar6 | 0x80000008;
    }
    if ((int)uVar5 < 1) {
      uVar6 = uVar6 | 0x80000010;
    }
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    if (uVar6 == 0) {
      param_1[3] = (uint)(0x7fffffff / (longlong)(int)uVar5);
      param_1[4] = (int)(((longlong)(int)uVar3 * (longlong)_DAT_01c4eff8) / (longlong)(int)uVar5) +
                   _DAT_01c4f000;
      param_1[5] = (int)(((longlong)(int)uVar4 * (longlong)_DAT_01c4effc) / (longlong)(int)uVar5) +
                   _DAT_01c4f004;
      return;
    }
    param_1[4] = uVar6;
    return;
  }
  DAT_00623e28 = *param_2 - _DAT_01c51d38;
  DAT_00623e2c = param_2[1] - _DAT_01c51d3c;
  DAT_00623e30 = param_2[2] - _DAT_01c51d40;
  lVar1 = (longlong)DAT_00623e2c * (longlong)_DAT_01c51d68 +
          (longlong)DAT_00623e28 * (longlong)_DAT_01c51d5c +
          (longlong)DAT_00623e30 * (longlong)_DAT_01c51d74;
  DAT_00623e38 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_00623e2c * (longlong)_DAT_01c51d6c +
          (longlong)DAT_00623e28 * (longlong)_DAT_01c51d60 +
          (longlong)DAT_00623e30 * (longlong)_DAT_01c51d78;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_00623e2c * (longlong)_DAT_01c51d70 +
          (longlong)DAT_00623e28 * (longlong)_DAT_01c51d64 +
          (longlong)DAT_00623e30 * (longlong)_DAT_01c51d7c;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < (int)DAT_00623e38) {
    uVar5 = 0x80000001;
  }
  if ((int)DAT_00623e38 < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000002;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar5 = uVar5 | 0x80000004;
  }
  if ((int)uVar3 < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000008;
  }
  if ((int)uVar4 < 1) {
    uVar5 = uVar5 | 0x80000010;
  }
  DAT_00623e3c = uVar3;
  DAT_00623e40 = uVar4;
  if (uVar5 == 0) {
    *param_1 = DAT_00623e38;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = (uint)(0x7fffffff / (longlong)(int)uVar4);
    param_1[4] = (int)(((longlong)(int)DAT_00623e38 * (longlong)_DAT_01c4eff8) /
                      (longlong)(int)uVar4) + _DAT_01c4f000;
    param_1[5] = (int)(((longlong)(int)DAT_00623e3c * (longlong)_DAT_01c4effc) /
                      (longlong)(int)uVar4) + _DAT_01c4f004;
    return;
  }
  *param_1 = DAT_00623e38;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[4] = uVar5;
  return;
}
