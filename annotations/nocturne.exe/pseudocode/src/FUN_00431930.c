// Name: FUN_00431930
// Address: 00431930
// Address Range: [[00431930, 00431a31]]
// Convention: unknown
// Signature: void FUN_00431930(int *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void FUN_00431930(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2[2] - param_1[2];
  uVar2 = 0x7FFFFFFF - param_1[2];
  if ((int)uVar2 < iVar3) {
    if (-iVar3 < (int)uVar2) {
      iVar3 = (int)(CONCAT44((int)uVar2 >> 1,(uint)((uVar2 & 1) != 0) << 0x1f) / (longlong)iVar3);
    }
    else {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  lVar1 = (longlong)(param_2[2] - param_1[2]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  param_3[2] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + param_1[2];
  lVar1 = (longlong)(param_2[1] - param_1[1]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  param_3[1] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + param_1[1];
  lVar1 = (longlong)(*param_2 - *param_1) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  *param_3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + *param_1;
  lVar1 = (longlong)(param_2[8] - param_1[8]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  param_3[8] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + param_1[8];
  lVar1 = (longlong)(param_2[0xb] - param_1[0xb]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  param_3[0xb] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + param_1[0xb];
  lVar1 = (longlong)(param_2[6] - param_1[6]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  param_3[6] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2) + param_1[6];
  lVar1 = (longlong)(param_2[7] - param_1[7]) * (longlong)iVar3;
  uVar2 = (uint)lVar1;
  iVar3 = param_1[7];
  param_3[4] = -1;
  param_3[7] = iVar3 + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar2,uVar2);
  return;
}
