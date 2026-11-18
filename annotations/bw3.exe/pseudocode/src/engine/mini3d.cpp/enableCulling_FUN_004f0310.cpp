// Name: engine_mini3d.cpp_enableCulling_FUN_004f0310
// Address: 004f0310
// Address Range: [[004f0310, 004f0337]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_enableCulling_FUN_004f0310(int enable)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_enableCulling_FUN_004f0310(int enable)

{
  g_INT_01d76cf8 = enable;
  if ((g_PTR_02cf60ec != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
    (*(code *)g_PTR_02cf60ec)(enable);
    return;
  }
  return;
}
