// Name: FUN_0050fdd0
// Address: 0050fdd0
// Address Range: [[0050fdd0, 0050ffdd]]
// Convention: unknown
// Signature: float FUN_0050fdd0(undefined4 param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0050fdd0(uint param_1,float *param_2,float *param_3)

{
  int iVar1;
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
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  local_58 = *param_3;
  local_54 = param_3[1];
  iVar1 = 0;
  local_50 = param_3[2];
  local_4c = 0.0;
  local_48 = -32.0;
  local_44 = 0.0;
  local_14 = 0.0;
  do {
    local_64 = local_4c * _DAT_00590a1d;
    local_60 = local_48 * _DAT_00590a1d;
    local_5c = local_44 * _DAT_00590a1d;
    local_34 = local_58 * _DAT_00590a21;
    local_30 = local_54 * _DAT_00590a21;
    local_2c = local_50 * _DAT_00590a21;
    local_10 = 0.1;
    local_28 = local_70 + local_34 + local_64;
    local_24 = local_6c + local_30 + local_60;
    local_20 = local_68 + local_2c + local_5c;
    local_18 = (float)FUN_0050fb00(param_1,&local_70,&local_28);
    if ((0.0 <= local_18) && (local_18 <= 1.0)) {
      return local_18 * _DAT_00590a21 + local_14;
    }
    if (&local_70 != &local_28) {
      local_70 = local_28;
      local_6c = local_24;
      local_68 = local_20;
    }
    local_40 = local_4c * local_10;
    local_3c = local_48 * local_10;
    local_38 = local_44 * local_10;
    iVar1 = iVar1 + 1;
    local_14 = local_14 + local_10;
    local_58 = local_58 + local_40;
    local_54 = local_54 + local_3c;
    local_50 = local_50 + local_38;
  } while (iVar1 < 100);
  return -1.0;
}
