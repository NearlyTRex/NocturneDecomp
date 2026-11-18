// Name: engine_mini3d.cpp_unprojectPoint_FUN_004f4d80
// Address: 004f4d80
// Address Range: [[004f4d80, 004f4e3e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_004f4d80(float *screen_point,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_004f4d80(float *screen_point,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*screen_point - g_FLOAT_01d09884) * screen_point[2]) / g_FLOAT_01d0987c;
  fVar4 = ((screen_point[1] - g_FLOAT_01d09888) * screen_point[2]) / g_FLOAT_01d09880;
  fVar1 = screen_point[2];
  fVar5 = g_FLOAT_01d098b4 +
          fVar1 * g_FLOAT_01d098a8 + fVar4 * g_FLOAT_01d0989c + fVar2 * g_FLOAT_01d09890;
  fVar3 = g_FLOAT_01d098b8 +
          fVar1 * g_FLOAT_01d098ac + fVar4 * g_FLOAT_01d098a0 + fVar2 * g_FLOAT_01d09894;
  output->x = g_FLOAT_01d098b0 +
              fVar1 * g_FLOAT_01d098a4 + fVar4 * g_FLOAT_01d09898 + fVar2 * g_FLOAT_01d0988c;
  output->y = fVar5;
  output->z = fVar3;
  return;
}
