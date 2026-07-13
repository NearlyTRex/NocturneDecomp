// Name: FUN_0053d100
// Address: 0053d100
// Address Range: [[0053d100, 0053d6b0]]
// Convention: unknown
// Signature: undefined4 FUN_0053d100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053d100(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint local_22c [12];
  byte local_1fc [48];
  byte local_1cc [48];
  uint local_19c [12];
  byte local_16c [48];
  uint local_13c [12];
  uint local_10c [12];
  uint local_dc [12];
  byte local_ac [12];
  uint local_a0;
  uint local_9c;
  uint local_98;
  byte local_94 [12];
  uint local_88;
  uint local_84;
  uint local_80;
  byte local_7c [12];
  byte local_70 [12];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  byte local_4c [12];
  byte local_40 [12];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  iVar2 = FUN_00426440(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2290 + _DAT_02dc9fa8 * 4) != 0) {
    FUN_00409f20(param_1);
    local_30 = 0x40490fdb;
    local_34 = 0;
    local_2c = 0;
    local_a0 = 0;
    local_9c = 0x3f38263b;
    local_98 = 0x3e3d70a4;
    FUN_0055afb0(local_16c,&local_a0,&local_34);
    FUN_0055aa00(local_16c,param_1 + 0xfd0 + _DAT_02dc9f50 * 0x30);
    puVar4 = local_22c;
    puVar5 = local_13c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_0055bc00(local_13c,local_ac);
    FUN_0055b180(local_13c,local_94);
    FUN_00460aa0(DAT_005ae704,local_94,local_ac);
    FUN_004544d0(param_1 + 0x1fb40,0,0xffffffff);
    thunk_FUN_004cdbc0(DAT_005ae704);
    FUN_00409f60(param_1);
  }
  local_14 = (float)FUN_0042a9d0(param_1,6);
  if ((float)_DAT_00595c97 < local_14) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x24f0) != 0) {
      iVar2 = *(int *)(param_1 + 0x24f0) + 0x20;
    }
    if (*(int *)(param_1 + 0x1fa94) != 0) {
      iVar2 = *(int *)(param_1 + 0x1fa94) + 0x20;
    }
    if (iVar2 != 0) {
      FUN_00511750(0x01E57284);
      FUN_00511800(0x01E57284,1);
      FUN_00511780(0x01E57284,param_1);
      FUN_00511780(0x01E57284,*(uint *)(param_1 + 0x1fa94));
      FUN_00511780(0x01E57284,*(uint *)(param_1 + 0x24f0));
      uVar3 = FUN_0053f260(param_1,local_70);
      FUN_0040a200(param_1,local_7c,uVar3);
      local_14 = (float)FUN_0050fdd0(0x01E57284,iVar2,local_7c);
      local_18 = local_14;
      if (local_14 < 0.0) {
        local_18 = 10.0;
      }
      FUN_0048b440(0x01C08D04,iVar2,local_7c,0x3f800000,0x3f800000,0x01E57284 + 0x14cd40,
                   local_18,0xff,0,0);
      FUN_00511750(0x01E57284);
    }
  }
  iVar2 = *(int *)(param_1 + 0x1fa94);
  if ((((iVar2 == 0) || (iVar2 == *(int *)(param_1 + 0x24ac))) ||
      (iVar2 == *(int *)(param_1 + 0x24f0))) ||
     (*(int *)(param_1 + 0x2290 + _DAT_02dc9fa8 * 4) == 0)) goto LAB_0053d387;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 8))(*(int *)(param_1 + 0x1fa94));
  if (*(int *)(param_1 + 0x1fa94) == 0) {
switchD_0053d2cf_caseD_3:
    uVar3 = 0;
  }
  else {
    switch(*(uint *)(*(int *)(param_1 + 0x1fa94) + 0x2d8)) {
    case 0:
    case 5:
      uVar3 = 2;
      break;
    case 1:
      uVar3 = 4;
      break;
    case 2:
      uVar3 = 5;
      break;
    default:
      goto switchD_0053d2cf_caseD_3;
    case 4:
      uVar3 = 7;
      break;
    case 7:
      uVar3 = 8;
    }
  }
  local_14 = (float)FUN_0042a9d0(param_1,uVar3);
  bVar1 = (float)_DAT_00595c9f < local_14;
  if ((*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) == 1) && (*(int *)(param_1 + 0x2a84) == 8)) {
    bVar1 = true;
LAB_0053d31f:
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xe8))(*(int *)(param_1 + 0x1fa94))
    ;
  }
  else if (bVar1) goto LAB_0053d31f;
  if (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) == 0) {
    FUN_0053a660(param_1,1);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 8))(*(int *)(param_1 + 0x1fa94));
    if (bVar1) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa94) + 0x14c) + 0xe8))
                (*(int *)(param_1 + 0x1fa94));
    }
  }
  FUN_0053a660(param_1,0);
LAB_0053d387:
  if (((*(int *)(param_1 + 0x1fa00) != 0) && (*(int *)(param_1 + 0x2290 + _DAT_02dc9fa8 * 4) != 0))
     && (local_1c = *(int *)(param_1 + 0x1f9f4), local_1c != 0)) {
    FUN_00409f20(param_1);
    if (*(int *)(param_1 + 0x1fa00) == 2) {
      local_80 = 0;
      local_88 = 0xbe0fd3f6;
      local_5c = 0x3f09a30a;
      local_84 = 0xc04507c8;
      local_64 = 0x3bc63091;
      local_60 = 0x3e9135db;
      FUN_0055afb0(local_1cc,&local_64,&local_88);
      FUN_0055aa00(local_1cc,param_1 + 0xfd0 + _DAT_02dc9f50 * 0x30);
      puVar4 = local_10c;
    }
    else {
      local_28 = 0x3f94bac7;
      local_20 = 0x3d488e0e;
      local_24 = 0x3ebc7410;
      local_58 = 0x3f033b43;
      local_54 = 0xbca5f882;
      local_50 = 0x3e05d9a1;
      FUN_0055afb0(local_1fc,&local_58,&local_28);
      FUN_0055aa00(local_1fc,_DAT_02dc9f88 * 0x30 + param_1 + 0xfd0);
      puVar4 = local_19c;
    }
    puVar5 = local_dc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_0055b180(local_dc,local_40);
    FUN_0055bc00(local_dc,local_4c);
    FUN_00460aa0(DAT_005ae704,local_40,local_4c);
    FUN_004544d0(local_1c + 0x150,0,0xffffffff);
    thunk_FUN_004cdbc0(DAT_005ae704);
    FUN_00409f60(param_1);
  }
  if (((*(int *)(param_1 + 0x2290 + _DAT_02dc9fa8 * 4) == 0) &&
      (iVar2 = FUN_00461090(DAT_005ae704), iVar2 == 0)) && (0 < *(int *)(param_1 + 0x2a8c))) {
    FUN_00438320(param_1 + 0x2a8c);
  }
  return 1;
}
