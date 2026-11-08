// Name: FUN_004b0210
// Address: 004b0210
// Address Range: [[004b0210, 004b05a6]]
// Convention: unknown
// Signature: void FUN_004b0210(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0210(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1068 [798];
  byte local_380 [48];
  uint local_350 [12];
  uint local_320 [12];
  uint local_2f0 [12];
  uint local_2c0 [12];
  uint local_290 [12];
  uint local_260 [12];
  uint local_230 [12];
  byte local_200 [48];
  uint local_1d0 [12];
  uint local_1a0 [12];
  byte local_170 [48];
  uint local_140 [12];
  uint local_110 [12];
  uint local_e0 [12];
  uint local_b0 [12];
  uint local_80;
  float afStack_7c [5];
  float local_68;
  uint local_5c;
  uint local_50;
  float local_44;
  uint local_40;
  uint local_3c;
  float local_38 [3];
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  FUN_00428e30(param_1,param_2);
  FUN_00591c10(local_380,param_1 + 0x20,param_1 + 0x30);
  local_14 = param_1 + 0x2437c;
  if (*(float *)(param_1 + 0x25648) < _DAT_005f7334) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x247e4) * 4 + local_14 + 0x610);
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xe4))(iVar1,1);
    FUN_00591c10(local_200,&DAT_01cb0650,&DAT_01cb065c);
    FUN_005916b0(local_200,_DAT_01cb06a0 * 0x30 + param_1 + 0x1134,local_380);
    puVar3 = local_230;
    puVar4 = local_1d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005916b0(local_1d0);
    puVar3 = local_e0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x247e4) * 4 + local_14 + 0x610);
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xe4))(iVar1,2);
    FUN_00591c10(local_170,&DAT_01cb0644,&DAT_0265370c);
    FUN_00593240(0x3fc90fdb,local_170,_DAT_01cb06bc * 0x30 + param_1 + 0x1134);
    puVar3 = local_140;
    puVar4 = local_2c0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005932c0(0x3fc90fdb,local_2c0);
    puVar3 = local_b0;
    puVar4 = local_2f0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005916b0(local_2f0);
    puVar3 = local_1a0;
    puVar4 = local_290;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005916b0(local_290);
    puVar3 = (uint *)&stack0xfffffc20;
    puVar4 = local_260;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005916b0(local_260);
    iVar1 = local_14;
    puVar3 = (uint *)&stack0xfffffc50;
    puVar4 = local_320;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_0040c840(*(uint *)(*(int *)(iVar1 + 0x468) * 4 + local_14 + 0x610),
                         "?CCrossbow" + 1);
    if (iVar1 != 0) {
      FUN_00592720(local_320);
      local_38[0] = afStack_7c[2];
      afStack_7c[(uint)bVar5 * -2 + 0x12] = afStack_7c[(uint)bVar5 * -2 + 3];
      afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      FUN_00591de0(local_320);
      local_80 = local_5c;
      afStack_7c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2 + 9];
      afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      afStack_7c[1] = (1.0 - *(float *)(param_1 + 0x2567c)) * afStack_7c[1];
      FUN_00591c10(local_320,afStack_7c + 0x11,&local_80);
    }
    FUN_005916b0(local_320,local_380);
    puVar3 = local_110;
  }
  puVar4 = local_350;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00592720(local_350);
  local_2c = local_50;
  afStack_7c[(uint)bVar5 * -2 + 0x15] = afStack_7c[(uint)bVar5 * -2 + 0xc];
  afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
  iVar1 = *(int *)(*(int *)(param_1 + 0x247e4) * 4 + param_1 + 0x2437c + 0x610);
  *(uint *)(iVar1 + 0x20) = local_2c;
  *(uint *)(iVar1 + 0x24) = local_28;
  *(uint *)(iVar1 + 0x28) = local_24;
  local_18 = param_1 + 0x2437c;
  FUN_00591de0(local_350);
  iVar1 = local_18;
  local_44 = local_68;
  afStack_7c[(uint)bVar5 * -2 + 0xf] = afStack_7c[(uint)bVar5 * -2 + 6];
  afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  iVar1 = *(int *)(*(int *)(iVar1 + 0x468) * 4 + local_18 + 0x610);
  if ((float *)(iVar1 + 0x30) != afStack_7c + 0xe) {
    *(float *)(iVar1 + 0x30) = local_44;
    *(uint *)(iVar1 + 0x34) = local_40;
    *(uint *)(iVar1 + 0x38) = local_3c;
  }
  FUN_00408ae0(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4));
  return;
}
