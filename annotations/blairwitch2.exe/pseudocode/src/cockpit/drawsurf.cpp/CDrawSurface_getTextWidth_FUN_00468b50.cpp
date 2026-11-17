// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00468b50
// Address: 00468b50
// Address Range: [[00468b50, 00468b73]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00468b50(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00468b50(CDrawSurface *this_ptr,char *text)

{
  int iVar1;
  
  if (g_CurrentFont != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_CurrentFont,text);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  return iVar1 + -1;
}
