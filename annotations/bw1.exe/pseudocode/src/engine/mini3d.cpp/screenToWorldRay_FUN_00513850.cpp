// Name: engine_mini3d.cpp_screenToWorldRay_FUN_00513850
// Address: 00513850
// Address Range: [[00513850, 005138fa]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_00513850(float screen_x,float screen_y,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_screenToWorldRay_FUN_00513850(float screen_x,float screen_y,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (screen_x - g_FLOAT_01d224e4) / g_FLOAT_01d224dc;
  fVar2 = (screen_y - g_FLOAT_01d224e8) / g_FLOAT_01d224e0;
  fVar3 = g_FLOAT_01d22514 + g_FLOAT_01d22508 + fVar2 * g_FLOAT_01d224fc + fVar1 * g_FLOAT_01d224f0;
  fVar4 = g_FLOAT_01d22518 + g_FLOAT_01d2250c + fVar2 * g_FLOAT_01d22500 + fVar1 * g_FLOAT_01d224f4;
  output->x = g_FLOAT_01d22510 +
              g_FLOAT_01d22504 + fVar2 * g_FLOAT_01d224f8 + fVar1 * g_FLOAT_01d224ec;
  output->y = fVar3;
  output->z = fVar4;
  return;
}
