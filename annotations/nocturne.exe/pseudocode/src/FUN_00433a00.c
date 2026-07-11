// Name: FUN_00433a00
// Address: 00433a00
// Address Range: [[00433a00, 00433b25]]
// Convention: unknown
// Signature: void FUN_00433a00(int *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void FUN_00433a00(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (param_2[1] + param_1[2]) - (param_1[1] + param_2[2]);
  uVar4 = param_1[2] - param_1[1];
  if ((int)uVar4 < iVar2) {
    if (-iVar2 < (int)uVar4) {
      iVar2 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar2);
    }
    else {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  lVar1 = (longlong)(param_2[2] - param_1[2]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + param_1[2];
  param_3[2] = iVar3;
  param_3[1] = iVar3;
  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  iVar3 = *param_1;
  param_3[4] = -1;
  *param_3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + iVar3;
  lVar1 = (longlong)(param_2[8] - param_1[8]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[8] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + param_1[8];
  lVar1 = (longlong)(param_2[9] - param_1[9]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[9] = param_1[9] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(param_2[10] - param_1[10]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[10] = param_1[10] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(param_2[6] - param_1[6]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[6] = param_1[6] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(param_2[7] - param_1[7]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[7] = param_1[7] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)(param_2[0xb] - param_1[0xb]) * (longlong)iVar2;
  uVar4 = (uint)lVar1;
  param_3[0xb] = param_1[0xb] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  return;
}
