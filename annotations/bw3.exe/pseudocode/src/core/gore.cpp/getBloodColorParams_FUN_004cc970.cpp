// Name: core_gore.cpp_getBloodColorParams_FUN_004cc970
// Address: 004cc970
// Address Range: [[004cc970, 004ccab1]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_getBloodColorParams_FUN_004cc970(EBloodType blood_type,int *out_light,int *out_color,int *out_fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_getBloodColorParams_FUN_004cc970(EBloodType blood_type,int *out_light,int *out_color,int *out_fog)

{
  float fVar1;
  byte bVar2;
  double dVar3;
  float afStackY_1018 [1011];
  CColor3f local_3c;
  CColor3f local_30;
  float local_24;
  float local_20 [4];
  uint local_10;
  float local_c;
  
  bVar2 = 0;
  switch(blood_type) {
  default:
    *out_light = 0x2000;
    *out_color = 0;
    *out_fog = 0;
    return;
  case BLOOD_TYPE_ICHOR:
    *out_light = 0;
    *out_color = 0x7f80;
    *out_fog = 0;
    return;
  case BLOOD_TYPE_NONE:
    *out_light = 0;
    *out_color = 0;
    *out_fog = 0;
    return;
  case BLOOD_TYPE_NONE|BLOOD_TYPE_ICHOR:
    break;
  }
  local_3c.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,255.0);
  local_c = local_3c.r;
  local_3c.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,40.0);
  local_c = local_3c.g;
  local_3c.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(106.0,256.0);
  local_c = local_3c.b;
  core_boneguy_cpp_hsvToRgb_FUN_00417240(&local_3c,&local_30);
  fVar1 = _DAT_005c4621;
  local_24 = local_30.r;
  local_20[(uint)bVar2 * -2] = *(float *)((int)&local_30 + (uint)bVar2 * -8 + 4);
  local_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (local_20 + 2 != &local_24) {
    local_20[2] = local_24;
    local_20[3] = local_20[0];
    local_10 = local_20[1];
  }
  dVar3 = round((double)(local_20[2] * _DAT_005c4621));
  *out_light = (int)ROUND(dVar3);
  dVar3 = round((double)(local_20[2] * fVar1));
  *out_color = (int)ROUND(dVar3);
  dVar3 = round((double)(fVar1 * local_20[2]));
  *out_fog = (int)ROUND(dVar3);
  return;
}
