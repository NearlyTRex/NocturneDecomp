// Name: engine_mini3d.cpp_setColor4f_FUN_004f8d40
// Address: 004f8d40
// Address Range: [[004f8d40, 004f8e1c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _DAT_01d0d2d8 = red;
  _DAT_01d0d2dc = green;
  _DAT_01d0d2e0 = blue;
  if (_DAT_01d09860 != alpha) {
    _DAT_01d09860 = alpha;
    if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,alpha);
    }
  }
  fVar1 = green * _DAT_005ddfe8;
  fVar2 = blue * _DAT_005ddfe8;
  fVar3 = alpha * _DAT_005ddfe8;
  dVar4 = round((double)(red * _DAT_005ddfe8));
  dVar5 = round((double)fVar1);
  dVar6 = round((double)fVar3);
  dVar7 = round((double)fVar2);
  _DAT_01d0d2e4 =
       (int)ROUND(dVar7) |
       (int)ROUND(dVar5) << 8 | (int)ROUND(dVar4) << 0x10 | (int)ROUND(dVar6) << 0x18;
  return;
}
