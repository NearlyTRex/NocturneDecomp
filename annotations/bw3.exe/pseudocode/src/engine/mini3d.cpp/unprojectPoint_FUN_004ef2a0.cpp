// Name: engine_mini3d.cpp_unprojectPoint_FUN_004ef2a0
// Address: 004ef2a0
// Address Range: [[004ef2a0, 004ef35e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_004ef2a0(float *screen_point,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_004ef2a0(float *screen_point,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*screen_point - _DAT_01d76c64) * screen_point[2]) / _DAT_01d76c5c;
  fVar4 = ((screen_point[1] - _DAT_01d76c68) * screen_point[2]) / _DAT_01d76c60;
  fVar1 = screen_point[2];
  fVar5 = _DAT_01d76c94 + fVar1 * _DAT_01d76c88 + fVar4 * _DAT_01d76c7c + fVar2 * _DAT_01d76c70;
  fVar3 = _DAT_01d76c98 + fVar1 * _DAT_01d76c8c + fVar4 * _DAT_01d76c80 + fVar2 * _DAT_01d76c74;
  output->x = _DAT_01d76c90 + fVar1 * _DAT_01d76c84 + fVar4 * _DAT_01d76c78 + fVar2 * _DAT_01d76c6c;
  output->y = fVar5;
  output->z = fVar3;
  return;
}
