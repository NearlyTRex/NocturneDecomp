// Name: core_boneguy.cpp_hsvToRgb_FUN_0041ba10
// Address: 0041ba10
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: __cdecl
// Signature: CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CColor3f *out_rgb,CColor3f *in_hsv)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

CColor3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CColor3f *out_rgb,CColor3f *in_hsv)

{
  float fVar8;
  float fVar9;
  double dVar8;
  float local_1c;
  float local_18;
  float local_10;
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
    fVar9 = local_1c;
    fVar6 = local_18;
    fVar7 = local_10;
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
  local_10 = fVar7;
  local_18 = fVar6;
  local_1c = fVar9;
  out_rgb->r = local_18;
  out_rgb->g = local_10;
  out_rgb->b = local_1c;
  return out_rgb;
}
