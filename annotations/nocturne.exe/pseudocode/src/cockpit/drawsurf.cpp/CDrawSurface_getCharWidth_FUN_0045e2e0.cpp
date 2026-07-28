// Name: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_0045e2e0
// Address: 0045e2e0
// Address Range: [[0045e2e0, 0045e317]]
// Convention: unknown
// Signature: int cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0045e2e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cockpit_drawsurf_cpp_CDrawSurface_getCharWidth_FUN_0045e2e0(void)

{
  int iVar1;
  int in_stack_00000008;
  char local_4 [4];
  
  if (_DAT_01b4d718 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(_DAT_01b4d718,in_stack_00000008);
    return iVar1;
  }
  local_4[0] = (char)in_stack_00000008;
  local_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(local_4);
  return iVar1 + -1;
}
