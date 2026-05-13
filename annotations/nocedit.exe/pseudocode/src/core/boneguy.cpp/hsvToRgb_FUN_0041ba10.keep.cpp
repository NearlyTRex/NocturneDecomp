// Name: core_boneguy.cpp_hsvToRgb_FUN_0041ba10
// Address: 0041ba10
// MANUAL RECONSTRUCTION
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: __cdecl
// Signature: CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CColor3f *out_rgb,CColor3f *in_hsv)

#include "nocturne.h"

CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CColor3f *out_rgb,CColor3f *in_hsv)

{
  float fVar8;
  float fVar9;
  double dVar8;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_hsv->b;
  fVar9 = fVar1;
  fVar6 = fVar1;
  fVar7 = fVar1;
  if (0.0 < in_hsv->g) {
    fVar8 = in_hsv->g * (float)0.0039215686274509803;
    fVar9 = in_hsv->r * (float)0.023529411764705899;
    dVar8 = floor((double)fVar9);
    fVar2 = (1.0 - fVar8) * fVar1;
    fVar5 = fVar9 - (float)(int)ROUND(ROUND(dVar8));
    fVar3 = (1.0 - fVar8 * fVar5) * fVar1;
    fVar4 = (1.0 - (1.0 - fVar5) * fVar8) * fVar1;
    switch(((int)ROUND(ROUND(dVar8)) + 600) % 6) {
    case 0:
      fVar9 = fVar2;
      fVar6 = fVar1;
      fVar7 = fVar4;
      break;
    case 1:
      fVar9 = fVar2;
      fVar6 = fVar3;
      fVar7 = fVar1;
      break;
    case 2:
      fVar9 = fVar4;
      fVar6 = fVar2;
      fVar7 = fVar1;
      break;
    case 3:
      fVar9 = fVar1;
      fVar6 = fVar2;
      fVar7 = fVar3;
      break;
    case 4:
      fVar9 = fVar1;
      fVar6 = fVar4;
      fVar7 = fVar2;
      break;
    case 5:
      fVar9 = fVar3;
      fVar6 = fVar1;
      fVar7 = fVar2;
    }
  }
  out_rgb->r = fVar6;
  out_rgb->g = fVar7;
  out_rgb->b = fVar9;
  return out_rgb;
}
