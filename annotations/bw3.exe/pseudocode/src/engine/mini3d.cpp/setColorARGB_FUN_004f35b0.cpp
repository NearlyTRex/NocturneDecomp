// Name: engine_mini3d.cpp_setColorARGB_FUN_004f35b0
// Address: 004f35b0
// Address Range: [[004f35b0, 004f3682]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f35b0(uint argb)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setColorARGB_FUN_004f35b0(uint argb)

{
  float fVar1;
  
  g_FLOAT_01d7a6b8 = (float)(argb >> 0x10 & 0xff) * 0.003921569f;
  g_FLOAT_01d7a6bc = (float)(argb >> 8 & 0xff) * 0.003921569f;
  g_FLOAT_01d7a6c0 = (float)(argb & 0xff) * 0.003921569f;
  fVar1 = (float)(argb >> 0x18) * 0.003921569f;
  if (g_FLOAT_01d76c40 != fVar1) {
    g_FLOAT_01d76c40 = fVar1;
    if ((g_APIDLL_setLightConstants != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
      (*(code *)g_APIDLL_setLightConstants)(g_FLOAT_01d76cc8,g_INT_01d76ccc,g_INT_01d76cd0,fVar1);
      g_INT_01d7a6c4 = argb;
      return;
    }
  }
  g_INT_01d7a6c4 = argb;
  return;
}
