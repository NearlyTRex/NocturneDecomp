// Name: FUN_0058ad40
// Address: 0058ad40
// Address Range: [[0058ad40, 0058b46b]]
// Convention: unknown
// Signature: void FUN_0058ad40(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058ad40(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  byte bVar8;
  int aiStackY_10bc [1002];
  byte local_fc [4];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int aiStack_d0 [5];
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
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
  uint local_74;
  int aiStack_70 [4];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  bVar8 = 0;
  if (*param_1 == 0) {
    return;
  }
  FUN_0046b670(DAT_0060b280);
  local_d4 = local_74;
  aiStack_d0[(uint)bVar8 * -2] = aiStack_70[(uint)bVar8 * -2];
  aiStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       aiStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (*param_1 == 1) {
    local_d4 = 0;
  }
  if (*param_1 == 1) {
    FUN_0046ca00(DAT_0060b280,&DAT_0061e8f8);
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18) = 0x80000;
    *(uint *)(*piVar2 + 0x1c) = 0x80000;
    *(uint *)(*piVar2 + 0x48) = 0x780000;
    *(uint *)(*piVar2 + 0x4c) = 0x80000;
    *(uint *)(*piVar2 + 0x78) = 0x780000;
    *(uint *)(*piVar2 + 0x7c) = 0xf80000;
    *(uint *)(*piVar2 + 0xa8) = 0x80000;
    *(uint *)(*piVar2 + 0xac) = 0xf80000;
  }
  else {
    FUN_0046ca00(DAT_0060b280,&DAT_0061e928);
  }
  FUN_00530980(0x01E661B8,0,0,0,0,0);
  local_1c = 0.1;
  local_18 = 0.1;
  if (*param_1 == 1) {
    local_18 = -0.4;
    local_1c = 0.05;
  }
  local_f8 = 4;
  local_e8 = 0;
  local_ec = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_e4 = 0;
  local_e0 = 1;
  local_dc = 2;
  local_d8 = 3;
  FUN_0046b8d0(DAT_0060b280,1);
  pfVar6 = (float *)&DAT_02661fb8;
  uVar7 = 0;
  FUN_0046b8e0(DAT_0060b280,0x8000);
  do {
    iVar3 = *DAT_0060b280;
    local_a4 = (int)ROUND(*pfVar6 * _DAT_005fe090);
    local_a0 = (int)ROUND(pfVar6[1] * _DAT_005fe090);
    local_9c = (int)ROUND(pfVar6[2] * _DAT_005fe090);
    FUN_0055d9ec(iVar3,&local_a4);
    iVar3 = FUN_0046cad0(DAT_0060b280,iVar3);
    if (iVar3 != 0) {
      FUN_0046b2b0(DAT_0060b280,pfVar6);
      FUN_0046b350(DAT_0060b280,&local_d4,0);
      local_50 = (int)ROUND(*pfVar6 * _DAT_005fe090);
      local_4c = (int)ROUND(pfVar6[1] * _DAT_005fe090);
      local_48 = (int)ROUND(pfVar6[2] * _DAT_005fe090);
      FUN_005317c0(0x01E661B8,&local_50,0,0,4);
      piVar2 = DAT_0060b280;
      if (*param_1 == 2) {
        iVar4 = (uVar7 & 3) * 0x400000;
        local_20 = iVar4 + 0x80000;
        iVar5 = ((int)(uVar7 & 0xc) >> 2) * 0x400000;
        *(int *)(*DAT_0060b280 + 0x18) = local_20;
        iVar3 = iVar5 + 0x80000;
        *(int *)(*piVar2 + 0x1c) = iVar3;
        iVar4 = iVar4 + 0x380000;
        *(int *)(*piVar2 + 0x48) = iVar4;
        *(int *)(*piVar2 + 0x4c) = iVar3;
        *(int *)(*piVar2 + 0x78) = iVar4;
        iVar5 = iVar5 + 0x380000;
        *(int *)(*piVar2 + 0x7c) = iVar5;
        *(int *)(*piVar2 + 0xa8) = local_20;
        *(int *)(*piVar2 + 0xac) = iVar5;
      }
      local_b8 = -local_18;
      local_bc = local_1c;
      local_b4 = 0.0;
      local_2c = (int)ROUND(local_1c * _DAT_005fe090);
      local_28 = (int)ROUND(local_b8 * _DAT_005fe090);
      local_24 = (int)ROUND(_DAT_005fe090 * 0.0);
      FUN_0055d723(*DAT_0060b280,&local_2c);
      local_bc = -local_bc;
      local_b0 = (int)ROUND(local_bc * _DAT_005fe090);
      local_ac = (int)ROUND(local_b8 * _DAT_005fe090);
      local_a8 = (int)ROUND(local_b4 * _DAT_005fe090);
      FUN_0055d723(*DAT_0060b280 + 0x30,&local_b0);
      local_b8 = -local_b8;
      local_8c = (int)ROUND(local_bc * _DAT_005fe090);
      local_88 = (int)ROUND(local_b8 * _DAT_005fe090);
      local_84 = (int)ROUND(local_b4 * _DAT_005fe090);
      FUN_0055d723(*DAT_0060b280 + 0x60,&local_8c);
      local_bc = -local_bc;
      aiStack_70[2] = (int)ROUND(local_bc * _DAT_005fe090);
      aiStack_70[3] = (int)ROUND(local_b8 * _DAT_005fe090);
      local_60 = (int)ROUND(local_b4 * _DAT_005fe090);
      FUN_0055d723(*DAT_0060b280 + 0x90,aiStack_70 + 2);
      FUN_0046ab50(DAT_0060b280,local_fc);
      thunk_FUN_004e9810(DAT_0060b280);
    }
    uVar7 = uVar7 + 1;
    pfVar6 = pfVar6 + 3;
  } while ((int)uVar7 < 200);
  if (*param_1 == 1) {
    FUN_0046ca00(DAT_0060b280,&DAT_0061e910);
    piVar2 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x18) = 0x80000;
    *(uint *)(*piVar2 + 0x1c) = 0x80000;
    *(uint *)(*piVar2 + 0x48) = 0x780000;
    *(uint *)(*piVar2 + 0x4c) = 0x80000;
    *(uint *)(*piVar2 + 0x78) = 0x780000;
    *(uint *)(*piVar2 + 0x7c) = 0xf80000;
    iVar3 = 0;
    *(uint *)(*piVar2 + 0xa8) = 0x80000;
    local_10 = 0;
    local_14 = 0;
    *(uint *)(*piVar2 + 0xac) = 0xf80000;
    do {
      if (*(char *)(iVar3 + 0x2662c38) != '\0') {
        uVar1 = *(uint *)(local_10 + 0x2662918);
        iVar4 = (uint)bVar8 * -8 + local_14;
        aiStack_d0[2] = *(int *)(&DAT_02661fb8 + local_14);
        aiStack_d0[(uint)bVar8 * -2 + 3] = *(int *)(&DAT_02661fbc + iVar4);
        aiStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             *(int *)((int)(&DAT_02661fbc + iVar4) + ((uint)bVar8 * -2 + 1) * 4);
        aiStack_d0[3] = uVar1;
        FUN_0046b2b0(DAT_0060b280,aiStack_d0 + 2);
        FUN_0046b350(DAT_0060b280,&local_d4,0);
        local_40 = 0.0;
        local_3c = 0.0;
        local_44 = 0.2;
        local_80 = (int)ROUND(_DAT_005fe090 * 0.2);
        local_7c = (int)ROUND(_DAT_005fe090 * 0.0);
        local_78 = (int)ROUND(_DAT_005fe090 * 0.0);
        FUN_0055d723(*DAT_0060b280,&local_80);
        local_44 = -local_44;
        local_5c = (int)ROUND(local_44 * _DAT_005fe090);
        local_58 = (int)ROUND(local_40 * _DAT_005fe090);
        local_54 = (int)ROUND(local_3c * _DAT_005fe090);
        FUN_0055d723(*DAT_0060b280 + 0x30,&local_5c);
        local_40 = 0.4;
        local_38 = (int)ROUND(local_44 * _DAT_005fe090);
        local_34 = (int)ROUND(_DAT_005fe090 * 0.4);
        local_30 = (int)ROUND(local_3c * _DAT_005fe090);
        FUN_0055d723(*DAT_0060b280 + 0x60,&local_38);
        local_44 = -local_44;
        local_98 = (int)ROUND(local_44 * _DAT_005fe090);
        local_94 = (int)ROUND(local_40 * _DAT_005fe090);
        local_90 = (int)ROUND(local_3c * _DAT_005fe090);
        FUN_0055d723(*DAT_0060b280 + 0x90,&local_98);
        FUN_0046ab50(DAT_0060b280,local_fc);
        thunk_FUN_004e9810(DAT_0060b280);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0xc;
      local_10 = local_10 + 4;
    } while (iVar3 < 200);
  }
  FUN_0046b8d0(DAT_0060b280,0);
  return;
}
