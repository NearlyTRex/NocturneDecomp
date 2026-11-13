// Name: engine_mini3d.cpp_setColor4f_FUN_004f3440
// Address: 004f3440
// Address Range: [[004f3440, 004f351c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_004f3440(float alpha,float red,float green,float blue)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  _DAT_01d7a6b8 = red;
  _DAT_01d7a6bc = green;
  _DAT_01d7a6c0 = blue;
  if (_DAT_01d76c40 != alpha) {
    _DAT_01d76c40 = alpha;
    if ((_DAT_02cf60a4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60a4)(_DAT_01d76cc8,_DAT_01d76ccc,_DAT_01d76cd0,alpha);
    }
  }
  fVar1 = (float10)_DAT_005c8331;
  fVar2 = (float10)red * fVar1;
  fVar3 = (float10)green * fVar1;
  fVar1 = (float10)blue * fVar1;
  round();
  round();
  round();
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d7a6c4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
