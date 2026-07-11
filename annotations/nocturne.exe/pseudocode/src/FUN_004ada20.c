// Name: FUN_004ada20
// Address: 004ada20
// Address Range: [[004ada20, 004add77]]
// Convention: unknown
// Signature: void FUN_004ada20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ada20(int param_1)

{
  char cVar1;
  float *pfVar2;
  char *pcVar3;
  char *pcVar4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  byte local_7c [12];
  byte local_70 [12];
  byte local_64 [12];
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    *(uint *)(param_1 + 0x178) = 1;
    if (*(int *)(param_1 + 0x1e0) != 0) {
      pcVar3 = ">7YEARS.RAW" + 1;
      pcVar4 = (char *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x174) = 0xffff;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      FUN_0050e300(0x01E57284);
    }
    FUN_005644a7(&local_cc,4,&DAT_005993b0);
    local_1c = *(float *)(param_1 + 0x150) * (float)_DAT_00585068;
    local_18 = 0.0;
    local_14 = 0;
    pfVar2 = (float *)FUN_0044da40(param_1 + 0x3c,local_4c,&local_1c);
    local_40 = *(float *)(param_1 + 0x20) + *pfVar2;
    local_3c = *(float *)(param_1 + 0x24) + pfVar2[1];
    local_38 = *(float *)(param_1 + 0x28) + pfVar2[2];
    if (&local_cc != &local_40) {
      local_cc = local_40;
      local_c8 = local_3c;
      local_c4 = local_38;
    }
    local_18 = local_18 + *(float *)(param_1 + 0x154);
    pfVar2 = (float *)FUN_0044da40(param_1 + 0x3c,local_7c,&local_1c);
    local_58 = *(float *)(param_1 + 0x20) + *pfVar2;
    local_54 = *(float *)(param_1 + 0x24) + pfVar2[1];
    local_50 = *(float *)(param_1 + 0x28) + pfVar2[2];
    if (&local_c0 != &local_58) {
      local_c0 = local_58;
      local_bc = local_54;
      local_b8 = local_50;
    }
    local_1c = -local_1c;
    pfVar2 = (float *)FUN_0044da40(param_1 + 0x3c,local_64,&local_1c);
    local_34 = *(float *)(param_1 + 0x20) + *pfVar2;
    local_30 = *(float *)(param_1 + 0x24) + pfVar2[1];
    local_2c = *(float *)(param_1 + 0x28) + pfVar2[2];
    if (&local_b4 != &local_34) {
      local_b4 = local_34;
      local_b0 = local_30;
      local_ac = local_2c;
    }
    local_18 = 0.0;
    pfVar2 = (float *)FUN_0044da40(param_1 + 0x3c,local_70,&local_1c);
    local_28 = *(float *)(param_1 + 0x20) + *pfVar2;
    local_24 = *(float *)(param_1 + 0x24) + pfVar2[1];
    local_20 = *(float *)(param_1 + 0x28) + pfVar2[2];
    if (&local_a8 != &local_28) {
      local_a8 = local_28;
      local_a4 = local_24;
      local_a0 = local_20;
    }
    FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
    if (DAT_005b762c == 0x40) {
      local_8c = 0xf80000;
      local_98 = 0x80000;
      local_88 = 0x80000;
      local_94 = 0xf80000;
      local_84 = 0x80000;
      local_90 = 0xf80000;
      local_80 = 0xf80000;
      local_9c = 0x80000;
    }
    else {
      local_8c = 0xfe0000;
      local_98 = 0x20000;
      local_88 = 0x20000;
      local_94 = 0xfe0000;
      local_84 = 0x20000;
      local_90 = 0xfe0000;
      local_80 = 0xfe0000;
      local_9c = 0x20000;
    }
    FUN_004accf0(param_1,&local_cc,&local_9c,&local_8c,0);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"glass-1.wav@2.0");
    if (*(int *)(param_1 + 0x368) != 0) {
      *(uint *)(param_1 + 0xb34) = 1;
      return;
    }
  }
  return;
}
