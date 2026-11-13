// Name: engine_mini3d.cpp_getRenderViewport_FUN_004ed150
// Address: 004ed150
// Address Range: [[004ed150, 004ed1d1]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_getRenderViewport_FUN_004ed150(float *left,float *top,float *right,float *bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_getRenderViewport_FUN_004ed150(float *left,float *top,float *right,float *bottom)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_01d76c58;
  fVar2 = _DAT_01d76c54;
  fVar1 = _DAT_01d76c50;
  if (_DAT_01d7a694 != 0) {
    *left = _DAT_01d76c4c;
    *top = fVar1;
    *right = fVar2;
    *bottom = fVar3;
    return;
  }
  fVar1 = 1.0 / _DAT_01d76cc4;
  fVar2 = _DAT_01d76c50 * fVar1;
  fVar3 = _DAT_01d76c54 * fVar1;
  fVar4 = _DAT_01d76c58 * fVar1;
  *left = _DAT_01d76c4c * fVar1;
  *top = fVar2;
  *right = fVar3;
  *bottom = fVar4;
  return;
}
