// Name: engine_mini3d.cpp_setAmbientLight_FUN_00513b90
// Address: 00513b90
// Address Range: [[00513b90, 00513bb7]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_00513b90(float ambient)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_00513b90(float ambient)

{
  g_FLOAT_01d22554 = ambient;
  if ((g_PTR_02c83450 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83450)(ambient);
    return;
  }
  return;
}
