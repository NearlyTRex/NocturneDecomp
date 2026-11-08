// Name: FUN_00408ec0
// Address: 00408ec0
// Address Range: [[00408ec0, 004090ea]]
// Convention: unknown
// Signature: undefined4 * FUN_00408ec0(int param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint * FUN_00408ec0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [998];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint uStack_70;
  uint uStack_64;
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  if (param_3 < 2) {
    if (param_3 != 1) {
LAB_004090bc:
      local_b4 = 1e+08;
      local_b8 = 1e+08;
      local_b0 = 1e+08;
      if (&stack0xffffff54 != &stack0xffffff48) {
        local_a8 = 1e+08;
        local_a4 = 1e+08;
        local_ac = 1e+08;
      }
      goto LAB_0040903e;
    }
LAB_00408ef7:
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar2 = (uint *)&stack0xffffff60;
    puVar4 = (uint *)&stack0xffffff78;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00420570(&stack0xffffff78,0);
    puVar2 = &stack0xffffffcc;
    uStack_34 = uStack_70;
    *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 0xf) * 4) =
         *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10) * 4) =
         *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
    FUN_00408ac0(param_1,puVar2);
    fStack_28 = fStack_1c;
    *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 0x12) * 4) =
         *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 0x15) * 4);
    *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13) * 4) =
         *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16) * 4);
    if (&stack0xffffff48 != &stack0xffffffd8) {
      local_b8 = fStack_28;
      local_b4 = fStack_24;
      local_b0 = fStack_20;
    }
    if (&stack0xffffff54 != &stack0xffffffd8) {
      local_ac = fStack_28;
      local_a8 = fStack_24;
      local_a4 = fStack_20;
    }
    iVar1 = 1;
    do {
      FUN_00420570(&stack0xffffff78,iVar1);
      puVar2 = &stack0xffffff9c;
      uStack_64 = uStack_4c;
      *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 3) * 4) =
           *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 9) * 4);
      *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
           *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 10) * 4);
      FUN_00408ac0(param_1,puVar2);
      puVar2 = &stack0xffffffa8;
      iVar1 = iVar1 + 1;
      uStack_58 = uStack_40;
      *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 6) * 4) =
           *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + 0xc) * 4);
      pfVar3 = &stack0xffffff48;
      *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4) =
           *(uint *)((int)&stack0xffffff94 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd) * 4);
      FUN_00420500(pfVar3,puVar2);
    } while (iVar1 < 8);
    local_b8 = local_b8 + *(float *)(param_1 + 0x20);
    local_b4 = local_b4 + *(float *)(param_1 + 0x24);
    local_b0 = local_b0 + *(float *)(param_1 + 0x28);
    local_ac = local_ac + *(float *)(param_1 + 0x20);
    local_a8 = local_a8 + *(float *)(param_1 + 0x24);
    local_a4 = local_a4 + *(float *)(param_1 + 0x28);
  }
  else {
    if (2 < param_3) {
      if (param_3 != 3) goto LAB_004090bc;
      goto LAB_00408ef7;
    }
    local_b8 = *(float *)(param_1 + 0x20) - *(float *)(param_2 + 0x1c);
    local_b4 = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x14);
    local_b0 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x1c);
    local_ac = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x1c);
    local_a8 = *(float *)(param_1 + 0x24) + *(float *)(param_2 + 0x18);
    local_a4 = *(float *)(param_1 + 0x28) + *(float *)(param_2 + 0x1c);
  }
LAB_0040903e:
  pfVar3 = &stack0xffffff48;
  puVar2 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
  }
  return unaff_ESI;
}
