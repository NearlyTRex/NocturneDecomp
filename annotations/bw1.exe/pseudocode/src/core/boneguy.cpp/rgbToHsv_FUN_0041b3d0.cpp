// Name: core_boneguy.cpp_rgbToHsv_FUN_0041b3d0
// Address: 0041b3d0
// Address Range: [[0041b3d0, 0041b576]]
// Convention: __stack_esi
// Signature: CColor3f * __stack_esi core_boneguy_cpp_rgbToHsv_FUN_0041b3d0(CColor3f *in_rgb,CColor3f *out_hsv)

#include "nocturne.h"

CColor3f * __stack_esi core_boneguy_cpp_rgbToHsv_FUN_0041b3d0(CColor3f *in_rgb,CColor3f *out_hsv)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_20;
  
  fVar1 = in_rgb->r;
  fVar2 = in_rgb->g;
  fVar3 = in_rgb->b;
  fStack_20 = fVar1;
  if (fVar2 < fVar1) {
    fStack_20 = fVar2;
  }
  if (fVar3 < fStack_20) {
    fStack_20 = fVar3;
  }
  fStack_40 = fVar1;
  if (fVar1 < fVar2) {
    fStack_40 = fVar2;
  }
  if (fStack_40 < fVar3) {
    fStack_40 = fVar3;
  }
  fStack_20 = fStack_40 - fStack_20;
  if (fStack_40 <= 0.0) {
    fStack_48 = 0.0;
  }
  else {
    fStack_48 = fStack_20 / fStack_40;
  }
  if (fStack_48 <= 0.0) {
    fStack_44 = 0.0;
  }
  else {
    fStack_48 = fStack_48 * (float)255;
    if (fVar1 == fStack_40) {
      fStack_20 = (fVar2 - fVar3) / fStack_20;
    }
    else if (fVar2 == fStack_40) {
      fStack_20 = (float)2 - (fVar3 - fVar1) / fStack_20;
    }
    else {
      fStack_20 = (fVar1 - fVar2) / fStack_20 + (float)4;
    }
    fStack_44 = fStack_20 * (float)42.5;
    if (fStack_44 < 0.0) {
      fStack_44 = fStack_44 + 255.0f;
    }
  }
  out_hsv->r = fStack_44;
  out_hsv->g = fStack_48;
  out_hsv->b = fStack_40;
  return out_hsv;
}
