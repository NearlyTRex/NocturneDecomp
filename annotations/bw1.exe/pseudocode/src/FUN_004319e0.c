// Name: FUN_004319e0
// Address: 004319e0
// Address Range: [[004319e0, 00431c22]]
// Convention: unknown
// Signature: void FUN_004319e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004319e0(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  uint auStackY_1040 [1012];
  uint uVar5;
  uint uVar6;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_004a1b70(0x01C51D80,"?ShotInvulnerable" + 1);
    return;
  }
  if ((float)param_2[1] <= 0.0) {
    return;
  }
  puVar2 = (uint *)0x0;
  if (0.0 < SQRT((float)param_2[5] * (float)param_2[5] +
                 (float)param_2[3] * (float)param_2[3] + (float)param_2[4] * (float)param_2[4])) {
    puVar2 = param_2 + 3;
  }
  uVar1 = param_2[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        FUN_00430c90(param_1,puVar2,param_2[6]);
      }
      goto LAB_00431a64;
    }
    if (4 < uVar1) {
      FUN_00430c40(param_1);
      goto LAB_00431a64;
    }
LAB_00431bb2:
    FUN_00430d90(param_1,puVar2,param_2[6],0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00431a64;
        goto LAB_00431bb2;
      }
      if (uVar1 < 0x69) {
        FUN_00430440(param_1);
        goto LAB_00431a64;
      }
      if (uVar1 != 0x6a) goto LAB_00431a64;
    }
    *(uint *)(param_1 + 0xb9f0) = 0x40400000;
  }
LAB_00431a64:
  if (param_2[10] == 5) {
    FUN_00408b40(param_1,param_2 + 7);
    uVar6 = 0;
    uVar5 = 0x3f800000;
    local_4c = local_34;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_004308a0(param_1,&stack0xffffffb4,*param_2,0,uVar5,uVar6);
  }
  if (param_2[10] == 9) {
    FUN_00408b40(param_1,param_2 + 7);
    *(uint *)(param_1 + 0xb9f0) = 0x3f000000;
  }
  if (0.0 < (float)param_2[2]) {
    fVar4 = (float10)(float)param_2[1] * (float10)(float)param_2[2];
    FUN_005c03a0();
    local_1c = (int)ROUND(fVar4);
    local_18 = local_1c + 1;
    FUN_00408b40(param_1,param_2 + 7);
    local_40 = local_58;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_004e6060(0x01CD0E3C,&stack0xffffffc0,param_2 + 3,local_18,
                 *(uint *)(param_1 + 0x27a0));
  }
  if ((*(int *)(param_1 + 0x2540) == 1) && (param_1 != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
    FUN_004d6340(0x01CCF390,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x40a00000);
  }
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    return;
  }
  FUN_004328c0(param_1);
  return;
}
