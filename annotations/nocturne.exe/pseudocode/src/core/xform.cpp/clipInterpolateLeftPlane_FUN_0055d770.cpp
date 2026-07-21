// Name: core_xform.cpp_clipInterpolateLeftPlane_FUN_0055d770
// Address: 0055d770
// Address Range: [[0055d770, 0055d824]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770(int *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1 + param_1[2];
  iVar5 = (uVar4 - *param_2) - param_2[2];
  if ((int)uVar4 < iVar5) {
    if (-iVar5 < (int)uVar4) {
      iVar5 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
    else {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar1 = (longlong)(param_2[2] - param_1[2]) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + param_1[2];
  param_3[2] = iVar3;
  *param_3 = iVar3;
  *param_3 = -iVar3;
  lVar1 = (longlong)(param_2[1] - param_1[1]) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  param_3[1] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + param_1[1];
  bVar2 = DAT_01c039a0;
  param_3[4] = -1;
  if ((bVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)(param_2[8] - param_1[8]) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  param_3[8] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + param_1[8];
  return;
}
