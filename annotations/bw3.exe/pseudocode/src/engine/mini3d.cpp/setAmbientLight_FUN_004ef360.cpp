// Name: engine_mini3d.cpp_setAmbientLight_FUN_004ef360
// Address: 004ef360
// Address Range: [[004ef360, 004ef387]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004ef360(float ambient)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004ef360(float ambient)

{
  g_FLOAT_01d76cd4 = ambient;
  if ((g_APIDLL_setAmbientLight != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_APIDLL_setAmbientLight)(ambient);
    return;
  }
  return;
}
