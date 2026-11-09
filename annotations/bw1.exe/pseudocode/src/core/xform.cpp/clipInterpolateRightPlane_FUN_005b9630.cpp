// Name: core_xform.cpp_clipInterpolateRightPlane_FUN_005b9630
// Address: 005b9630
// Address Range: [[005b9630, 005b96e7]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630(int *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005b9630(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (*param_2 + param_1[2]) - (*param_1 + param_2[2]);
  uVar3 = param_1[2] - *param_1;
  if ((int)uVar3 < iVar5) {
    if (-iVar5 < (int)uVar3) {
      iVar5 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
    else {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar1 = (longlong)(param_2[2] - param_1[2]) * (longlong)iVar5;
  uVar3 = (uint)lVar1;
  iVar4 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[2];
  param_3[2] = iVar4;
  *param_3 = iVar4;
  lVar1 = (longlong)(param_2[1] - param_1[1]) * (longlong)iVar5;
  uVar3 = (uint)lVar1;
  param_3[1] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[1];
  bVar2 = DAT_01c51d14;
  param_3[4] = -1;
  if ((bVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(param_2[8] - param_1[8]) * (longlong)iVar5;
  uVar3 = (uint)lVar1;
  param_3[8] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[8];
  return;
}
