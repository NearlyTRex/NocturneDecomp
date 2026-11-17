// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040
// Address: 00481040
// Address Range: [[00481040, 00481056]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

{
  if (g_CBitFont_PTR_01bc11ec != (CBitFont *)0x0) {
    return g_CBitFont_PTR_01bc11ec->current_line_height;
  }
  return 0xb;
}
