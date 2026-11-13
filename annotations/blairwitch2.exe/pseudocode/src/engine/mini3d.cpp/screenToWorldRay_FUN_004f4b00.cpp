// Name: engine_mini3d.cpp_screenToWorldRay_FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4baa]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004f4b00(float screen_x,float screen_y,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004f4b00(float screen_x,float screen_y,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (screen_x - _DAT_01d09884) / _DAT_01d0987c;
  fVar2 = (screen_y - _DAT_01d09888) / _DAT_01d09880;
  fVar3 = _DAT_01d098b4 + _DAT_01d098a8 + fVar2 * _DAT_01d0989c + fVar1 * _DAT_01d09890;
  fVar4 = _DAT_01d098b8 + _DAT_01d098ac + fVar2 * _DAT_01d098a0 + fVar1 * _DAT_01d09894;
  output->x = _DAT_01d098b0 + _DAT_01d098a4 + fVar2 * _DAT_01d09898 + fVar1 * _DAT_01d0988c;
  output->y = fVar3;
  output->z = fVar4;
  return;
}
