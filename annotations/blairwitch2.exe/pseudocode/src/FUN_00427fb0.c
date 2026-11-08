// Name: FUN_00427fb0
// Address: 00427fb0
// Address Range: [[00427fb0, 004281ce]]
// Convention: unknown
// Signature: void FUN_00427fb0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427fb0(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  int aiStackY_1030 [1012];
  uint uVar5;
  uint uVar6;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x281c) != 0) {
    FUN_004894f0(0x01C38BC0,"?ShotInvulnerable" + 1);
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
        FUN_00427260(param_1,puVar2,param_2[6]);
      }
      goto LAB_00428034;
    }
    if (4 < uVar1) {
      FUN_00427210(param_1);
      goto LAB_00428034;
    }
LAB_0042815e:
    FUN_00427360(param_1,puVar2,param_2[6],0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00428034;
        goto LAB_0042815e;
      }
      if (uVar1 < 0x69) {
        FUN_00426a10(param_1);
        goto LAB_00428034;
      }
      if (uVar1 != 0x6a) goto LAB_00428034;
    }
    *(uint *)(param_1 + 0x1022c) = 0x40000000;
  }
LAB_00428034:
  if (param_2[10] == 5) {
    FUN_00408d70(param_1,param_2 + 7);
    uVar6 = 0;
    uVar5 = 0x3f800000;
    local_30 = local_24;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_00426e70(param_1,&stack0xffffffd0,*param_2,0,uVar5,uVar6);
  }
  if (0.0 < (float)param_2[2]) {
    fVar4 = (float10)(float)param_2[1] * (float10)(float)param_2[2];
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar4);
    local_18 = local_14 + 1;
    FUN_00408d70(param_1,param_2 + 7);
    local_48 = local_3c;
    *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    FUN_004c9850(0x01CB8284,&stack0xffffffb8,param_2 + 3,local_18,
                 *(uint *)(param_1 + 0x280c));
  }
  if ((*(int *)(param_1 + 0x25b0) == 1) && (param_1 != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    FUN_004bb8d0(0x01CB6900,param_1 + 0x25b4,
                 *(float *)(param_1 + 0x25a8) / *(float *)(param_1 + 0x25ac),0x40a00000);
  }
  if (0.0 < *(float *)(param_1 + 0x25a8)) {
    return;
  }
  FUN_00428e00(param_1);
  return;
}
