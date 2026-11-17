// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30
// Address: 00468b30
// Address Range: [[00468b30, 00468b46]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30(CDrawSurface *this_ptr)

{
  if (g_CurrentFont != (CBitFont *)0x0) {
    return g_CurrentFont->current_line_height;
  }
  return 0xb;
}
