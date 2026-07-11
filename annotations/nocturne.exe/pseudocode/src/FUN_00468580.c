// Name: FUN_00468580
// Address: 00468580
// Address Range: [[00468580, 004687d3]]
// Convention: unknown
// Signature: float FUN_00468580(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00468580(int param_1,float *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  local_5c = *param_2;
  local_18 = param_2 + 1;
  local_54 = param_2[2];
  local_50 = *param_2;
  local_58 = *local_18 + _DAT_0057e1e2;
  local_48 = param_2[2];
  local_4c = *local_18 + _DAT_0057e1e6;
  fVar2 = ((float10)local_5c - (float10)*(float *)(param_1 + 0x10)) /
          (float10)*(float *)(param_1 + 0x28);
  fVar3 = (float10)1 / (float10)*(float *)(param_1 + 0x2c);
  fVar4 = ((float10)local_54 - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  fVar5 = ((float10)local_58 - (float10)*(float *)(param_1 + 0x14)) * fVar3;
  fVar3 = ((float10)local_4c - (float10)*(float *)(param_1 + 0x14)) * fVar3;
  fVar6 = (float10)local_50 - (float10)local_5c;
  fVar7 = (float10)local_48;
  FUN_00563a30();
  local_20 = (int)ROUND(fVar2);
  fVar7 = fVar7 - (float10)local_54;
  fVar2 = (float10)local_4c - (float10)local_58;
  FUN_00563a30();
  local_24 = (int)ROUND(fVar4);
  local_38 = (float)fVar6;
  local_34 = (float)fVar2;
  FUN_00563a30();
  FUN_00563a30();
  local_2c = (int)ROUND(fVar5);
  local_1c = (int)ROUND(fVar3);
  local_30 = (float)fVar7;
  if (local_1c <= local_2c) {
    do {
      iVar1 = FUN_004678d0(param_1,local_20,local_2c,local_24);
      if (iVar1 != 0) {
        local_18 = (float *)FUN_0044b290(iVar1,&local_5c,&local_38,&local_44,param_3);
        if ((float)local_18 <= 1.0) {
          if ((param_4 != (uint *)0x0) && (param_4 != &local_44)) {
            *param_4 = local_44;
            param_4[1] = local_40;
            param_4[2] = local_3c;
          }
          return (float)local_18 * local_34 + local_58;
        }
      }
      local_2c = local_2c + -1;
    } while (local_1c <= local_2c);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 1;
  }
  if (param_4 != (uint *)0x0) {
    param_4[1] = 0x3f800000;
    param_4[2] = 0;
    *param_4 = 0;
  }
  _DAT_014b8a04 = _DAT_02dd1188;
  _DAT_014b8a08 = _DAT_02dd118c;
  _DAT_014b8a00 = _DAT_02dd1184;
  _DAT_014b89f8 = _DAT_02dd1188;
  _DAT_014b89fc = _DAT_02dd118c;
  _DAT_014b89f4 = _DAT_02dd1184;
  _DAT_014b89ec = _DAT_02dd1188;
  _DAT_014b89f0 = _DAT_02dd118c;
  _DAT_014b89e8 = _DAT_02dd1184;
  return local_4c;
}
