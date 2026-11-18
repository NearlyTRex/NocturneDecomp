// Name: engine_mini3d.cpp_setAmbientLight_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4e67]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004f4e40(float ambient)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004f4e40(float ambient)

{
  g_FLOAT_01d098f0 = ambient;
  if ((g_PTR_0264bc80 != (byte *)0x0) && (g_INT_01c37788 != 0)) {
    (*(code *)g_PTR_0264bc80)(ambient);
    return;
  }
  return;
}
