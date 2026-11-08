// Name: FUN_004b2a80
// Address: 004b2a80
// Address Range: [[004b2a80, 004b2b25]]
// Convention: unknown
// Signature: int FUN_004b2a80(int param_1,byte *param_2)

#include "nocturne.h"

int FUN_004b2a80(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  pbVar3 = param_2;
  if (*(int *)(param_1 + 0x4210) == 0) {
    while (*param_2 != 0) {
      iVar2 = 0;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        if (bVar1 == 10) break;
        iVar2 = iVar2 + *(int *)(param_1 + 0x35e8 + (uint)bVar1 * 4) + *(int *)(param_1 + 0x41f4);
      } while (*param_2 != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - *(int *)(param_1 + 0x41f4);
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
    }
  }
  else {
LAB_004b2a9e:
    do {
      pbVar4 = param_2;
      if (*param_2 == 10) goto LAB_004b2ab6;
      if (*param_2 == 0) break;
      pbVar4 = param_2 + 1;
      if (*pbVar4 == 10) goto LAB_004b2ab6;
      param_2 = param_2 + 2;
    } while (*pbVar4 != 0);
    pbVar4 = (byte *)0x0;
LAB_004b2ab6:
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = 0;
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4214) + 0x6a44) + 8))
                      (*(int *)(param_1 + 0x4214),pbVar3);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    if (pbVar4 != (byte *)0x0) {
      param_2 = pbVar4 + 1;
      *pbVar4 = 10;
      pbVar3 = param_2;
      goto LAB_004b2a9e;
    }
  }
  return iVar5;
}
