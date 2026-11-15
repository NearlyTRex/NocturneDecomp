// Name: engine_mini3d.cpp_setColor_FUN_004f8e20
// Address: 004f8e20
// Address Range: [[004f8e20, 004f8ea4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor_FUN_004f8e20(uint rgb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor_FUN_004f8e20(uint rgb)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)(rgb >> 0x10 & 0xff) * _DAT_005ddfec;
  fVar1 = (float)(rgb >> 8 & 0xff) * _DAT_005ddfec;
  fVar2 = (float)(rgb & 0xff) * _DAT_005ddfec;
  dVar4 = round((double)(_DAT_01d09860 * _DAT_005ddff0));
  _DAT_01d0d2d8 = fVar3;
  _DAT_01d0d2dc = fVar1;
  _DAT_01d0d2e0 = fVar2;
  _DAT_01d0d2e4 = rgb & 0xffffff | (int)ROUND(dVar4) << 0x18;
  return;
}
