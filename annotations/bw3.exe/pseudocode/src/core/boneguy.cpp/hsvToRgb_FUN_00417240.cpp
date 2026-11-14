// Name: core_boneguy.cpp_hsvToRgb_FUN_00417240
// Address: 00417240
// Address Range: [[00417240, 004173f8]]
// Convention: unknown
// Signature: void core_boneguy_cpp_hsvToRgb_FUN_00417240(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_hsvToRgb_FUN_00417240(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  float afStackY_1034 [1011];
  float local_48;
  float local_44;
  double local_40;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  fVar1 = *param_1;
  fVar2 = param_1[2];
  if (0.0 < param_1[1]) {
    local_30 = param_1[1] * (float)_DAT_005b6d6a;
    fVar3 = (float)_DAT_005b6d72;
    local_40 = floor((double)(fVar1 * fVar3));
    fVar5 = (float10)local_40;
    round();
    local_34 = (int)ROUND(fVar5);
    local_18 = local_34;
    local_28 = (1.0 - local_30) * fVar2;
    fVar1 = fVar1 * fVar3 - (float)local_34;
    local_2c = (1.0 - local_30 * fVar1) * fVar2;
    local_20 = (1.0 - (1.0 - fVar1) * local_30) * fVar2;
    switch((local_34 + 600) % 6) {
    case 0:
      local_1c = fVar2;
      local_14 = local_20;
      break;
    case 1:
      local_1c = local_2c;
      local_14 = fVar2;
      break;
    case 2:
      local_1c = local_28;
      local_14 = fVar2;
      local_28 = local_20;
      break;
    case 3:
      local_1c = local_28;
      local_14 = local_2c;
      local_28 = fVar2;
      break;
    case 4:
      local_1c = local_20;
      local_14 = local_28;
      local_28 = fVar2;
      break;
    case 5:
      local_1c = fVar2;
      local_14 = local_28;
      local_28 = local_2c;
      break;
    default:
      goto switchD_004173f2_default;
    }
  }
  else {
    local_14 = fVar2;
    local_1c = fVar2;
    local_28 = fVar2;
  }
  local_24 = local_28;
switchD_004173f2_default:
  local_48 = local_14;
  local_44 = local_24;
  *unaff_ESI = local_1c;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
