// Name: FUN_00555020
// Address: 00555020
// Address Range: [[00555020, 0055574e]]
// Convention: unknown
// Signature: void FUN_00555020(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555020(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  byte local_f0 [4];
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  uint local_b0 [3];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_00460db0(DAT_005ae704,local_b0);
  if (*param_1 == 1) {
    local_b0[0] = 0;
  }
  if (*param_1 == 1) {
    FUN_00461eb0(DAT_005ae704,&DAT_005c15bc);
    piVar1 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18) = 0x80000;
    *(uint *)(*piVar1 + 0x1c) = 0x80000;
    *(uint *)(*piVar1 + 0x48) = 0x780000;
    *(uint *)(*piVar1 + 0x4c) = 0x80000;
    *(uint *)(*piVar1 + 0x78) = 0x780000;
    *(uint *)(*piVar1 + 0x7c) = 0xf80000;
    *(uint *)(*piVar1 + 0xa8) = 0x80000;
    *(uint *)(*piVar1 + 0xac) = 0xf80000;
  }
  else {
    FUN_00461eb0(DAT_005ae704,&DAT_005c15ec);
  }
  FUN_0050adc0(0x01E57284,0,0,0,0,0);
  local_14 = 0.1;
  local_10 = 0.1;
  if (*param_1 == 1) {
    local_10 = -0.4;
    local_14 = 0.05;
  }
  local_ec = 4;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d4 = 1;
  local_d0 = 2;
  local_cc = 3;
  FUN_00461000(DAT_005ae704,1);
  pfVar3 = (float *)&DAT_02ddfa28;
  uVar5 = 0;
  FUN_00461010(DAT_005ae704,0x8000);
  do {
    iVar2 = *DAT_005ae704;
    local_50 = (int)ROUND(*pfVar3 * _DAT_005a4290);
    local_4c = (int)ROUND(pfVar3[1] * _DAT_005a4290);
    local_48 = (int)ROUND(pfVar3[2] * _DAT_005a4290);
    FUN_00530a25(iVar2,&local_50);
    iVar2 = FUN_00461f80(DAT_005ae704,iVar2);
    if (iVar2 != 0) {
      FUN_00460a00(DAT_005ae704,pfVar3);
      FUN_00460aa0(DAT_005ae704,local_b0,0);
      local_80 = (int)ROUND(*pfVar3 * _DAT_005a4290);
      local_7c = (int)ROUND(pfVar3[1] * _DAT_005a4290);
      local_78 = (int)ROUND(pfVar3[2] * _DAT_005a4290);
      FUN_0050bb50(0x01E57284,&local_80,0,0,4);
      piVar1 = DAT_005ae704;
      if (*param_1 == 2) {
        local_20 = (uVar5 & 3) * 0x400000;
        iVar2 = ((int)(uVar5 & 0xc) >> 2) * 0x400000;
        *(int *)(*DAT_005ae704 + 0x18) = local_20 + 0x80000;
        local_18 = iVar2 + 0x80000;
        *(int *)(*piVar1 + 0x1c) = local_18;
        local_1c = local_20 + 0x380000;
        *(int *)(*piVar1 + 0x48) = local_1c;
        *(int *)(*piVar1 + 0x4c) = local_18;
        *(int *)(*piVar1 + 0x78) = local_1c;
        iVar2 = iVar2 + 0x380000;
        *(int *)(*piVar1 + 0x7c) = iVar2;
        *(int *)(*piVar1 + 0xa8) = local_20 + 0x80000;
        *(int *)(*piVar1 + 0xac) = iVar2;
      }
      local_34 = -local_10;
      local_38 = local_14;
      local_30 = 0.0;
      local_8c = (int)ROUND(local_14 * _DAT_005a4290);
      local_88 = (int)ROUND(local_34 * _DAT_005a4290);
      local_84 = (int)ROUND(_DAT_005a4290 * 0.0);
      FUN_0053075c(*DAT_005ae704,&local_8c);
      local_38 = -local_38;
      local_68 = (int)ROUND(local_38 * _DAT_005a4290);
      local_64 = (int)ROUND(local_34 * _DAT_005a4290);
      local_60 = (int)ROUND(local_30 * _DAT_005a4290);
      FUN_0053075c(*DAT_005ae704 + 0x30,&local_68);
      local_34 = -local_34;
      local_5c = (int)ROUND(local_38 * _DAT_005a4290);
      local_58 = (int)ROUND(local_34 * _DAT_005a4290);
      local_54 = (int)ROUND(local_30 * _DAT_005a4290);
      FUN_0053075c(*DAT_005ae704 + 0x60,&local_5c);
      local_38 = -local_38;
      local_98 = (int)ROUND(local_38 * _DAT_005a4290);
      local_94 = (int)ROUND(local_34 * _DAT_005a4290);
      local_90 = (int)ROUND(local_30 * _DAT_005a4290);
      FUN_0053075c(*DAT_005ae704 + 0x90,&local_98);
      FUN_004602a0(DAT_005ae704,local_f0);
      thunk_FUN_004cdbc0(DAT_005ae704);
    }
    uVar5 = uVar5 + 1;
    pfVar3 = pfVar3 + 3;
  } while ((int)uVar5 < 200);
  if (*param_1 == 1) {
    FUN_00461eb0(DAT_005ae704,&DAT_005c15d4);
    piVar1 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18) = 0x80000;
    *(uint *)(*piVar1 + 0x1c) = 0x80000;
    *(uint *)(*piVar1 + 0x48) = 0x780000;
    *(uint *)(*piVar1 + 0x4c) = 0x80000;
    *(uint *)(*piVar1 + 0x78) = 0x780000;
    *(uint *)(*piVar1 + 0x7c) = 0xf80000;
    iVar4 = 0;
    *(uint *)(*piVar1 + 0xa8) = 0x80000;
    iVar2 = 0;
    puVar6 = &DAT_02ddfa2c;
    *(uint *)(*piVar1 + 0xac) = 0xf80000;
    do {
      if (*(char *)(iVar4 + 0x2de06a8) != '\0') {
        local_2c = *(uint *)(&DAT_02ddfa28 + iVar4 * 0xc);
        local_24 = *(uint *)(puVar6 + 4);
        local_28 = *(uint *)(iVar2 + 0x2de0388);
        FUN_00460a00(DAT_005ae704,&local_2c);
        FUN_00460aa0(DAT_005ae704,local_b0,0);
        local_b8 = 0.0;
        local_b4 = 0.0;
        local_bc = 0.2;
        local_74 = (int)ROUND(_DAT_005a4290 * 0.2);
        local_70 = (int)ROUND(_DAT_005a4290 * 0.0);
        local_6c = (int)ROUND(_DAT_005a4290 * 0.0);
        FUN_0053075c(*DAT_005ae704,&local_74);
        local_bc = -local_bc;
        local_a4 = (int)ROUND(local_bc * _DAT_005a4290);
        local_a0 = (int)ROUND(local_b8 * _DAT_005a4290);
        local_9c = (int)ROUND(local_b4 * _DAT_005a4290);
        FUN_0053075c(*DAT_005ae704 + 0x30,&local_a4);
        local_b8 = 0.4;
        local_c8 = (int)ROUND(local_bc * _DAT_005a4290);
        local_c4 = (int)ROUND(_DAT_005a4290 * 0.4);
        local_c0 = (int)ROUND(local_b4 * _DAT_005a4290);
        FUN_0053075c(*DAT_005ae704 + 0x60,&local_c8);
        local_bc = -local_bc;
        local_44 = (int)ROUND(local_bc * _DAT_005a4290);
        local_40 = (int)ROUND(local_b8 * _DAT_005a4290);
        local_3c = (int)ROUND(local_b4 * _DAT_005a4290);
        FUN_0053075c(*DAT_005ae704 + 0x90,&local_44);
        FUN_004602a0(DAT_005ae704,local_f0);
        thunk_FUN_004cdbc0(DAT_005ae704);
      }
      puVar6 = puVar6 + 0xc;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 200);
  }
  FUN_00461000(DAT_005ae704,0);
  return;
}
