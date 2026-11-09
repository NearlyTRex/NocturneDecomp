// Name: engine_special.cpp_FUN_0058043c
// Address: 0058043c
// Address Range: [[0058043c, 00580704]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_FUN_0058043c(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_FUN_0058043c(SProjectedVertex *output,CVector3i *input)

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
    iVar2 = *(int *)input - _DAT_01c51d38;
    iVar7 = *(int *)(input + 4) - _DAT_01c51d3c;
    iVar8 = *(int *)(input + 8) - _DAT_01c51d40;
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
    *(uint *)output = uVar3;
    *(uint *)(output + 4) = uVar4;
    *(uint *)(output + 8) = uVar5;
    if (uVar6 == 0) {
      *(int *)(output + 0xc) = (int)(0x7fffffff / (longlong)(int)uVar5);
      *(int *)(output + 0x10) =
           (int)(((longlong)(int)uVar3 * (longlong)_DAT_01c4eff8) / (longlong)(int)uVar5) +
           _DAT_01c4f000;
      *(int *)(output + 0x14) =
           (int)(((longlong)(int)uVar4 * (longlong)_DAT_01c4effc) / (longlong)(int)uVar5) +
           _DAT_01c4f004;
      return;
    }
    *(uint *)(output + 0x10) = uVar6;
    return;
  }
  DAT_00623e28 = *(int *)input - _DAT_01c51d38;
  DAT_00623e2c = *(int *)(input + 4) - _DAT_01c51d3c;
  DAT_00623e30 = *(int *)(input + 8) - _DAT_01c51d40;
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
    *(uint *)output = DAT_00623e38;
    *(uint *)(output + 4) = uVar3;
    *(uint *)(output + 8) = uVar4;
    *(int *)(output + 0xc) = (int)(0x7fffffff / (longlong)(int)uVar4);
    *(int *)(output + 0x10) =
         (int)(((longlong)(int)DAT_00623e38 * (longlong)_DAT_01c4eff8) / (longlong)(int)uVar4) +
         _DAT_01c4f000;
    *(int *)(output + 0x14) =
         (int)(((longlong)(int)DAT_00623e3c * (longlong)_DAT_01c4effc) / (longlong)(int)uVar4) +
         _DAT_01c4f004;
    return;
  }
  *(uint *)output = DAT_00623e38;
  *(uint *)(output + 4) = uVar3;
  *(uint *)(output + 8) = uVar4;
  *(uint *)(output + 0x10) = uVar5;
  return;
}
