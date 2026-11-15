// Name: core_boneguy.cpp_hsvToRgb_FUN_00418110
// Address: 00418110
// Address Range: [[00418110, 004182c8]]
// Convention: __stack_esi
// Signature: CColor3f * __stack_esi core_boneguy_cpp_hsvToRgb_FUN_00418110(CColor3f *in_hsv,CColor3f *out_rgb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CColor3f * __stack_esi core_boneguy_cpp_hsvToRgb_FUN_00418110(CColor3f *in_hsv,CColor3f *out_rgb)

{
  double dVar1;
  float fVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  float afStackY_1038 [1012];
  float fStack_5c;
  float fStack_4c;
  float fStack_48;
  double dStack_40;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  fStack_14 = in_hsv->b;
  dVar1 = (double)in_hsv->g;
  if (0.0 < dVar1) {
    fStack_30 = in_hsv->g * (float)_DAT_005cc012;
    fVar2 = in_hsv->r * (float)_DAT_005cc01a;
    dStack_40 = floor((double)fVar2);
    dVar5 = round(dStack_40);
    iStack_38 = (int)ROUND(dVar5);
    fStack_1c = (float)iStack_38;
    fStack_2c = (1.0 - fStack_34) * fVar2;
    fStack_5c = (float)((ulonglong)dVar1 >> 0x20);
    fStack_30 = (1.0 - fStack_34 * (fStack_5c - (float)iStack_38)) * fVar2;
    fStack_24 = (1.0 - (1.0 - (fStack_5c - (float)iStack_38)) * fStack_34) * fVar2;
    switch((iStack_38 + 600) % 6) {
    case 0:
      fStack_20 = fVar2;
      fStack_18 = fStack_24;
      break;
    case 1:
      fStack_20 = fStack_30;
      fStack_18 = fVar2;
      break;
    case 2:
      fStack_20 = fStack_2c;
      fStack_18 = fVar2;
      fStack_2c = fStack_24;
      break;
    case 3:
      fStack_20 = fStack_2c;
      fStack_18 = fStack_30;
      fStack_2c = fVar2;
      break;
    case 4:
      fStack_20 = fStack_24;
      fStack_18 = fStack_2c;
      fStack_2c = fVar2;
      break;
    case 5:
      fStack_20 = fVar2;
      fStack_18 = fStack_2c;
      fStack_2c = fStack_30;
      break;
    default:
      goto switchD_004182c2_default;
    }
  }
  else {
    fStack_1c = fStack_14;
    fStack_2c = fStack_14;
  }
  fStack_28 = fStack_2c;
switchD_004182c2_default:
  fStack_4c = fStack_18;
  fStack_48 = fStack_28;
  puVar3 = (uint *)((int)out_rgb + (uint)bVar4 * -8 + 4);
  out_rgb->r = fStack_20;
  *puVar3 = *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return out_rgb;
}
