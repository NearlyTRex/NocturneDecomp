// Name: engine_mini3d.cpp_screenToWorldRay_FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4baa]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004f4b00(float screen_x,float screen_y,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_004f4b00(float screen_x,float screen_y,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (screen_x - g_FLOAT_01d09884) / g_FLOAT_01d0987c;
  fVar2 = (screen_y - g_FLOAT_01d09888) / g_FLOAT_01d09880;
  fVar3 = g_FLOAT_01d098b4 + g_FLOAT_01d098a8 + fVar2 * g_FLOAT_01d0989c + fVar1 * g_FLOAT_01d09890;
  fVar4 = g_FLOAT_01d098b8 + g_FLOAT_01d098ac + fVar2 * g_FLOAT_01d098a0 + fVar1 * g_FLOAT_01d09894;
  output->x = g_FLOAT_01d098b0 +
              g_FLOAT_01d098a4 + fVar2 * g_FLOAT_01d09898 + fVar1 * g_FLOAT_01d0988c;
  output->y = fVar3;
  output->z = fVar4;
  return;
}
