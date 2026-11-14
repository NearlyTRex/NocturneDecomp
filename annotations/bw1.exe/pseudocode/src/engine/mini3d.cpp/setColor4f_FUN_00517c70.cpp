// Name: engine_mini3d.cpp_setColor4f_FUN_00517c70
// Address: 00517c70
// Address Range: [[00517c70, 00517d4c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor4f_FUN_00517c70(float alpha,float red,float green,float blue)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  _DAT_01d25f38 = red;
  _DAT_01d25f3c = green;
  _DAT_01d25f40 = blue;
  if (_DAT_01d224c0 != alpha) {
    _DAT_01d224c0 = alpha;
    if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,alpha);
    }
  }
  fVar1 = (float10)_DAT_005e902f;
  fVar2 = (float10)red * fVar1;
  fVar3 = (float10)green * fVar1;
  fVar1 = (float10)blue * fVar1;
  round();
  round();
  round();
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d25f44 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
