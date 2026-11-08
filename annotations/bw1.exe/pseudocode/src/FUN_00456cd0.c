// Name: FUN_00456cd0
// Address: 00456cd0
// Address Range: [[00456cd0, 00457075]]
// Convention: unknown
// Signature: uint FUN_00456cd0(int *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00456cd0(int *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if ((float)param_1[4] <= (float)_DAT_005d7abf) {
    fVar1 = *(float *)*param_1 - *param_2;
    fVar9 = *(float *)(*param_1 + 4);
    fVar2 = *(float *)(*param_1 + 8) - param_2[2];
    local_58 = *(float *)param_1[1] - *param_2;
    local_54 = *(float *)(param_1[1] + 4);
    local_50 = *(float *)(param_1[1] + 8) - param_2[2];
    local_64 = *(float *)param_1[2] - *param_2;
    local_60 = *(float *)(param_1[2] + 4);
    local_5c = *(float *)(param_1[2] + 8) - param_2[2];
    local_40 = fVar1;
    local_3c = fVar9;
    local_38 = fVar2;
    if (fVar9 < local_54) {
      if (&local_40 != &local_58) {
        local_40 = local_58;
        local_3c = local_54;
        local_38 = local_50;
      }
      local_34 = fVar1;
      local_30 = fVar9;
      local_2c = fVar2;
      if (&local_58 != &local_34) {
        local_58 = fVar1;
        local_54 = fVar9;
        local_50 = fVar2;
      }
    }
    fVar5 = local_38;
    fVar4 = local_3c;
    fVar3 = local_40;
    fVar2 = local_50;
    fVar1 = local_54;
    fVar9 = local_58;
    if (local_54 < local_60) {
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
      if (&local_58 != &local_64) {
        local_58 = local_64;
        local_54 = local_60;
        local_50 = local_5c;
      }
      if (&local_64 != &local_4c) {
        local_64 = fVar9;
        local_60 = fVar1;
        local_5c = fVar2;
      }
    }
    if (local_60 <= param_2[1]) {
      if (local_3c < local_54) {
        local_7c = local_40;
        local_78 = local_3c;
        local_74 = local_38;
        if (&local_40 != &local_58) {
          local_40 = local_58;
          local_3c = local_54;
          local_38 = local_50;
        }
        if (&local_58 != &local_7c) {
          local_58 = fVar3;
          local_54 = fVar4;
          local_50 = fVar5;
        }
      }
      if (*param_4 <= local_3c) {
        if (local_40 * local_40 + local_38 * local_38 < param_3 * param_3) {
          *param_4 = local_3c;
          return 1;
        }
        uVar6 = FUN_00456b60(&local_40,&local_58,param_3,param_4);
        uVar7 = FUN_00456b60(&local_58,&local_64,param_3,param_4);
        uVar8 = FUN_00456b60(&local_64,&local_40,param_3,param_4);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT((float)param_1[5] * (float)param_1[5] + (float)param_1[3] * (float)param_1[3]);
        if ((DAT_0152bd38 & 1) == 0) {
          DAT_0152bd38 = DAT_0152bd38 | 1;
          _DAT_0152bd2c = 0;
          _DAT_0152bd34 = 0;
          _DAT_0152bd30 = -100.0;
        }
        if (_DAT_005d7ac7 <= (double)fVar9) {
          param_3 = param_3 / fVar9;
          local_70 = (float)param_1[3] * param_3 + *param_2;
          local_68 = param_3 * (float)param_1[5] + param_2[2];
          local_6c = param_2[1];
          fVar9 = (float)FUN_004560f0(param_1,&local_70,&DAT_0152bd2c);
          if ((0.0 <= fVar9) && (local_6c = fVar9 * _DAT_0152bd30 + local_6c, *param_4 < local_6c))
          {
            *param_4 = local_6c;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)FUN_004560f0(param_1,param_2,&DAT_0152bd2c);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *param_4 = local_3c;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
