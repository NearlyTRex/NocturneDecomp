// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0046a700
// Address: 0046a700
// Address Range: [[0046a700, 0046a716]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0046a700(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0046a700(CDrawSurface *this_ptr)

{
  if (g_CBitFont_PTR_01bdd7c4 != (CBitFont *)0x0) {
    return g_CBitFont_PTR_01bdd7c4->current_line_height;
  }
  return 0xb;
}
