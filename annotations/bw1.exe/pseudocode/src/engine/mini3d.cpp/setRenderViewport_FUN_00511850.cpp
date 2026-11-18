// Name: engine_mini3d.cpp_setRenderViewport_FUN_00511850
// Address: 00511850
// Address Range: [[00511850, 00511970]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_00511850(float left,float top,float right,float bottom)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_00511850(float left,float top,float right,float bottom)

{
  float fVar1;
  float fVar2;
  
  if (g_INT_01d25f14 == 0) {
    left = left * g_FLOAT_01d22544;
    top = top * g_FLOAT_01d22544;
    right = right * g_FLOAT_01d22544;
    bottom = bottom * g_FLOAT_01d22544;
  }
  fVar2 = (right - left) * 0.5f;
  fVar1 = (bottom - top) * 0.5f;
  g_FLOAT_01d224cc = left;
  g_FLOAT_01d224d0 = top;
  g_FLOAT_01d224e4 = left + fVar2;
  g_FLOAT_01d224e8 = top + fVar1;
  g_FLOAT_01d224d4 = right;
  g_FLOAT_01d224dc = fVar2 + -1.0f;
  g_FLOAT_01d224e0 = -fVar1 + 1.0;
  g_FLOAT_01d224d8 = bottom;
  if (((g_INT_01d25f14 == 0) && (g_PTR_02c83444 != (byte *)0x0)) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83444)(left,top,right,bottom,g_FLOAT_01d2253c,g_INT_01d22540);
  }
  engine_mini3d_cpp_resetDynamicLight_FUN_00514120();
  g_INT_01d24ffc = 1;
  return;
}
