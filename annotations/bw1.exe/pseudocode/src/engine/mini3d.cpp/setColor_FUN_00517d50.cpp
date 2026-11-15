// Name: engine_mini3d.cpp_setColor_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517dd4]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor_FUN_00517d50(uint rgb)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor_FUN_00517d50(uint rgb)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)(rgb >> 0x10 & 0xff) * _DAT_005e9033;
  fVar1 = (float)(rgb >> 8 & 0xff) * _DAT_005e9033;
  fVar2 = (float)(rgb & 0xff) * _DAT_005e9033;
  dVar4 = round((double)(_DAT_01d224c0 * _DAT_005e9037));
  _DAT_01d25f38 = fVar3;
  _DAT_01d25f3c = fVar1;
  _DAT_01d25f40 = fVar2;
  _DAT_01d25f44 = rgb & 0xffffff | (int)ROUND(dVar4) << 0x18;
  return;
}
