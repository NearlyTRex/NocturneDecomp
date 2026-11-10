// Name: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040
// Address: 00481040
// Address Range: [[00481040, 00481056]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00481040(CDrawSurface *this_ptr)

{
  if (_DAT_01bc11ec != 0) {
    return *(int *)(_DAT_01bc11ec + 0x41f0);
  }
  return 0xb;
}
