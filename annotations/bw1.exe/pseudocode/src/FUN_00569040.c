// Name: FUN_00569040
// Address: 00569040
// Address Range: [[00569040, 0056912a]]
// Convention: unknown
// Signature: void FUN_00569040(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00569040(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1000 [986];
  uint local_60 [12];
  float local_30;
  float local_2c;
  float local_28;
  uint local_24 [3];
  uint local_18;
  uint auStack_14 [2];
  
  bVar5 = 0;
  if (param_2 < 0) {
    puVar3 = (uint *)(param_1 + 0x6a4);
  }
  else {
    iVar2 = FUN_00569f30(param_1);
    iVar2 = *(int *)(iVar2 + 0x1de9c + param_2 * 0x24);
    pfVar1 = (float *)(param_1 + 0x58 + param_2 * 0xc);
    if (iVar2 < 0) {
      local_30 = *pfVar1 + *(float *)(param_1 + 0x6a4);
      local_2c = pfVar1[1] + *(float *)(param_1 + 0x6a8);
      puVar3 = &local_30;
      local_28 = pfVar1[2] + *(float *)(param_1 + 0x6ac);
    }
    else {
      FUN_00568e30(param_1,iVar2);
      puVar3 = (uint *)&stack0xffffff70;
      puVar4 = local_60;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_005b5080(pfVar1,local_60);
      puVar3 = local_24;
    }
  }
  local_18 = *puVar3;
  *(uint *)((int)auStack_14 + (uint)bVar5 * 0xfffffff8) = puVar3[(uint)bVar5 * -2 + 1];
  auStack_14[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)auStack_14 + (uint)bVar5 * 0xfffffff8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       auStack_14[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1];
  return;
}
