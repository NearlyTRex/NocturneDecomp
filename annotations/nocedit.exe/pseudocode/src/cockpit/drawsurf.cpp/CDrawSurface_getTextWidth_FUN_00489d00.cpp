// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00489d00
// Address: 00489d00
// Address Range: [[00489d00, 00489d23]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00489d00(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00489d00(CDrawSurface *this_ptr,char *text)

{
  int iVar1;
  
  if (g_CurrentFont != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_CurrentFont,text);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  return iVar1 + -1;
}
