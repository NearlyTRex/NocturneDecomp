// Name: engine_mini3d.cpp_setColorARGB_FUN_004f8eb0
// Address: 004f8eb0
// Address Range: [[004f8eb0, 004f8f82]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f8eb0(uint argb)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f8eb0(uint argb)

{
  float fVar1;
  
  g_FLOAT_01d0d2d8 = (float)(argb >> 0x10 & 0xff) * 0.003921569f;
  g_FLOAT_01d0d2dc = (float)(argb >> 8 & 0xff) * 0.003921569f;
  g_FLOAT_01d0d2e0 = (float)(argb & 0xff) * 0.003921569f;
  fVar1 = (float)(argb >> 0x18) * 0.003921569f;
  if (g_FLOAT_01d09860 != fVar1) {
    g_FLOAT_01d09860 = fVar1;
    if ((g_PTR_0264bc78 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
      (*(code *)g_PTR_0264bc78)(g_FLOAT_01d098e4,g_INT_01d098e8,g_INT_01d098ec,fVar1);
      g_INT_01d0d2e4 = argb;
      return;
    }
  }
  g_INT_01d0d2e4 = argb;
  return;
}
