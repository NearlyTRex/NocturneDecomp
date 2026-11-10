// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_0046a720
// Address: 0046a720
// Address Range: [[0046a720, 0046a743]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0046a720(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0046a720(CDrawSurface *this_ptr,char *text)

{
  int iVar1;
  
  if (_DAT_01bdd7c4 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01bdd7c4,text);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  return iVar1 + -1;
}
