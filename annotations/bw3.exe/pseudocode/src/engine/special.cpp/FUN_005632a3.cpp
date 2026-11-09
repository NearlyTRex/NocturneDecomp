// Name: engine_special.cpp_FUN_005632a3
// Address: 005632a3
// Address Range: [[005632a3, 0056356b]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_FUN_005632a3(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_FUN_005632a3(SProjectedVertex *output,CVector3i *input)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_01c6e2a0 != 0) {
    iVar2 = *(int *)input - _DAT_01c6e2cc;
    iVar7 = *(int *)(input + 4) - _DAT_01c6e2d0;
    iVar8 = *(int *)(input + 8) - _DAT_01c6e2d4;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c6e308 + (longlong)iVar2 * (longlong)_DAT_01c6e2fc +
            (longlong)iVar8 * (longlong)_DAT_01c6e314;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c6e30c + (longlong)iVar2 * (longlong)_DAT_01c6e300 +
            (longlong)iVar8 * (longlong)_DAT_01c6e318;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c6e310 + (longlong)iVar2 * (longlong)_DAT_01c6e304 +
            (longlong)iVar8 * (longlong)_DAT_01c6e31c;
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
           (int)(((longlong)(int)uVar3 * (longlong)_DAT_01c6b598) / (longlong)(int)uVar5) +
           _DAT_01c6b5a0;
      *(int *)(output + 0x14) =
           (int)(((longlong)(int)uVar4 * (longlong)_DAT_01c6b59c) / (longlong)(int)uVar5) +
           _DAT_01c6b5a4;
      return;
    }
    *(uint *)(output + 0x10) = uVar6;
    return;
  }
  DAT_00604d68 = *(int *)input - _DAT_01c6e2cc;
  DAT_00604d6c = *(int *)(input + 4) - _DAT_01c6e2d0;
  DAT_00604d70 = *(int *)(input + 8) - _DAT_01c6e2d4;
  lVar1 = (longlong)DAT_00604d6c * (longlong)_DAT_01c6e308 +
          (longlong)DAT_00604d68 * (longlong)_DAT_01c6e2fc +
          (longlong)DAT_00604d70 * (longlong)_DAT_01c6e314;
  DAT_00604d78 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_00604d6c * (longlong)_DAT_01c6e30c +
          (longlong)DAT_00604d68 * (longlong)_DAT_01c6e300 +
          (longlong)DAT_00604d70 * (longlong)_DAT_01c6e318;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_00604d6c * (longlong)_DAT_01c6e310 +
          (longlong)DAT_00604d68 * (longlong)_DAT_01c6e304 +
          (longlong)DAT_00604d70 * (longlong)_DAT_01c6e31c;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < (int)DAT_00604d78) {
    uVar5 = 0x80000001;
  }
  if ((int)DAT_00604d78 < (int)-uVar4) {
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
  DAT_00604d7c = uVar3;
  DAT_00604d80 = uVar4;
  if (uVar5 == 0) {
    *(uint *)output = DAT_00604d78;
    *(uint *)(output + 4) = uVar3;
    *(uint *)(output + 8) = uVar4;
    *(int *)(output + 0xc) = (int)(0x7fffffff / (longlong)(int)uVar4);
    *(int *)(output + 0x10) =
         (int)(((longlong)(int)DAT_00604d78 * (longlong)_DAT_01c6b598) / (longlong)(int)uVar4) +
         _DAT_01c6b5a0;
    *(int *)(output + 0x14) =
         (int)(((longlong)(int)DAT_00604d7c * (longlong)_DAT_01c6b59c) / (longlong)(int)uVar4) +
         _DAT_01c6b5a4;
    return;
  }
  *(uint *)output = DAT_00604d78;
  *(uint *)(output + 4) = uVar3;
  *(uint *)(output + 8) = uVar4;
  *(uint *)(output + 0x10) = uVar5;
  return;
}
