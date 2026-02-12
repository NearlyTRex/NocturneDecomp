// Name: core_boneguy.cpp_hsvToRgb_FUN_0041ba10
// Address: 0041ba10
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CVector3f *out_rgb,CVector3f *in_hsv)

#include "nocturne.h"

CVector3f * __cdecl core_boneguy_cpp_hsvToRgb_FUN_0041ba10(CVector3f *out_rgb,CVector3f *in_hsv)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *extraout_EBX;
  double dVar7;
  float fStack_4c;
  float local_38;
  float local_24;
  float fStack_20;
  float local_18;
  
  fVar1 = in_hsv->y;
  fVar5 = in_hsv->z;
  fVar6 = in_hsv->z;
  if (0.0 < (double)fVar1) {
    dVar7 = floor((double)(in_hsv->x * (float)0.023529411764705899));
    dVar7 = round(dVar7);
    fVar2 = (1.0 - local_38) * fVar1;
    fStack_4c = (float)((ulonglong)(double)fVar1 >> 0x20);
    fStack_4c = fStack_4c - (float)(int)ROUND(dVar7);
    fVar3 = (1.0 - local_38 * fStack_4c) * fVar1;
    fVar4 = (1.0 - (1.0 - fStack_4c) * local_38) * fVar1;
    out_rgb = extraout_EBX;
    fVar5 = local_24;
    fVar6 = local_18;
    switch(((int)ROUND(dVar7) + 600) % 6) {
    case 0:
      fVar5 = fVar2;
      fStack_20 = fVar1;
      fVar6 = fVar4;
      break;
    case 1:
      fVar5 = fVar2;
      fStack_20 = fVar3;
      fVar6 = fVar1;
      break;
    case 2:
      fVar5 = fVar4;
      fStack_20 = fVar2;
      fVar6 = fVar1;
      break;
    case 3:
      fVar5 = fVar1;
      fStack_20 = fVar2;
      fVar6 = fVar3;
      break;
    case 4:
      fVar5 = fVar1;
      fStack_20 = fVar4;
      fVar6 = fVar2;
      break;
    case 5:
      fVar5 = fVar3;
      fStack_20 = fVar1;
      fVar6 = fVar2;
    }
  }
  local_18 = fVar6;
  local_24 = fVar5;
  out_rgb->x = fStack_20;
  out_rgb->y = local_18;
  out_rgb->z = local_24;
  return out_rgb;
}
