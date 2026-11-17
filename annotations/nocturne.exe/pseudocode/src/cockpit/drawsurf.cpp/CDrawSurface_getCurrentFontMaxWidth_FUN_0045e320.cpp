// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320
// Address: 0045e320
// Address Range: [[0045e320, 0045e336]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320(CDrawSurface *this_ptr)

{
  if (g_CurrentFont != (CBitFont *)0x0) {
    return g_CurrentFont->current_line_height;
  }
  return 0xb;
}
