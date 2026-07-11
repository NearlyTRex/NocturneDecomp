// Name: FUN_0041e5e0
// Address: 0041e5e0
// Address Range: [[0041e5e0, 0041e9fd]]
// Convention: unknown
// Signature: void FUN_0041e5e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e5e0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float10 fVar4;
  float fVar5;
  byte auStack_dc [4];
  float fStack_d8;
  int iStack_a8;
  int iStack_a4;
  byte local_a0 [24];
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  byte auStack_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  double local_28;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar1 = FUN_00454530(param_1 + 0x150);
  iVar1 = *(int *)(iVar1 + 0x100);
  fVar5 = *(float *)(param_1 + 0x304) + *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x308) = fVar5;
  local_28 = (double)FUN_005648c0((double)fVar5);
  fVar4 = (float10)local_28;
  FUN_00563a30();
  local_1c = (int)ROUND(fVar4);
  local_20 = *(float *)(param_1 + 0x308) - (float)local_1c;
  if (local_1c < 0) {
    local_1c = iVar1 - -local_1c % iVar1;
  }
  else {
    local_1c = local_1c % iVar1;
  }
  local_18 = local_1c;
  *(float *)(param_1 + 0x308) = (float)local_1c + local_20;
  if ((float)iVar1 <= *(float *)(param_1 + 0x308)) {
    *(uint *)(param_1 + 0x308) = 0;
  }
  local_34 = *(float *)(param_1 + 0x2f8) * param_2;
  local_30 = *(float *)(param_1 + 0x2fc) * param_2;
  local_88 = local_34 * _DAT_0057980d;
  local_2c = *(float *)(param_1 + 0x300) * param_2;
  local_84 = local_30 * _DAT_0057980d;
  local_80 = local_2c * _DAT_0057980d;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + local_88;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_84;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + local_80;
  local_14 = (float)iVar1;
  local_14 = (float)FUN_0040df00(*(uint *)(param_1 + 0x30));
  *(float *)(param_1 + 0x30) = local_14;
  local_14 = (float)FUN_0040df00(*(uint *)(param_1 + 0x38));
  *(float *)(param_1 + 0x38) = local_14;
  local_14 = (float)FUN_0040df00(*(uint *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) = local_14;
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    iVar1 = FUN_0052eba0(0x02DC9450,*(uint *)(param_1 + 0x2f4));
    if (iVar1 == 0) {
      FUN_00526340();
      local_14 = (float)FUN_0040dda0(0,0x3f800000,2);
      FUN_005262d0((double)local_14);
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x2cc);
      *(uint *)(param_1 + 0x2f4) = uVar2;
      FUN_005263c0();
    }
  }
  if ((*(int *)(param_1 + 0x310) == 0) && (0.0 < *(float *)(param_1 + 0x388))) {
    local_70 = *(uint *)(param_1 + 0x20);
    local_6c = *(uint *)(param_1 + 0x24);
    local_68 = *(uint *)(param_1 + 0x28);
    FUN_0041acb0(param_1 + 0x38c,param_2);
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x398)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x398);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x39c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x3a0);
    }
    FUN_0040a000(param_1);
    pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_a0);
    fStack_4c = *pfVar3 + pfVar3[3];
    fStack_48 = pfVar3[1] + pfVar3[4];
    fStack_64 = fStack_4c * _DAT_00579811;
    fStack_44 = pfVar3[2] + pfVar3[5];
    fStack_60 = fStack_48 * _DAT_00579811;
    fStack_5c = fStack_44 * _DAT_00579811;
    fStack_7c = -fStack_64;
    fStack_78 = -fStack_60;
    fStack_74 = -fStack_5c;
    pfVar3 = (float *)FUN_0040a200(param_1,auStack_40,&fStack_7c);
    fStack_58 = *(float *)(param_1 + 0x38c) + *pfVar3;
    fStack_54 = *(float *)(param_1 + 0x390) + pfVar3[1];
    fStack_50 = *(float *)(param_1 + 0x394) + pfVar3[2];
    *(float *)(param_1 + 0x20) = fStack_58;
    *(float *)(param_1 + 0x24) = fStack_54;
    *(float *)(param_1 + 0x28) = fStack_50;
    fVar5 = SQRT(*(float *)(param_1 + 0x3d4) * *(float *)(param_1 + 0x3d4) +
                 *(float *)(param_1 + 0x3cc) * *(float *)(param_1 + 0x3cc) +
                 *(float *)(param_1 + 0x3d0) * *(float *)(param_1 + 0x3d0));
    if ((float)_DAT_00579815 < fVar5) {
      FUN_00423ed0(auStack_dc,fVar5);
      fStack_d8 = fVar5 * *(float *)(param_1 + 0x388) * _DAT_0057981d;
      iStack_a8 = param_1;
      iStack_a4 = param_1;
      FUN_00511880(0x01E57284,&local_70,(float *)(param_1 + 0x20),auStack_dc);
      return;
    }
  }
  return;
}
