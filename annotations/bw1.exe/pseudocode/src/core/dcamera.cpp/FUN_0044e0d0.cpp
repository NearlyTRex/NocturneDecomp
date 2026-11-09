// Name: core_dcamera.cpp_FUN_0044e0d0
// Address: 0044e0d0
// Address Range: [[0044e0d0, 0044e296]]
// Convention: unknown
// Signature: int * core_dcamera_cpp_FUN_0044e0d0(int param_1,int *param_2)

#include "nocturne.h"

int * core_dcamera_cpp_FUN_0044e0d0(int param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_ESI;
  byte bVar7;
  int aiStackY_1004 [1014];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar7 = 0;
  iStack_20 = param_2[2];
  iStack_28 = *param_2;
  iStack_24 = param_2[1];
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar4 == 0) {
    lVar1 = (longlong)iStack_24 * (longlong)*(int *)(param_1 + 0x1a8) +
            (longlong)iStack_28 * (longlong)*(int *)(param_1 + 0x19c) +
            (longlong)iStack_20 * (longlong)*(int *)(param_1 + 0x1b4);
    iStack_1c = *(int *)(param_1 + 0x16c) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iStack_24 * (longlong)*(int *)(param_1 + 0x1ac) +
            (longlong)iStack_28 * (longlong)*(int *)(param_1 + 0x1a0) +
            (longlong)iStack_20 * (longlong)*(int *)(param_1 + 0x1b8);
    iStack_18 = *(int *)(param_1 + 0x170) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iStack_24 * (longlong)*(int *)(param_1 + 0x1b0) +
            (longlong)iStack_28 * (longlong)*(int *)(param_1 + 0x1a4) +
            (longlong)iStack_20 * (longlong)*(int *)(param_1 + 0x1bc);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar4 = *(int *)(param_1 + 0x174);
  }
  else {
    iVar6 = iVar4 * 4 + param_1;
    lVar1 = (longlong)*(int *)(iVar6 + 0x136c) * (longlong)iStack_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x13cc) * (longlong)iStack_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x142c) * (longlong)iStack_20;
    param_1 = param_1 + iVar4 * 0xc;
    iStack_1c = *(int *)(param_1 + 0x11ec) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(iVar6 + 0x138c) * (longlong)iStack_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x13ec) * (longlong)iStack_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x144c) * (longlong)iStack_20;
    iStack_18 = *(int *)(param_1 + 0x11f0) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(iVar6 + 0x13ac) * (longlong)iStack_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x140c) * (longlong)iStack_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x146c) * (longlong)iStack_20;
    iVar4 = *(int *)(param_1 + 0x11f4);
    uVar5 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  iStack_14 = iVar4 + uVar5;
  *unaff_ESI = iStack_1c;
  unaff_ESI[(uint)bVar7 * -2 + 1] = *(int *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  (unaff_ESI + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       *(int *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return unaff_ESI;
}
