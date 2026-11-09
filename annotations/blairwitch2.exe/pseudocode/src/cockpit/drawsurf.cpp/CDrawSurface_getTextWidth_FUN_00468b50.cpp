// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00468b50
// Address: 00468b50
// Address Range: [[00468b50, 00468b73]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00468b50(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00468b50(CDrawSurface *this_ptr,char *text)

{
  int iVar1;
  
  if (_DAT_01ba5c30 != 0) {
    iVar1 = engine_font_cpp_FUN_004aaf00(_DAT_01ba5c30,text);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  return iVar1 + -1;
}
