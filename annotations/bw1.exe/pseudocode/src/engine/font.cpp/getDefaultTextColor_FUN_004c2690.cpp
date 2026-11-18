// Name: engine_font.cpp_getDefaultTextColor_FUN_004c2690
// Address: 004c2690
// Address Range: [[004c2690, 004c26a7]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004c2690(void)

#include "nocturne.h"

int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004c2690(void)

{
  if (g_INT_0061b4a0 == 0x10) {
    return (uint)g_USHORT_01cc8cd2;
  }
  return g_ShadowColor32;
}
