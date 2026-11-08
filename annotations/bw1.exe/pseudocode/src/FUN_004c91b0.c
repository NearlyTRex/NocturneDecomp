// Name: FUN_004c91b0
// Address: 004c91b0
// Address Range: [[004c91b0, 004c94fc]]
// Convention: unknown
// Signature: void FUN_004c91b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c91b0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1068 [798];
  byte local_380 [48];
  uint local_350 [12];
  byte local_320 [48];
  uint local_2f0 [12];
  uint local_2c0 [12];
  uint local_290 [12];
  uint local_260 [12];
  uint local_230 [12];
  byte local_200 [48];
  uint local_1d0 [12];
  uint local_1a0 [12];
  uint local_170 [12];
  uint local_140 [12];
  uint local_110 [12];
  uint local_e0 [12];
  uint local_b0 [12];
  uint local_80;
  float local_7c [5];
  float local_68 [3];
  uint local_5c;
  float local_50 [2];
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_2c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  FUN_004328f0(param_1,param_2);
  FUN_005b5760(local_380,param_1 + 0x20,param_1 + 0x30);
  local_14 = param_1 + 0x1fae8;
  if (*(float *)(param_1 + 0x1ffb4) < _DAT_00600d54) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xdc))
              (*(int *)(param_1 + 0x1fe20),1);
    FUN_005b5760(local_200,&DAT_01cc90e0,&DAT_01cc90ec);
    FUN_005b5200(local_200,_DAT_01cc9130 * 0x30 + param_1 + 0xfd8,local_380);
    puVar3 = local_110;
    puVar4 = local_1d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005b5200(local_1d0);
    puVar3 = local_b0;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1fe20) + 0x154) + 0xdc))
              (*(int *)(param_1 + 0x1fe20),2);
    FUN_005b5760(local_320,&DAT_01cc90d4,&DAT_02c8af28);
    FUN_005b6d90(0x3fc90fdb,local_320,_DAT_01cc914c * 0x30 + param_1 + 0xfd8);
    puVar3 = local_170;
    puVar4 = local_290;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005b6e10(0x3fc90fdb,local_290);
    puVar3 = local_1a0;
    puVar4 = local_2c0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005b5200(local_2c0);
    puVar3 = (uint *)&stack0xfffffc20;
    puVar4 = local_260;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005b5200(local_260);
    puVar3 = (uint *)&stack0xfffffc50;
    puVar4 = local_230;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_005b5200(local_230);
    iVar1 = local_14;
    puVar3 = local_e0;
    puVar4 = local_2f0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_0040c550(*(uint *)(iVar1 + 0x338),"?CCrossbow" + 1);
    if (iVar1 != 0) {
      FUN_005b6270(local_2f0);
      local_68[0] = (float)local_38;
      local_7c[(uint)bVar5 * -2 + 6] = local_7c[(uint)bVar5 * -2 + 0x12];
      local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      FUN_005b5930(local_2f0);
      local_50[0] = (float)local_5c;
      local_7c[(uint)bVar5 * -2 + 0xc] = local_7c[(uint)bVar5 * -2 + 9];
      local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      local_48 = (1.0 - *(float *)(param_1 + 0x1ffe8)) * local_48;
      FUN_005b5760(local_2f0,local_7c + 5,local_7c + 0xb);
    }
    FUN_005b5200(local_2f0,local_380);
    puVar3 = local_140;
  }
  puVar4 = local_350;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_005b6270(local_350);
  local_44 = local_7c[2];
  local_7c[(uint)bVar5 * -2 + 0xf] = local_7c[(uint)bVar5 * -2 + 3];
  local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
       local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  iVar1 = *(int *)(param_1 + 0x1fe20);
  *(uint *)(iVar1 + 0x20) = local_44;
  *(uint *)(iVar1 + 0x24) = local_40;
  *(uint *)(iVar1 + 0x28) = local_3c;
  local_18 = param_1 + 0x1fae8;
  FUN_005b5930(local_350);
  iVar1 = local_18;
  local_80 = local_2c;
  local_7c[(uint)bVar5 * -2] = local_7c[(uint)bVar5 * -2 + 0x15];
  local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
  iVar1 = *(int *)(iVar1 + 0x338);
  if ((uint *)(iVar1 + 0x30) != &local_80) {
    *(uint *)(iVar1 + 0x30) = local_80;
    *(float *)(iVar1 + 0x34) = local_7c[0];
    *(float *)(iVar1 + 0x38) = local_7c[1];
  }
  FUN_004088b0(*(uint *)(param_1 + 0x1fe20));
  return;
}
