// Name: engine_font.cpp_getDefaultTextColor_FUN_004a96e0
// Address: 004a96e0
// Address Range: [[004a96e0, 004a96f7]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004a96e0(void)

#include "nocturne.h"

int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004a96e0(void)

{
  if (g_INT_006141c0 == 0x10) {
    return (uint)g_USHORT_01cb0242;
  }
  return g_ShadowColor32;
}
