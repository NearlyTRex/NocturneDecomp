// Name: FUN_00488bf0
// Address: 00488bf0
// Address Range: [[00488bf0, 004892a8]]
// Convention: unknown
// Signature: void FUN_00488bf0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00488bf0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *extraout_EDX;
  int *extraout_EDX_00;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  byte local_dc [4];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
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
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1[5] <= 0.0) {
    return;
  }
  iVar5 = FUN_0056488c();
  FUN_00461eb0(DAT_005ae704,&DAT_005b8b14 + (iVar5 % 6) * 0x18);
  local_d8 = 4;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_c4 = 0;
  local_b8 = 3;
  local_c0 = 1;
  local_bc = 2;
  uVar6 = FUN_0056488c();
  if ((uVar6 & 1) == 0) {
    _DAT_005c505c = 0x80000;
    _DAT_005c508c = 0x80000;
    _DAT_005c50bc = 0xf80000;
    DAT_005c502c = 0xf80000;
  }
  else {
    _DAT_005c505c = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c50bc = 0x80000;
    DAT_005c502c = 0x80000;
  }
  _DAT_005c50c0 = 0xf80000;
  _DAT_005c5090 = 0xf80000;
  _DAT_005c5060 = 0x80000;
  _DAT_005c5030 = 0x80000;
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  FUN_00461010(DAT_005ae704,0xffff);
  FUN_00461000(DAT_005ae704,1);
  fVar3 = *param_1;
  pfVar1 = param_1 + 1;
  if (fVar3 == 0.0) {
    FUN_00460a00(DAT_005ae704,pfVar1);
    FUN_00460db0(DAT_005ae704,local_24);
    local_24[0] = fVar3;
    FUN_00460aa0(DAT_005ae704,local_24,0);
    if (0.0 < param_1[6]) {
      local_b4 = param_1[6];
    }
    else {
      local_b4 = param_1[4] * (float)_DAT_0058142c;
    }
    local_b0 = param_1[4];
    local_60 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_5c = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_58 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_ac = fVar3;
    FUN_0053075c(*DAT_005ae704,&local_60);
    local_b4 = -local_b4;
    local_48 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_44 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_40 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x30,&local_48);
    local_b0 = 0.0;
    local_30 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_2c = (int)ROUND(_DAT_0059d1f8 * 0.0);
    local_28 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x60,&local_30);
    local_b4 = -local_b4;
    local_18 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_14 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_10 = (int)ROUND(local_ac * _DAT_0059d1f8);
    FUN_0053075c(*DAT_005ae704 + 0x90,&local_18);
    FUN_004602a0(DAT_005ae704,local_dc);
    thunk_FUN_004cdbc0(DAT_005ae704);
  }
  else {
    local_9c = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_98 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    local_94 = (int)ROUND(param_1[3] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704,&local_9c);
    local_6c = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_68 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    local_64 = (int)ROUND(param_1[3] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x30,&local_6c);
    pfVar2 = param_1 + 7;
    local_3c = (int)ROUND(*pfVar2 * _DAT_0059d1f8);
    local_38 = (int)ROUND(param_1[8] * _DAT_0059d1f8);
    local_34 = (int)ROUND(param_1[9] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x60,&local_3c);
    local_90 = (int)ROUND(*pfVar2 * _DAT_0059d1f8);
    local_8c = (int)ROUND(param_1[8] * _DAT_0059d1f8);
    local_88 = (int)ROUND(param_1[9] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x90,&local_90);
    fVar7 = (float10)_DAT_00581424;
    fVar8 = (float10)param_1[6] * fVar7;
    fVar9 = (float10)param_1[10];
    *(uint *)(*DAT_005ae704 + 0x10) = 0x80000000;
    FUN_00563a30();
    local_c = (int)ROUND(fVar8);
    *(int *)(*extraout_EDX + 4) = *(int *)(*extraout_EDX + 4) - local_c;
    *(uint *)(*extraout_EDX + 0x40) = 0x80000000;
    *(int *)(*extraout_EDX + 0x34) = *(int *)(*extraout_EDX + 0x34) + local_c;
    fVar9 = fVar9 * fVar7;
    *(uint *)(*extraout_EDX + 0x70) = 0x80000000;
    FUN_00563a30();
    local_8 = (int)ROUND(fVar9);
    *(int *)(*extraout_EDX_00 + 100) = *(int *)(*extraout_EDX_00 + 100) + local_8;
    *(uint *)(*extraout_EDX_00 + 0xa0) = 0x80000000;
    *(int *)(*extraout_EDX_00 + 0x94) = *(int *)(*extraout_EDX_00 + 0x94) - local_8;
    FUN_004602a0(extraout_EDX_00,local_dc);
    local_54 = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_50 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    local_4c = (int)ROUND(param_1[3] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704,&local_54);
    local_78 = (int)ROUND(*pfVar1 * _DAT_0059d1f8);
    local_74 = (int)ROUND(param_1[2] * _DAT_0059d1f8);
    local_70 = (int)ROUND(param_1[3] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x30,&local_78);
    local_a8 = (int)ROUND(*pfVar2 * _DAT_0059d1f8);
    local_a4 = (int)ROUND(param_1[8] * _DAT_0059d1f8);
    local_a0 = (int)ROUND(param_1[9] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x60,&local_a8);
    local_84 = (int)ROUND(*pfVar2 * _DAT_0059d1f8);
    local_80 = (int)ROUND(param_1[8] * _DAT_0059d1f8);
    local_7c = (int)ROUND(param_1[9] * _DAT_0059d1f8);
    FUN_00530a25(*DAT_005ae704 + 0x90,&local_84);
    piVar4 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x10) = 0x80000000;
    *(int *)*piVar4 = *(int *)*piVar4 - local_c;
    *(uint *)(*piVar4 + 0x40) = 0x80000000;
    *(int *)(*piVar4 + 0x30) = *(int *)(*piVar4 + 0x30) + local_c;
    *(uint *)(*piVar4 + 0x70) = 0x80000000;
    *(int *)(*piVar4 + 0x60) = *(int *)(*piVar4 + 0x60) + local_8;
    *(uint *)(*piVar4 + 0xa0) = 0x80000000;
    *(int *)(*piVar4 + 0x90) = *(int *)(*piVar4 + 0x90) - local_8;
    FUN_004602a0(piVar4,local_dc);
  }
  FUN_00461000(DAT_005ae704,0);
  return;
}
