// Name: FUN_00478550
// Address: 00478550
// Address Range: [[00478550, 004788d9]]
// Convention: unknown
// Signature: uint FUN_00478550(float *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00478550(float *param_1,float *param_2,float param_3,float *param_4)

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
  
  if (param_1[10] <= (float)_DAT_005d1df3) {
    fVar1 = *param_1 - *param_2;
    fVar9 = param_1[1];
    fVar2 = param_1[2] - param_2[2];
    local_4c = param_1[3] - *param_2;
    local_48 = param_1[4];
    local_44 = param_1[5] - param_2[2];
    local_7c = param_1[6] - *param_2;
    local_78 = param_1[7];
    local_74 = param_1[8] - param_2[2];
    local_40 = fVar1;
    local_3c = fVar9;
    local_38 = fVar2;
    if (fVar9 < local_48) {
      if (&local_40 != &local_4c) {
        local_40 = local_4c;
        local_3c = local_48;
        local_38 = local_44;
      }
      local_70 = fVar1;
      local_6c = fVar9;
      local_68 = fVar2;
      if (&local_4c != &local_70) {
        local_4c = fVar1;
        local_48 = fVar9;
        local_44 = fVar2;
      }
    }
    fVar5 = local_38;
    fVar4 = local_3c;
    fVar3 = local_40;
    fVar2 = local_44;
    fVar1 = local_48;
    fVar9 = local_4c;
    if (local_48 < local_78) {
      local_64 = local_4c;
      local_60 = local_48;
      local_5c = local_44;
      if (&local_4c != &local_7c) {
        local_4c = local_7c;
        local_48 = local_78;
        local_44 = local_74;
      }
      if (&local_7c != &local_64) {
        local_7c = fVar9;
        local_78 = fVar1;
        local_74 = fVar2;
      }
    }
    if (local_78 <= param_2[1]) {
      if (local_3c < local_48) {
        local_58 = local_40;
        local_54 = local_3c;
        local_50 = local_38;
        if (&local_40 != &local_4c) {
          local_40 = local_4c;
          local_3c = local_48;
          local_38 = local_44;
        }
        if (&local_4c != &local_58) {
          local_4c = fVar3;
          local_48 = fVar4;
          local_44 = fVar5;
        }
      }
      if (*param_4 <= local_3c) {
        if (local_40 * local_40 + local_38 * local_38 < param_3 * param_3) {
          *param_4 = local_3c;
          return 1;
        }
        uVar6 = FUN_004783e0(&local_40,&local_4c,param_3,param_4);
        uVar7 = FUN_004783e0(&local_4c,&local_7c,param_3,param_4);
        uVar8 = FUN_004783e0(&local_7c,&local_40,param_3,param_4);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(param_1[0xb] * param_1[0xb] + param_1[9] * param_1[9]);
        if ((DAT_01c21e80 & 1) == 0) {
          DAT_01c21e80 = DAT_01c21e80 | 1;
          _DAT_01c21e74 = 0;
          _DAT_01c21e7c = 0;
          _DAT_01c21e78 = -100.0;
        }
        if (_DAT_005d1dfb <= (double)fVar9) {
          param_3 = param_3 / fVar9;
          local_34 = param_1[9] * param_3 + *param_2;
          local_2c = param_3 * param_1[0xb] + param_2[2];
          local_30 = param_2[1];
          fVar9 = (float)FUN_00477a50(param_1,&local_34,&DAT_01c21e74);
          if ((0.0 <= fVar9) && (local_30 = fVar9 * _DAT_01c21e78 + local_30, *param_4 < local_30))
          {
            *param_4 = local_30;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)FUN_00477a50(param_1,param_2,&DAT_01c21e74);
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
