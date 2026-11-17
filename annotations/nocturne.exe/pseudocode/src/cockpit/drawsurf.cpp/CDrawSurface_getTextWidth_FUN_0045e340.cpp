// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_0045e340
// Address: 0045e340
// Address Range: [[0045e340, 0045e363]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0045e340(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0045e340(CDrawSurface *this_ptr,char *text)

{
  int iVar1;
  
  if (g_CBitFont_PTR_01b4d718 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_01b4d718,text);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  return iVar1 + -1;
}
