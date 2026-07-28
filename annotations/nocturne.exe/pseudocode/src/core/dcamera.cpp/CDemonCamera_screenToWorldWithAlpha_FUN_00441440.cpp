// Name: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
// Address: 00441440
// Address Range: [[00441440, 00441606]]
// Convention: unknown
// Signature: int * core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(int param_1,int *param_2)

#include "nocturne.h"

int * core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(int param_1,int *param_2)

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
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  local_20 = param_2[2];
  local_28 = *param_2;
  local_24 = param_2[1];
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar4 == 0) {
    lVar1 = (longlong)local_24 * (longlong)*(int *)(param_1 + 0x1a8) +
            (longlong)local_28 * (longlong)*(int *)(param_1 + 0x19c) +
            (longlong)local_20 * (longlong)*(int *)(param_1 + 0x1b4);
    local_1c = *(int *)(param_1 + 0x16c) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)local_24 * (longlong)*(int *)(param_1 + 0x1ac) +
            (longlong)local_28 * (longlong)*(int *)(param_1 + 0x1a0) +
            (longlong)local_20 * (longlong)*(int *)(param_1 + 0x1b8);
    local_18 = *(int *)(param_1 + 0x170) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)local_24 * (longlong)*(int *)(param_1 + 0x1b0) +
            (longlong)local_28 * (longlong)*(int *)(param_1 + 0x1a4) +
            (longlong)local_20 * (longlong)*(int *)(param_1 + 0x1bc);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar4 = *(int *)(param_1 + 0x174);
  }
  else {
    iVar6 = iVar4 * 4 + param_1;
    lVar1 = (longlong)*(int *)(iVar6 + 0x136c) * (longlong)local_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x13cc) * (longlong)local_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x142c) * (longlong)local_20;
    param_1 = param_1 + iVar4 * 0xc;
    local_1c = *(int *)(param_1 + 0x11ec) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(iVar6 + 0x138c) * (longlong)local_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x13ec) * (longlong)local_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x144c) * (longlong)local_20;
    local_18 = *(int *)(param_1 + 0x11f0) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    lVar1 = (longlong)*(int *)(iVar6 + 0x13ac) * (longlong)local_28;
    lVar2 = (longlong)*(int *)(iVar6 + 0x140c) * (longlong)local_24;
    lVar3 = (longlong)*(int *)(iVar6 + 0x146c) * (longlong)local_20;
    iVar4 = *(int *)(param_1 + 0x11f4);
    uVar5 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  local_14 = iVar4 + uVar5;
  *unaff_ESI = local_1c;
  unaff_ESI[(uint)bVar7 * -2 + 1] = *(int *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  (unaff_ESI + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       *(int *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return unaff_ESI;
}
