// Name: engine_mini3d.cpp_setColorARGB_FUN_00517de0
// Address: 00517de0
// Address Range: [[00517de0, 00517eb2]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_00517de0(uint argb)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_00517de0(uint argb)

{
  float fVar1;
  
  g_FLOAT_01d25f38 = (float)(argb >> 0x10 & 0xff) * 0.003921569f;
  g_FLOAT_01d25f3c = (float)(argb >> 8 & 0xff) * 0.003921569f;
  g_FLOAT_01d25f40 = (float)(argb & 0xff) * 0.003921569f;
  fVar1 = (float)(argb >> 0x18) * 0.003921569f;
  if (g_FLOAT_01d224c0 != fVar1) {
    g_FLOAT_01d224c0 = fVar1;
    if ((g_PTR_02c83448 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
      (*(code *)g_PTR_02c83448)(g_FLOAT_01d22548,g_INT_01d2254c,g_INT_01d22550,fVar1);
      g_INT_01d25f44 = argb;
      return;
    }
  }
  g_INT_01d25f44 = argb;
  return;
}
