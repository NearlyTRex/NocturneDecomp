// Name: engine_mini3d.cpp_setRenderViewport_FUN_004f2ac0
// Address: 004f2ac0
// Address Range: [[004f2ac0, 004f2b9c]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(float left,float top,float right,float bottom)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(float left,float top,float right,float bottom)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (right - left) * 0.5f;
  fVar1 = (bottom - top) * 0.5f;
  g_FLOAT_01d0986c = left;
  g_FLOAT_01d09870 = top;
  g_FLOAT_01d09884 = left + fVar2;
  g_FLOAT_01d09888 = top + fVar1;
  g_FLOAT_01d09874 = right;
  g_FLOAT_01d0987c = fVar2 + -1.0f;
  g_FLOAT_01d09880 = -fVar1 + 1.0;
  g_FLOAT_01d09878 = bottom;
  if (((g_INT_01d0d2b4 == 0) && (g_PTR_0264bc74 != (byte *)0x0)) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bc74)(left,top,right,bottom,g_FLOAT_01d098dc,g_INT_01d098e0);
  }
  engine_mini3d_cpp_resetDynamicLight_FUN_004f53d0();
  g_INT_01d0c398 = 1;
  return;
}
