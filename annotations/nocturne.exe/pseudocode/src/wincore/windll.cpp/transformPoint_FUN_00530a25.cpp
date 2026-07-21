// Name: wincore_windll.cpp_transformPoint_FUN_00530a25
// Address: 00530a25
// Address Range: [[00530a25, 00530ced]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_transformPoint_FUN_00530a25(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_windll_cpp_transformPoint_FUN_00530a25(uint *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_01c03948 != 0) {
    iVar2 = *param_2 - _DAT_01c039c4;
    iVar7 = param_2[1] - _DAT_01c039c8;
    iVar8 = param_2[2] - _DAT_01c039cc;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039f4 + (longlong)iVar2 * (longlong)_DAT_01c039e8 +
            (longlong)iVar8 * (longlong)_DAT_01c03a00;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039f8 + (longlong)iVar2 * (longlong)_DAT_01c039ec +
            (longlong)iVar8 * (longlong)_DAT_01c03a04;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039fc + (longlong)iVar2 * (longlong)_DAT_01c039f0 +
            (longlong)iVar8 * (longlong)_DAT_01c03a08;
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
      param_1[4] = (int)(((longlong)(int)uVar3 * (longlong)_DAT_01c00c48) / (longlong)(int)uVar5) +
                   _DAT_01c00c50;
      param_1[5] = (int)(((longlong)(int)uVar4 * (longlong)_DAT_01c00c4c) / (longlong)(int)uVar5) +
                   _DAT_01c00c54;
      return;
    }
    param_1[4] = uVar6;
    return;
  }
  DAT_005bf4d8 = *param_2 - _DAT_01c039c4;
  DAT_005bf4dc = param_2[1] - _DAT_01c039c8;
  DAT_005bf4e0 = param_2[2] - _DAT_01c039cc;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039f4 +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039e8 +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a00;
  DAT_005bf4e8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039f8 +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039ec +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a04;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039fc +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039f0 +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a08;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < (int)DAT_005bf4e8) {
    uVar5 = 0x80000001;
  }
  if ((int)DAT_005bf4e8 < (int)-uVar4) {
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
  DAT_005bf4ec = uVar3;
  DAT_005bf4f0 = uVar4;
  if (uVar5 == 0) {
    *param_1 = DAT_005bf4e8;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = (uint)(0x7fffffff / (longlong)(int)uVar4);
    param_1[4] = (int)(((longlong)(int)DAT_005bf4e8 * (longlong)_DAT_01c00c48) /
                      (longlong)(int)uVar4) + _DAT_01c00c50;
    param_1[5] = (int)(((longlong)(int)DAT_005bf4ec * (longlong)_DAT_01c00c4c) /
                      (longlong)(int)uVar4) + _DAT_01c00c54;
    return;
  }
  *param_1 = DAT_005bf4e8;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[4] = uVar5;
  return;
}
