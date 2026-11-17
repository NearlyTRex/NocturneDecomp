// Name: engine_mini3d.cpp_setRenderViewport_FUN_004ed020
// Address: 004ed020
// Address Range: [[004ed020, 004ed140]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004ed020(float left,float top,float right,float bottom)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_004ed020(float left,float top,float right,float bottom)

{
  float fVar1;
  float fVar2;
  
  if (g_INT_01d7a694 == 0) {
    left = left * g_FLOAT_01d76cc4;
    top = top * g_FLOAT_01d76cc4;
    right = right * g_FLOAT_01d76cc4;
    bottom = bottom * g_FLOAT_01d76cc4;
  }
  fVar2 = (right - left) * 0.5f;
  fVar1 = (bottom - top) * 0.5f;
  g_FLOAT_01d76c4c = left;
  g_FLOAT_01d76c50 = top;
  g_FLOAT_01d76c64 = left + fVar2;
  g_FLOAT_01d76c68 = top + fVar1;
  g_FLOAT_01d76c54 = right;
  g_FLOAT_01d76c5c = fVar2 + -1.0f;
  g_FLOAT_01d76c60 = -fVar1 + 1.0;
  g_FLOAT_01d76c58 = bottom;
  if (((g_INT_01d7a694 == 0) && (g_APIDLL_setViewport != (byte *)0x0)) && (g_INT_01c6cee8 != 0)
     ) {
    (*(code *)g_APIDLL_setViewport)(left,top,right,bottom,g_FLOAT_01d76cbc,g_INT_01d76cc0);
  }
  engine_mini3d_cpp_resetDynamicLight_FUN_004ef8f0();
  g_INT_01d7977c = 1;
  return;
}
