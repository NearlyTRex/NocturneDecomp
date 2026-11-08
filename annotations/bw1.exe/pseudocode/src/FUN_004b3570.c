// Name: FUN_004b3570
// Address: 004b3570
// Address Range: [[004b3570, 004b3c64]]
// Convention: unknown
// Signature: void FUN_004b3570(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3570(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *extraout_EDX;
  int *extraout_EDX_00;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int aiStackY_103c [975];
  byte local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
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
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int aiStack_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  int aiStack_20 [4];
  int local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  if ((float)param_1[5] <= 0.0) {
    return;
  }
  iVar4 = FUN_005c084c();
  FUN_00484f00(DAT_00612560,&DAT_0061caac + (iVar4 % 6) * 0x18);
  local_e4 = 4;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c4 = 3;
  local_cc = 1;
  local_c8 = 2;
  uVar5 = FUN_005c084c();
  if ((uVar5 & 1) == 0) {
    _DAT_0062905c = 0x80000;
    _DAT_0062908c = 0x80000;
    _DAT_006290bc = 0xf80000;
    DAT_0062902c = 0xf80000;
  }
  else {
    _DAT_0062905c = 0xf80000;
    _DAT_0062908c = 0xf80000;
    _DAT_006290bc = 0x80000;
    DAT_0062902c = 0x80000;
  }
  _DAT_006290c0 = 0xf80000;
  DAT_00629090 = 0xf80000;
  _DAT_00629060 = 0x80000;
  _DAT_00629030 = 0x80000;
  DAT_00629034 = 0xffff;
  DAT_00629038 = 0xffff;
  DAT_0062903c = 0xffff;
  DAT_00629064 = 0xffff;
  DAT_00629068 = 0xffff;
  DAT_0062906c = 0xffff;
  DAT_00629094 = 0xffff;
  DAT_00629098 = 0xffff;
  DAT_0062909c = 0xffff;
  DAT_006290c4 = 0xffff;
  DAT_006290c8 = 0xffff;
  DAT_006290cc = 0xffff;
  FUN_00483de0(DAT_00612560,0xffff);
  FUN_00483dd0(DAT_00612560,1);
  pfVar1 = (float *)(param_1 + 1);
  if (*param_1 == 0) {
    FUN_004837b0(DAT_00612560,pfVar1);
    FUN_00483b70(DAT_00612560);
    local_24 = local_54;
    aiStack_20[(uint)bVar6 * -2] = aiStack_50[(uint)bVar6 * -2];
    aiStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         aiStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_24 = 0;
    FUN_00483850(DAT_00612560,&local_24,0);
    local_28 = 0.0;
    if (0.0 < (float)param_1[6]) {
      local_30 = (float)param_1[6];
    }
    else {
      local_30 = (float)param_1[4] * (float)_DAT_005df574;
    }
    local_2c = (float)param_1[4];
    local_60 = (int)ROUND(local_30 * _DAT_005fff94);
    local_5c = (int)ROUND(local_2c * _DAT_005fff94);
    local_58 = (int)ROUND(_DAT_005fff94 * 0.0);
    FUN_00580173(*DAT_00612560,&local_60);
    local_30 = -local_30;
    local_b4 = (int)ROUND(local_30 * _DAT_005fff94);
    local_b0 = (int)ROUND(local_2c * _DAT_005fff94);
    local_ac = (int)ROUND(local_28 * _DAT_005fff94);
    FUN_00580173(*DAT_00612560 + 0x30,&local_b4);
    local_2c = 0.0;
    aiStack_50[2] = (int)ROUND(local_30 * _DAT_005fff94);
    aiStack_50[3] = (int)ROUND(_DAT_005fff94 * 0.0);
    local_40 = (int)ROUND(local_28 * _DAT_005fff94);
    FUN_00580173(*DAT_00612560 + 0x60,aiStack_50 + 2);
    local_30 = -local_30;
    aiStack_20[2] = (int)ROUND(local_30 * _DAT_005fff94);
    aiStack_20[3] = (int)ROUND(local_2c * _DAT_005fff94);
    local_10 = (int)ROUND(local_28 * _DAT_005fff94);
    FUN_00580173(*DAT_00612560 + 0x90,aiStack_20 + 2);
    FUN_00483050(DAT_00612560,local_e8);
    thunk_FUN_005084b0(DAT_00612560);
  }
  else {
    local_9c = (int)ROUND(*pfVar1 * _DAT_005fff94);
    local_98 = (int)ROUND((float)param_1[2] * _DAT_005fff94);
    local_94 = (int)ROUND((float)param_1[3] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560,&local_9c);
    local_6c = (int)ROUND(*pfVar1 * _DAT_005fff94);
    local_68 = (int)ROUND((float)param_1[2] * _DAT_005fff94);
    local_64 = (int)ROUND((float)param_1[3] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x30,&local_6c);
    pfVar2 = (float *)(param_1 + 7);
    local_3c = (int)ROUND(*pfVar2 * _DAT_005fff94);
    local_38 = (int)ROUND((float)param_1[8] * _DAT_005fff94);
    local_34 = (int)ROUND((float)param_1[9] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x60,&local_3c);
    local_90 = (int)ROUND(*pfVar2 * _DAT_005fff94);
    local_8c = (int)ROUND((float)param_1[8] * _DAT_005fff94);
    local_88 = (int)ROUND((float)param_1[9] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x90,&local_90);
    fVar7 = (float10)_DAT_005df56c;
    fVar8 = (float10)(float)param_1[6] * fVar7;
    fVar9 = (float10)(float)param_1[10];
    *(uint *)(*DAT_00612560 + 0x10) = 0x80000000;
    FUN_005c03a0();
    local_8 = (int)ROUND(fVar8);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - local_8;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + local_8;
    fVar9 = fVar9 * fVar7;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    FUN_005c03a0();
    local_c = (int)ROUND(fVar9);
    *(int *)(*extraout_EDX_00 + 100) = *(int *)(*extraout_EDX_00 + 100) + local_c;
    *(uint *)(*extraout_EDX_00 + 0xa0) = 0x80000000;
    *(int *)(*extraout_EDX_00 + 0x94) = *(int *)(*extraout_EDX_00 + 0x94) - local_c;
    FUN_00483050(extraout_EDX_00,local_e8);
    local_a8 = (int)ROUND(*pfVar1 * _DAT_005fff94);
    local_a4 = (int)ROUND((float)param_1[2] * _DAT_005fff94);
    local_a0 = (int)ROUND((float)param_1[3] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560,&local_a8);
    local_78 = (int)ROUND(*pfVar1 * _DAT_005fff94);
    local_74 = (int)ROUND((float)param_1[2] * _DAT_005fff94);
    local_70 = (int)ROUND((float)param_1[3] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x30,&local_78);
    local_c0 = (int)ROUND(*pfVar2 * _DAT_005fff94);
    local_bc = (int)ROUND((float)param_1[8] * _DAT_005fff94);
    local_b8 = (int)ROUND((float)param_1[9] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x60,&local_c0);
    local_84 = (int)ROUND(*pfVar2 * _DAT_005fff94);
    local_80 = (int)ROUND((float)param_1[8] * _DAT_005fff94);
    local_7c = (int)ROUND((float)param_1[9] * _DAT_005fff94);
    FUN_0058043c(*DAT_00612560 + 0x90,&local_84);
    piVar3 = DAT_00612560;
    *(uint *)(*DAT_00612560 + 0x10) = 0x80000000;
    *(int *)*piVar3 = *(int *)*piVar3 - local_8;
    *(uint *)(*piVar3 + 0x40) = 0x80000000;
    *(int *)(*piVar3 + 0x30) = *(int *)(*piVar3 + 0x30) + local_8;
    *(uint *)(*piVar3 + 0x70) = 0x80000000;
    *(int *)(*piVar3 + 0x60) = *(int *)(*piVar3 + 0x60) + local_c;
    *(uint *)(*piVar3 + 0xa0) = 0x80000000;
    *(int *)(*piVar3 + 0x90) = *(int *)(*piVar3 + 0x90) - local_c;
    FUN_00483050(piVar3,local_e8);
  }
  FUN_00483dd0(DAT_00612560,0);
  return;
}
