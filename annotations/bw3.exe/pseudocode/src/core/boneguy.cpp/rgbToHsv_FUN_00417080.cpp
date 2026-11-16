// Name: core_boneguy.cpp_rgbToHsv_FUN_00417080
// Address: 00417080
// Address Range: [[00417080, 00417226]]
// Convention: __stack_esi
// Signature: CColor3f * __stack_esi core_boneguy_cpp_rgbToHsv_FUN_00417080(CColor3f *in_rgb,CColor3f *out_hsv)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CColor3f * __stack_esi core_boneguy_cpp_rgbToHsv_FUN_00417080(CColor3f *in_rgb,CColor3f *out_hsv)

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
    fStack_48 = fStack_48 * (float)_DAT_005b6d42;
    if (fVar1 == fStack_40) {
      fStack_20 = (fVar2 - fVar3) / fStack_20;
    }
    else if (fVar2 == fStack_40) {
      fStack_20 = (float)_DAT_005b6d52 - (fVar3 - fVar1) / fStack_20;
    }
    else {
      fStack_20 = (fVar1 - fVar2) / fStack_20 + (float)_DAT_005b6d4a;
    }
    fStack_44 = fStack_20 * (float)_DAT_005b6d5a;
    if (fStack_44 < 0.0) {
      fStack_44 = fStack_44 + _DAT_005b6d62;
    }
  }
  out_hsv->r = fStack_44;
  out_hsv->g = fStack_48;
  out_hsv->b = fStack_40;
  return out_hsv;
}
