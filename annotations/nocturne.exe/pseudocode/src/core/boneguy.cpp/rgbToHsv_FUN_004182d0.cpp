// Name: core_boneguy.cpp_rgbToHsv_FUN_004182d0
// Address: 004182d0
// Address Range: [[004182d0, 00418460]]
// Convention: __cdecl
// Signature: CColor3f * __cdecl core_boneguy_cpp_rgbToHsv_FUN_004182d0(CColor3f *out_hsv,CColor3f *in_rgb)

#include "nocturne.h"

CColor3f * __cdecl core_boneguy_cpp_rgbToHsv_FUN_004182d0(CColor3f *out_hsv,CColor3f *in_rgb)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  
  fVar1 = in_rgb->r;
  fVar2 = in_rgb->g;
  fVar3 = in_rgb->b;
  local_20 = fVar1;
  if (fVar2 < fVar1) {
    local_20 = fVar2;
  }
  if (fVar3 < local_20) {
    local_20 = fVar3;
  }
  local_30 = fVar1;
  if (fVar1 < fVar2) {
    local_30 = fVar2;
  }
  if (local_30 < fVar3) {
    local_30 = fVar3;
  }
  local_20 = local_30 - local_20;
  if (local_30 <= 0.0) {
    local_38 = 0.0;
  }
  else {
    local_38 = local_20 / local_30;
  }
  if (local_38 <= 0.0) {
    local_34 = 0.0;
  }
  else {
    local_38 = local_38 * (float)255;
    if (fVar1 == local_30) {
      local_20 = (fVar2 - fVar3) / local_20;
    }
    else if (fVar2 == local_30) {
      local_20 = (float)2 - (fVar3 - fVar1) / local_20;
    }
    else {
      local_20 = (fVar1 - fVar2) / local_20 + (float)4;
    }
    local_34 = local_20 * (float)42.5;
    if (local_34 < 0.0) {
      local_34 = local_34 + 255.0f;
    }
  }
  out_hsv->r = local_34;
  out_hsv->g = local_38;
  out_hsv->b = local_30;
  return out_hsv;
}
