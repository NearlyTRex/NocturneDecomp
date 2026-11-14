// Name: engine_mini3d.cpp_screenToWorldRay_FUN_004ef020
// Address: 004ef020
// Address Range: [[004ef020, 004ef0ca]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004ef020(float screen_x,float screen_y,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004ef020(float screen_x,float screen_y,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (screen_x - _DAT_01d76c64) / _DAT_01d76c5c;
  fVar2 = (screen_y - _DAT_01d76c68) / _DAT_01d76c60;
  fVar3 = _DAT_01d76c94 + _DAT_01d76c88 + fVar2 * _DAT_01d76c7c + fVar1 * _DAT_01d76c70;
  fVar4 = _DAT_01d76c98 + _DAT_01d76c8c + fVar2 * _DAT_01d76c80 + fVar1 * _DAT_01d76c74;
  output->x = _DAT_01d76c90 + _DAT_01d76c84 + fVar2 * _DAT_01d76c78 + fVar1 * _DAT_01d76c6c;
  output->y = fVar3;
  output->z = fVar4;
  return;
}
