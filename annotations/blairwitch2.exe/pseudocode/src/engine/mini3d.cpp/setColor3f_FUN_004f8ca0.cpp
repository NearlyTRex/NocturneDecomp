// Name: engine_mini3d.cpp_setColor3f_FUN_004f8ca0
// Address: 004f8ca0
// Address Range: [[004f8ca0, 004f8d32]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f8ca0(float red,float green,float blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setColor3f_FUN_004f8ca0(float red,float green,float blue)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  fVar1 = (float10)_DAT_005ddfe4;
  fVar2 = (float10)red * fVar1;
  fVar3 = (float10)green * fVar1;
  fVar1 = (float10)blue * fVar1;
  _DAT_01d0d2d8 = red;
  round();
  round();
  round();
  _DAT_01d0d2dc = green;
  _DAT_01d0d2e0 = blue;
  uVar4 = round((int)ROUND(fVar2),(int)ROUND(fVar3));
  _DAT_01d0d2e4 = (int)ROUND(fVar1) | (int)uVar4 << 8 | (uint)((ulonglong)uVar4 >> 0x20);
  return;
}
