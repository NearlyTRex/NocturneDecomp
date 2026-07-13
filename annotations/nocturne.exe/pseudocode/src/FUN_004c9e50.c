// Name: FUN_004c9e50
// Address: 004c9e50
// Address Range: [[004c9e50, 004ca23c]]
// Convention: unknown
// Signature: float FUN_004c9e50(int param_1,float *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float FUN_004c9e50(int param_1,float *param_2,uint param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  float local_9c;
  float local_98;
  float local_94;
  byte local_90 [12];
  byte local_84 [12];
  byte local_78 [12];
  byte local_6c [12];
  byte local_60 [12];
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  iVar1 = FUN_00454530(param_1 + 0x150);
  local_cc = *(uint *)(iVar1 + 0x338);
  local_c8 = *(uint *)(iVar1 + 0x33c);
  local_c4 = *(uint *)(iVar1 + 0x340);
  local_c0 = *(uint *)(iVar1 + 0x344);
  local_bc = *(uint *)(iVar1 + 0x348);
  local_b8 = *(uint *)(iVar1 + 0x34c);
  local_28 = param_1 + 0xa98;
  local_1c = 1.01;
  local_2c = (int *)(param_1 + 0x5e8);
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4 = *param_2 - (float)local_2c[3];
      local_b0 = param_2[1] - (float)local_2c[4];
      local_ac = param_2[2] - (float)local_2c[5];
      piVar3 = local_2c + 9;
      FUN_0044daa0(piVar3,local_6c,&local_b4);
      FUN_0044daa0(piVar3,local_3c,param_3);
      local_18 = (float)FUN_0041d550(&local_cc,local_6c,local_3c,local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pfVar2 = (float *)FUN_0044da40(piVar3,local_90,local_a8);
        if (param_4 != pfVar2) {
          *param_4 = *pfVar2;
          param_4[1] = pfVar2[1];
          param_4[2] = pfVar2[2];
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar1 = 0;
    do {
      iVar4 = local_30 + 0x3c + iVar1;
      local_18 = (float)FUN_0046c620(iVar4,param_2,param_3);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_48 = -*(float *)(iVar4 + 0x24);
        local_44 = -*(float *)(iVar4 + 0x28);
        local_40 = -*(float *)(iVar4 + 0x2c);
        local_1c = local_18;
        if (param_4 != &local_48) {
          *param_4 = local_48;
          param_4[1] = local_44;
          param_4[2] = local_40;
        }
      }
      iVar1 = iVar1 + 0x38;
    } while (iVar1 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  iVar1 = FUN_00454530(param_1 + 0x448);
  if (&local_cc != (uint *)(iVar1 + 0x338)) {
    local_cc = *(uint *)(iVar1 + 0x338);
    local_c8 = *(uint *)(iVar1 + 0x33c);
    local_c4 = *(uint *)(iVar1 + 0x340);
  }
  if (&local_c0 != (uint *)(iVar1 + 0x344)) {
    local_c0 = *(uint *)(iVar1 + 0x344);
    local_bc = *(uint *)(iVar1 + 0x348);
    local_b8 = *(uint *)(iVar1 + 0x34c);
  }
  iVar1 = param_1 + 0x1338;
  local_24 = param_1 + 0x13f8;
  do {
    if (0.0 < *(float *)(iVar1 + 0x18)) {
      local_9c = *param_2 - *(float *)(iVar1 + 0x1c);
      local_98 = param_2[1] - *(float *)(iVar1 + 0x20);
      local_94 = param_2[2] - *(float *)(iVar1 + 0x24);
      iVar4 = iVar1 + 0x34;
      FUN_0044daa0(iVar4,local_60,&local_9c);
      FUN_0044daa0(iVar4,local_78,param_3);
      local_18 = (float)FUN_0041d550(&local_cc,local_60,local_78,local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pfVar2 = (float *)FUN_0044da40(iVar4,local_84,local_54);
        if (param_4 != pfVar2) {
          *param_4 = *pfVar2;
          param_4[1] = pfVar2[1];
          param_4[2] = pfVar2[2];
        }
      }
    }
    iVar1 = iVar1 + 0x60;
  } while (iVar1 != local_24);
  return local_1c;
}
