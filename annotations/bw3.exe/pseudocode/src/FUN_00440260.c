// Name: FUN_00440260
// Address: 00440260
// Address Range: [[00440260, 004403f4]]
// Convention: unknown
// Signature: int FUN_00440260(byte *param_1,int param_2,uint param_3,int *param_4)

#include "nocturne.h"

int FUN_00440260(byte *param_1,int param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte local_14;
  
  iVar2 = FUN_00440400(param_1,param_4);
  if (iVar2 < 0) {
    if (iVar2 != -1) {
      return -3;
    }
    if (0x1f < *(int *)param_1 + param_2) {
      return -1;
    }
    bVar1 = *param_1;
    *(int *)param_1 = *(int *)param_1 + param_2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << (bVar1 & 0x1f);
    return -2;
  }
  if (0 < *(int *)param_1) {
    iVar2 = 8 - *(int *)param_1;
    if (param_2 < iVar2) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << (*param_1 & 0x1f);
      *(int *)param_1 = *(int *)param_1 + param_2;
      return 0;
    }
    iVar3 = (**(code **)(*param_4 + 4))(param_4,(char)param_3 << (*param_1 & 0x1f) | param_1[4]);
    if (iVar3 == -1) {
      if (0x1f < *(int *)param_1 + param_2) {
        return -1;
      }
      bVar1 = *param_1;
      *(int *)param_1 = *(int *)param_1 + param_2;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << (bVar1 & 0x1f);
      return -2;
    }
    if (iVar3 < 0) {
      return -3;
    }
    if (param_2 == iVar2) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      return 0;
    }
    local_14 = (byte)iVar2;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_3 = param_3 >> (local_14 & 0x1f);
    param_2 = param_2 - iVar2;
  }
  iVar2 = 0;
  if (7 < param_2) {
    while (iVar2 = (**(code **)(*param_4 + 4))(param_4,param_3 & 0xff), iVar2 != -1) {
      if (iVar2 < 0) {
        *(int *)param_1 = param_2;
        *(uint *)(param_1 + 4) = param_3;
        return -3;
      }
      param_3 = param_3 >> 8;
      param_2 = param_2 + -8;
      if (param_2 < 8) {
        *(int *)param_1 = param_2;
        *(uint *)(param_1 + 4) = param_3;
        return iVar2;
      }
    }
    iVar2 = -2;
  }
  *(int *)param_1 = param_2;
  *(uint *)(param_1 + 4) = param_3;
  return iVar2;
}
