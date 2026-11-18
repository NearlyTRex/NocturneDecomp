// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040
// Address: 00481040
// Address Range: [[00481040, 00481056]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

{
  if (g_CurrentFont != (CBitFont *)0x0) {
    return g_CurrentFont->current_line_height;
  }
  return 0xb;
}
