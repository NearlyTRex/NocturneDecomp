// Name: engine_font.cpp_getDefaultTextColor_FUN_004b12e0
// Address: 004b12e0
// Address Range: [[004b12e0, 004b12f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004b12e0(void)

#include "nocturne.h"

int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004b12e0(void)

{
  if (g_INT_005fba20 == 0x10) {
    return (uint)g_USHORT_01d1ad62;
  }
  return g_INT_01d1ad64;
}
