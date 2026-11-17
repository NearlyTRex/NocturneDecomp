// Name: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_0046a6c0
// Address: 0046a6c0
// Address Range: [[0046a6c0, 0046a6f7]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0046a6c0(CDrawSurface *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0046a6c0(CDrawSurface *this_ptr,int char_code)

{
  int iVar1;
  char acStack_4 [4];
  
  if (g_CBitFont_PTR_01bdd7c4 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(g_CBitFont_PTR_01bdd7c4,char_code);
    return iVar1;
  }
  acStack_4[0] = (char)char_code;
  acStack_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(acStack_4);
  return iVar1 + -1;
}
