// Name: core_boneguy.cpp_hsvToRgb_FUN_00417240
// Address: 00417240
// Address Range: [[00417240, 004173f8]]
// Convention: __stack_esi
// Signature: CColor3f * __stack_esi core_boneguy_cpp_hsvToRgb_FUN_00417240(CColor3f *in_hsv,CColor3f *out_rgb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CColor3f * __stack_esi core_boneguy_cpp_hsvToRgb_FUN_00417240(CColor3f *in_hsv,CColor3f *out_rgb)

{
  double dVar1;
  float fVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1038 [1012];
  float fStack_5c;
  float local_4c;
  float local_48;
  double local_40;
  int iStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  local_14 = in_hsv->b;
  dVar1 = (double)in_hsv->g;
  if (0.0 < dVar1) {
    local_30 = in_hsv->g * (float)_DAT_005b6d6a;
    fVar2 = in_hsv->r * (float)_DAT_005b6d72;
    local_40 = floor((double)fVar2);
    dVar5 = round(local_40);
    iStack_38 = (int)ROUND(dVar5);
    local_1c = (float)iStack_38;
    local_2c = (1.0 - local_34) * fVar2;
    fStack_5c = (float)((ulonglong)dVar1 >> 0x20);
    local_30 = (1.0 - local_34 * (fStack_5c - (float)iStack_38)) * fVar2;
    local_24 = (1.0 - (1.0 - (fStack_5c - (float)iStack_38)) * local_34) * fVar2;
    switch((iStack_38 + 600) % 6) {
    case 0:
      local_20 = fVar2;
      local_18 = local_24;
      break;
    case 1:
      local_20 = local_30;
      local_18 = fVar2;
      break;
    case 2:
      local_20 = local_2c;
      local_18 = fVar2;
      local_2c = local_24;
      break;
    case 3:
      local_20 = local_2c;
      local_18 = local_30;
      local_2c = fVar2;
      break;
    case 4:
      local_20 = local_24;
      local_18 = local_2c;
      local_2c = fVar2;
      break;
    case 5:
      local_20 = fVar2;
      local_18 = local_2c;
      local_2c = local_30;
      break;
    default:
      goto switchD_004173f2_default;
    }
  }
  else {
    local_1c = local_14;
    local_2c = local_14;
  }
  local_28 = local_2c;
switchD_004173f2_default:
  local_4c = local_18;
  local_48 = local_28;
  puVar3 = (uint *)((int)out_rgb + (uint)bVar4 * -8 + 4);
  out_rgb->r = local_20;
  *puVar3 = *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return out_rgb;
}
