// Name: core_fldnotes.cpp_FUN_004a2060
// Address: 004a2060
// Address Range: [[004a2060, 004a2137]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a2060(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a2060(int *param_1)

{
  int iVar1;
  int iVar2;
  int x;
  
  engine_font_cpp_FUN_004a8df0(param_1[0x47],param_1 + 7,*param_1,param_1[1],0,0xffffffff);
  if (param_1[6] == 0) {
    return;
  }
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560((CBitFont *)param_1[0x47],0x78);
  iVar1 = param_1[1] + iVar1;
  if (param_1[0x47] != _DAT_01511cd0) {
    _DAT_01c35e60 = 0;
    engine_2d_c_drawHLine_FUN_00402f30(*param_1,iVar1,*param_1 + param_1[2] + -1);
    return;
  }
  iVar2 = param_1[2];
  x = *param_1;
  if (CAlphaBitmap_01caf22c.width < iVar2) {
    do {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01caf22c,x,iVar1,0xffff);
      iVar2 = iVar2 - CAlphaBitmap_01caf22c.width;
      x = x + CAlphaBitmap_01caf22c.width;
    } while (CAlphaBitmap_01caf22c.width < iVar2);
  }
  engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
            (&CAlphaBitmap_01caf22c,x,iVar1,0,0,iVar2 + -1,CAlphaBitmap_01caf22c.height + -1,0xffff)
  ;
  return;
}
