// Name: engine_mini3d.cpp_disableClipping_FUN_00514ae0
// Address: 00514ae0
// Address Range: [[00514ae0, 00514b06]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_disableClipping_FUN_00514ae0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_disableClipping_FUN_00514ae0(void)

{
  g_INT_01d25000 = 0;
  if ((g_PTR_02c83494 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83494)(0);
    return;
  }
  return;
}
