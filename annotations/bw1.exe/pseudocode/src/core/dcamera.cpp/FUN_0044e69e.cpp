// Name: core_dcamera.cpp_FUN_0044e69e
// Address: 0044e69e
// Address Range: [[0044e69e, 0044e8ac]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044e69e(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_0044e69e(int param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *unaff_ESI;
  byte bVar5;
  uint auStackY_1000 [1014];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c51d68 +
          (longlong)*param_2 * (longlong)_DAT_01c51d5c +
          (longlong)param_2[2] * (longlong)_DAT_01c51d74;
  uStack_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c51d6c +
          (longlong)*param_2 * (longlong)_DAT_01c51d60 +
          (longlong)param_2[2] * (longlong)_DAT_01c51d78;
  uStack_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c51d70 +
          (longlong)*param_2 * (longlong)_DAT_01c51d64 +
          (longlong)param_2[2] * (longlong)_DAT_01c51d7c;
  uStack_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(param_1 + 0x1a8) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(param_1 + 0x19c) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(param_1 + 0x1b4);
    uStack_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(param_1 + 0x1ac) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(param_1 + 0x1a0) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(param_1 + 0x1b8);
    uStack_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)*(int *)(param_1 + 0x1b0) +
            (longlong)(int)uStack_24 * (longlong)*(int *)(param_1 + 0x1a4) +
            (longlong)(int)uStack_1c * (longlong)*(int *)(param_1 + 0x1bc);
    uStack_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *unaff_ESI = uStack_18;
    unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
    (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    return;
  }
  param_1 = param_1 + iVar4 * 4;
  lVar1 = (longlong)*(int *)(param_1 + 0x136c) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x13cc) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x142c) * (longlong)(int)uStack_1c;
  uStack_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x138c) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x13ec) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x144c) * (longlong)(int)uStack_1c;
  uStack_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x13ac) * (longlong)(int)uStack_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x140c) * (longlong)(int)uStack_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x146c) * (longlong)(int)uStack_1c;
  uStack_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *unaff_ESI = uStack_18;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
