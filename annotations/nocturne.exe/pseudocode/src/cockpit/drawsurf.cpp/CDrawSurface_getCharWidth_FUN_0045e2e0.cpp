// Name: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_0045e2e0
// Address: 0045e2e0
// Address Range: [[0045e2e0, 0045e317]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0045e2e0(CDrawSurface *this_ptr,int char_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0045e2e0(CDrawSurface *this_ptr,int char_code)

{
  int iVar1;
  char local_4 [4];
  
  if (_DAT_01b4d718 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(_DAT_01b4d718,char_code);
    return iVar1;
  }
  local_4[0] = (char)char_code;
  local_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(local_4);
  return iVar1 + -1;
}
