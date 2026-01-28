// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0
// Address: 00489ce0
// Address Range: [[00489ce0, 00489cf6]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl
cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(CDrawSurface *this_ptr)

{
  if (g_CurrentFont != (CBitFont *)0x0) {
    return g_CurrentFont->current_max_width;
  }
  return 0xb;
}
