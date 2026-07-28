// Name: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_0045e340
// Address: 0045e340
// Address Range: [[0045e340, 0045e363]]
// Convention: unknown
// Signature: int cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0045e340(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0045e340(void)

{
  int iVar1;
  char *in_stack_00000008;
  
  if (_DAT_01b4d718 != 0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01b4d718);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(in_stack_00000008);
  return iVar1 + -1;
}
