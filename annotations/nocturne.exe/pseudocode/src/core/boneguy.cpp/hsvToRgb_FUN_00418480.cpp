// Name: core_boneguy.cpp_hsvToRgb_FUN_00418480
// Address: 00418480
// Address Range: [[00418480, 00418627]]
// Convention: __cdecl
// Signature: CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_00418480(CColor3f *out_rgb,CColor3f *in_hsv)

#include "nocturne.h"

CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_00418480(CColor3f *out_rgb,CColor3f *in_hsv)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float local_34;
  float local_20;
  float local_1c;
  float local_14;
  
  fVar1 = in_hsv->g;
  fVar5 = in_hsv->b;
  if (0.0 < fVar1) {
    fVar4 = in_hsv->r * (float)0.023529411764705899;
    dVar6 = floor((double)fVar4);
    dVar6 = round(dVar6);
    fVar2 = (1.0 - local_34) * fVar4;
    fVar1 = fVar1 - (float)(int)ROUND(dVar6);
    fVar3 = (1.0 - local_34 * fVar1) * fVar4;
    fVar1 = (1.0 - (1.0 - fVar1) * local_34) * fVar4;
    fVar5 = local_20;
    switch(((int)ROUND(dVar6) + 600) % 6) {
    case 0:
      fVar5 = fVar2;
      local_1c = fVar4;
      local_14 = fVar1;
      break;
    case 1:
      fVar5 = fVar2;
      local_1c = fVar3;
      local_14 = fVar4;
      break;
    case 2:
      fVar5 = fVar1;
      local_1c = fVar2;
      local_14 = fVar4;
      break;
    case 3:
      fVar5 = fVar4;
      local_1c = fVar2;
      local_14 = fVar3;
      break;
    case 4:
      fVar5 = fVar4;
      local_1c = fVar1;
      local_14 = fVar2;
      break;
    case 5:
      fVar5 = fVar3;
      local_1c = fVar4;
      local_14 = fVar2;
    }
  }
  local_20 = fVar5;
  out_rgb->r = local_1c;
  out_rgb->g = local_14;
  out_rgb->b = local_20;
  return out_rgb;
}
