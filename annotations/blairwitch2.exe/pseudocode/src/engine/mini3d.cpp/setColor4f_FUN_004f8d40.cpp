// Name: engine_mini3d.cpp_setColor4f_FUN_004f8d40
// Address: 004f8d40
// Address Range: [[004f8d40, 004f8e1c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f8d40(float alpha,float red,float green,float blue)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  _DAT_01d0d2d8 = red;
  _DAT_01d0d2dc = green;
  _DAT_01d0d2e0 = blue;
  if (_DAT_01d09860 != alpha) {
    _DAT_01d09860 = alpha;
    if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,alpha);
    }
  }
  fVar1 = (float10)_DAT_005ddfe8;
  fVar2 = (float10)red * fVar1;
  fVar3 = (float10)green * fVar1;
  fVar1 = (float10)blue * fVar1;
  round();
  round();
  round();
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d0d2e4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
