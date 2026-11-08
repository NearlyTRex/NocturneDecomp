// Name: FUN_00430d60
// Address: 00430d60
// Address Range: [[00430d60, 00430ff5]]
// Convention: unknown
// Signature: void FUN_00430d60(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430d60(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  uint auStackY_1040 [1011];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_0048c150(0x01C6E360,"?ShotInvulnerable" + 1);
    return;
  }
  if ((float)param_2[1] <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x3268) = 1;
  puVar2 = (uint *)0x0;
  if (0.0 < SQRT((float)param_2[5] * (float)param_2[5] +
                 (float)param_2[3] * (float)param_2[3] + (float)param_2[4] * (float)param_2[4])) {
    puVar2 = param_2 + 3;
  }
  uVar1 = param_2[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        FUN_0042ffe0(param_1,puVar2,param_2[6]);
      }
      goto LAB_00430dee;
    }
    if (4 < uVar1) {
      FUN_0042ff70(param_1);
      goto LAB_00430dee;
    }
LAB_00430f85:
    FUN_004300e0(param_1,puVar2,param_2[6],1);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00430dee;
        goto LAB_00430f85;
      }
      if (uVar1 < 0x69) {
        FUN_0042f770(param_1);
        goto LAB_00430dee;
      }
      if (uVar1 != 0x6a) goto LAB_00430dee;
    }
    *(uint *)(param_1 + 0xbc70) = 0x40000000;
  }
LAB_00430dee:
  if (param_2[10] == 5) {
    FUN_00408b80(param_1,param_2 + 7);
    uVar7 = 0x40000000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    local_58 = local_4c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_0042fbd0(param_1,&stack0xffffffa8,*param_2,0,uVar5,uVar6,uVar7);
  }
  if (param_2[10] == 9) {
    FUN_00408b80(param_1,param_2 + 7);
    *(uint *)(param_1 + 0xbc70) = 0x3f000000;
  }
  if (0.0 < (float)param_2[2]) {
    fVar4 = (float10)(float)param_2[1] * (float10)(float)param_2[2];
    FUN_005a3120();
    local_18 = (int)ROUND(fVar4);
    local_1c = local_18 + 1;
    FUN_00408b80(param_1,param_2 + 7);
    local_34 = local_40;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_004ce9c0(0x01D22E44,&stack0xffffffcc,param_2 + 3,local_1c,
                 *(uint *)(param_1 + 0x27a0));
  }
  if ((*(int *)(param_1 + 0x2540) == 1) && (param_1 != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
    FUN_004bd930(0x01D2130C,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x40a00000);
  }
  if ((param_1 != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) && (param_2[0xc] == 0x6f)) {
    FUN_004bd930(0x01D2130C,param_1 + 0x2544,
                 *(float *)(param_1 + 0x2538) / *(float *)(param_1 + 0x253c),0x40a00000);
  }
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    return;
  }
  FUN_00431ce0(param_1);
  return;
}
