// Name: engine_mini3d.cpp_getRenderViewport_FUN_00511980
// Address: 00511980
// Address Range: [[00511980, 00511a01]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_getRenderViewport_FUN_00511980(float *left,float *top,float *right,float *bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_getRenderViewport_FUN_00511980(float *left,float *top,float *right,float *bottom)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_01d224d8;
  fVar2 = _DAT_01d224d4;
  fVar1 = _DAT_01d224d0;
  if (_DAT_01d25f14 != 0) {
    *left = _DAT_01d224cc;
    *top = fVar1;
    *right = fVar2;
    *bottom = fVar3;
    return;
  }
  fVar1 = 1.0 / _DAT_01d22544;
  fVar2 = _DAT_01d224d0 * fVar1;
  fVar3 = _DAT_01d224d4 * fVar1;
  fVar4 = _DAT_01d224d8 * fVar1;
  *left = _DAT_01d224cc * fVar1;
  *top = fVar2;
  *right = fVar3;
  *bottom = fVar4;
  return;
}
