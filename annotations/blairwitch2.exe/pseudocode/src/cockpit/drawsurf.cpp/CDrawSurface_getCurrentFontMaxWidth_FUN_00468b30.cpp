// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30
// Address: 00468b30
// Address Range: [[00468b30, 00468b46]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30(CDrawSurface *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00468b30(CDrawSurface *this_ptr)

{
  if (_DAT_01ba5c30 != 0) {
    return *(int *)(_DAT_01ba5c30 + 0x41f0);
  }
  return 0xb;
}
