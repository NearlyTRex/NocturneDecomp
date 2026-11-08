// Name: FUN_0055d723
// Address: 0055d723
// Address Range: [[0055d723, 0055d9eb]]
// Convention: unknown
// Signature: void FUN_0055d723(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d723(uint *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_01c38b40 != 0) {
    iVar2 = *param_2 - _DAT_01c38b6c;
    iVar7 = param_2[1] - _DAT_01c38b70;
    iVar8 = param_2[2] - _DAT_01c38b74;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c38ba8 + (longlong)iVar2 * (longlong)_DAT_01c38b9c +
            (longlong)iVar8 * (longlong)_DAT_01c38bb4;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c38bac + (longlong)iVar2 * (longlong)_DAT_01c38ba0 +
            (longlong)iVar8 * (longlong)_DAT_01c38bb8;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c38bb0 + (longlong)iVar2 * (longlong)_DAT_01c38ba4 +
            (longlong)iVar8 * (longlong)_DAT_01c38bbc;
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
      param_1[4] = (int)(((longlong)(int)uVar3 * (longlong)_DAT_01c35e38) / (longlong)(int)uVar5) +
                   _DAT_01c35e40;
      param_1[5] = (int)(((longlong)(int)uVar4 * (longlong)_DAT_01c35e3c) / (longlong)(int)uVar5) +
                   _DAT_01c35e44;
      return;
    }
    param_1[4] = uVar6;
    return;
  }
  DAT_0061c7d8 = *param_2 - _DAT_01c38b6c;
  DAT_0061c7dc = param_2[1] - _DAT_01c38b70;
  DAT_0061c7e0 = param_2[2] - _DAT_01c38b74;
  lVar1 = (longlong)DAT_0061c7dc * (longlong)_DAT_01c38ba8 +
          (longlong)DAT_0061c7d8 * (longlong)_DAT_01c38b9c +
          (longlong)DAT_0061c7e0 * (longlong)_DAT_01c38bb4;
  DAT_0061c7e8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_0061c7dc * (longlong)_DAT_01c38bac +
          (longlong)DAT_0061c7d8 * (longlong)_DAT_01c38ba0 +
          (longlong)DAT_0061c7e0 * (longlong)_DAT_01c38bb8;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_0061c7dc * (longlong)_DAT_01c38bb0 +
          (longlong)DAT_0061c7d8 * (longlong)_DAT_01c38ba4 +
          (longlong)DAT_0061c7e0 * (longlong)_DAT_01c38bbc;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < (int)DAT_0061c7e8) {
    uVar5 = 0x80000001;
  }
  if ((int)DAT_0061c7e8 < (int)-uVar4) {
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
  DAT_0061c7ec = uVar3;
  DAT_0061c7f0 = uVar4;
  if (uVar5 == 0) {
    *param_1 = DAT_0061c7e8;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = (uint)(0x7fffffff / (longlong)(int)uVar4);
    param_1[4] = (int)(((longlong)(int)DAT_0061c7e8 * (longlong)_DAT_01c35e38) /
                      (longlong)(int)uVar4) + _DAT_01c35e40;
    param_1[5] = (int)(((longlong)(int)DAT_0061c7ec * (longlong)_DAT_01c35e3c) /
                      (longlong)(int)uVar4) + _DAT_01c35e44;
    return;
  }
  *param_1 = DAT_0061c7e8;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[4] = uVar5;
  return;
}
