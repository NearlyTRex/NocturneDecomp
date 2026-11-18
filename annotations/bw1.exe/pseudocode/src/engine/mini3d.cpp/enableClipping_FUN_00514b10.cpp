// Name: engine_mini3d.cpp_enableClipping_FUN_00514b10
// Address: 00514b10
// Address Range: [[00514b10, 00514b2e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_enableClipping_FUN_00514b10(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_enableClipping_FUN_00514b10(void)

{
  g_INT_01d25000 = 1;
  if ((g_PTR_02c83494 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83494)(1);
    return;
  }
  return;
}
