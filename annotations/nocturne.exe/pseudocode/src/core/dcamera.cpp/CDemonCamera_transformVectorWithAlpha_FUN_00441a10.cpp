// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
// Address: 00441a10
// Address Range: [[00441a10, 00441c1c]]
// Convention: __stack2_esi
// Signature: uint * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(int param_1,int *param_2,uint *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(int param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1000 [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c039f4 +
          (longlong)*param_2 * (longlong)_DAT_01c039e8 +
          (longlong)param_2[2] * (longlong)_DAT_01c03a00;
  local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c039f8 +
          (longlong)*param_2 * (longlong)_DAT_01c039ec +
          (longlong)param_2[2] * (longlong)_DAT_01c03a04;
  local_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_2[1] * (longlong)_DAT_01c039fc +
          (longlong)*param_2 * (longlong)_DAT_01c039f0 +
          (longlong)param_2[2] * (longlong)_DAT_01c03a08;
  local_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)local_20 * (longlong)*(int *)(param_1 + 0x1a8) +
            (longlong)(int)local_24 * (longlong)*(int *)(param_1 + 0x19c) +
            (longlong)(int)local_1c * (longlong)*(int *)(param_1 + 0x1b4);
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)local_20 * (longlong)*(int *)(param_1 + 0x1ac) +
            (longlong)(int)local_24 * (longlong)*(int *)(param_1 + 0x1a0) +
            (longlong)(int)local_1c * (longlong)*(int *)(param_1 + 0x1b8);
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)local_20 * (longlong)*(int *)(param_1 + 0x1b0) +
            (longlong)(int)local_24 * (longlong)*(int *)(param_1 + 0x1a4) +
            (longlong)(int)local_1c * (longlong)*(int *)(param_1 + 0x1bc);
    local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *param_3 = local_18;
    param_3[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
    (param_3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    return param_3;
  }
  param_1 = param_1 + iVar4 * 4;
  lVar1 = (longlong)*(int *)(param_1 + 0x136c) * (longlong)(int)local_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x13cc) * (longlong)(int)local_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x142c) * (longlong)(int)local_1c;
  local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x138c) * (longlong)(int)local_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x13ec) * (longlong)(int)local_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x144c) * (longlong)(int)local_1c;
  local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)*(int *)(param_1 + 0x13ac) * (longlong)(int)local_24;
  lVar2 = (longlong)*(int *)(param_1 + 0x140c) * (longlong)(int)local_20;
  lVar3 = (longlong)*(int *)(param_1 + 0x146c) * (longlong)(int)local_1c;
  local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *param_3 = local_18;
  param_3[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
  (param_3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return param_3;
}
