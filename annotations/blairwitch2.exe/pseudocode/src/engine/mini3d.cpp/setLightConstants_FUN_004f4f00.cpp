// Name: engine_mini3d.cpp_setLightConstants_FUN_004f4f00
// Address: 004f4f00
// Address Range: [[004f4f00, 004f4f47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setLightConstants_FUN_004f4f00(float arg1,float arg2,float arg3)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setLightConstants_FUN_004f4f00(float arg1,float arg2,float arg3)

{
  g_FLOAT_01d098e4 = arg1;
  g_INT_01d098e8 = (int)arg2;
  g_INT_01d098ec = (int)arg3;
  if ((g_PTR_0264bc78 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bc78)(arg1,arg2,arg3,g_FLOAT_01d09860);
    return;
  }
  return;
}
