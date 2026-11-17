// Name: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_00481000
// Address: 00481000
// Address Range: [[00481000, 00481037]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_00481000(CDrawSurface *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_00481000(CDrawSurface *this_ptr,int char_code)

{
  int iVar1;
  char acStack_4 [4];
  
  if (g_CBitFont_PTR_01bc11ec != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004c44e0(g_CBitFont_PTR_01bc11ec,char_code);
    return iVar1;
  }
  acStack_4[0] = (char)char_code;
  acStack_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(acStack_4);
  return iVar1 + -1;
}
