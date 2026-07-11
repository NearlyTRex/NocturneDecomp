// Name: FUN_0055cc30
// Address: 0055cc30
// Address Range: [[0055cc30, 0055cd6d]]
// Convention: unknown
// Signature: void FUN_0055cc30(undefined4 *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0055cc30(uint *param_1,uint *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_184c [1498];
  uint local_d0 [3];
  float local_c4;
  float local_b4;
  float local_a4;
  uint local_a0 [12];
  uint local_70;
  uint auStack_6c [7];
  uint local_50;
  uint local_40;
  uint auStack_3c [3];
  uint local_30;
  uint auStack_2c [8];
  
  bVar5 = 0;
  if (param_3 <= 0.0) {
    iVar2 = 0xc;
    puVar4 = local_a0;
    puVar3 = param_1;
  }
  else if (param_3 < 1.0) {
    FUN_0055cf10(param_1);
    local_70 = auStack_2c[3];
    *(uint *)((int)auStack_6c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_2c + ((uint)bVar5 * -2 + 4) * 4);
    auStack_6c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
         *(uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
    (auStack_6c + (uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1)[(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_0055cf10(param_2);
    local_40 = auStack_6c[3];
    *(uint *)((int)auStack_3c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + -8) * 4);
    *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
         *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
    ((uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
    [(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_0055d2d0(&local_70,&local_40,param_3);
    local_30 = local_50;
    *(uint *)((int)auStack_2c + (uint)bVar5 * 0xfffffff8) =
         *(uint *)((int)auStack_2c + ((uint)bVar5 * -2 + -8) * 4);
    *(uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
         *(uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
    ((uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
    [(uint)bVar5 * -2 + 1] =
         ((uint *)((int)auStack_2c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
         [(uint)bVar5 * -2 + 1];
    FUN_0055cd70(local_d0,&local_30);
    fVar1 = 1.0 - param_3;
    local_c4 = (float)param_2[3] * param_3 + (float)param_1[3] * fVar1;
    local_b4 = (float)param_2[7] * param_3 + (float)param_1[7] * fVar1;
    puVar4 = local_a0;
    iVar2 = 0xc;
    puVar3 = local_d0;
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
