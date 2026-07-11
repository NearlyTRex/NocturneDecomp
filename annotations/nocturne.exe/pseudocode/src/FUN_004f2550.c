// Name: FUN_004f2550
// Address: 004f2550
// Address Range: [[004f2550, 004f261f]]
// Convention: unknown
// Signature: void FUN_004f2550(int param_1,int *param_2)

#include "nocturne.h"

void FUN_004f2550(int param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = 0;
  pbVar1 = *(byte **)(&DAT_01bd2fa0 + param_1 * 4);
  if (0 < DAT_005b761c) {
    do {
      if (0xbf < *pbVar1) {
        if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
          *(byte *)*param_2 = 0xc1;
          if (*(char *)*param_2 != '\n') {
            *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
            param_2[1] = param_2[1] + 1;
            *param_2 = *param_2 + 1;
            goto LAB_004f258e;
          }
          uVar4 = 10;
        }
        else {
          uVar4 = 0xc1;
        }
        FUN_00566cc0(uVar4,param_2);
      }
LAB_004f258e:
      if (((*(byte *)((int)param_2 + 0xd) & 4) == 0) && (1 < (uint)(param_2[5] - param_2[1]))) {
        *(byte *)*param_2 = *pbVar1;
        if (*(char *)*param_2 == '\n') {
          bVar3 = 10;
          goto LAB_004f259a;
        }
        *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) | 0x10;
        param_2[1] = param_2[1] + 1;
        *param_2 = *param_2 + 1;
      }
      else {
        bVar3 = *pbVar1;
LAB_004f259a:
        FUN_00566cc0(bVar3,param_2);
      }
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 1;
    } while (iVar2 < DAT_005b761c);
  }
  return;
}
