// Name: FUN_005854a0
// Address: 005854a0
// Address Range: [[005854a0, 005855ed]]
// Convention: unknown
// Signature: void FUN_005854a0(undefined4 *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_005854a0(uint *param_1,uint *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_184c [1500];
  uint local_d0 [3];
  float local_c4;
  float local_b4;
  float local_a4;
  uint local_a0 [12];
  uint local_70;
  uint auStack_6c [3];
  uint local_60;
  uint auStack_5c [3];
  uint local_50;
  uint auStack_4c [7];
  uint local_30;
  uint local_20;
  
  bVar5 = 0;
  if (param_3 <= 0.0) {
    iVar2 = 0xc;
    puVar4 = local_a0;
    puVar3 = param_1;
  }
  else if ((int)param_3 < 0x3f800000) {
    FUN_00585780(param_1);
    local_60 = auStack_4c[3];
    *(uint *)((int)auStack_5c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + 4) * 4);
    *(uint *)((int)auStack_5c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
    ((uint *)((int)auStack_5c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
    [(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_00585780(param_2);
    local_50 = local_20;
    *(uint *)((int)auStack_4c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + 0xc) * 4);
    *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4);
    ((uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
    [(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_00585b20(&local_60,&local_50,param_3);
    local_70 = local_30;
    *(uint *)((int)auStack_6c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + 8) * 4);
    *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4) =
         *(uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4);
    ((uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
    [(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_4c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_005855f0(local_d0,&local_70);
    puVar3 = local_d0;
    fVar1 = 1.0 - param_3;
    local_c4 = (float)param_2[3] * param_3 + (float)param_1[3] * fVar1;
    local_b4 = (float)param_2[7] * param_3 + (float)param_1[7] * fVar1;
    puVar4 = local_a0;
    iVar2 = 0xc;
    local_a4 = (float)param_2[0xb] * param_3 + fVar1 * (float)param_1[0xb];
  }
  else {
    iVar2 = 0xc;
    puVar3 = param_2;
    puVar4 = local_a0;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar4 = local_a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
