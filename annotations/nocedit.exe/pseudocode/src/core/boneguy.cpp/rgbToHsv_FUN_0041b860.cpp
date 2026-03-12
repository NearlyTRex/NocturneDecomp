// Name: core_boneguy.cpp_rgbToHsv_FUN_0041b860
// Address: 0041b860
// Address Range: [[0041b860, 0041b8bd] [0041b9a3, 0041b9ab]]
// Convention: __cdecl
// Signature: CColor3f * __cdecl core_boneguy_cpp_rgbToHsv_FUN_0041b860(CColor3f *out_hsv,CColor3f *in_rgb)

#include "nocturne.h"

CColor3f * __cdecl core_boneguy_cpp_rgbToHsv_FUN_0041b860(CColor3f *out_hsv,CColor3f *in_rgb)

{
  float fVar4;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_20;
  float fVar1;
  float fVar3;
  float fVar2;
  
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
  fVar4 = local_30 - local_20;
  if (local_30 <= 0.0) {
    fStack_38 = 0.0;
  }
  else {
    fStack_38 = fVar4 / local_30;
  }
  if (fStack_38 <= 0.0) {
    fStack_34 = 0.0;
  }
  else {
    fStack_38 = fStack_38 * (float)255;
    if (fVar1 == local_30) {
      fVar4 = (fVar2 - fVar3) / fVar4;
    }
    else if (fVar2 == local_30) {
      fVar4 = (float)2 - (fVar3 - fVar1) / fVar4;
    }
    else {
      fVar4 = (fVar1 - fVar2) / fVar4 + (float)4;
    }
    fStack_34 = fVar4 * (float)42.5;
    if (fStack_34 < 0.0) {
      fStack_34 = fStack_34 + 255.0f;
    }
  }
  out_hsv->r = fStack_34;
  out_hsv->g = fStack_38;
  out_hsv->b = local_30;
  return out_hsv;
}
