// Name: core_fldnotes.cpp_FUN_004a8570
// Address: 004a8570
// Address Range: [[004a8570, 004a8647]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a8570(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a8570(int *param_1)

{
  int iVar1;
  int iVar2;
  int x;
  
  engine_font_cpp_FUN_004b0a20(param_1[0x47],param_1 + 7,*param_1,param_1[1],0,0xffffffff);
  if (param_1[6] == 0) {
    return;
  }
  iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0((CBitFont *)param_1[0x47],0x78);
  iVar1 = param_1[1] + iVar1;
  if (param_1[0x47] != _DAT_01549ac0) {
    _DAT_01c6b5c0 = 0;
    engine_2d_c_drawHLine_FUN_00402f30(*param_1,iVar1,*param_1 + param_1[2] + -1);
    return;
  }
  iVar2 = param_1[2];
  x = *param_1;
  if (CAlphaBitmap_01d19cd8.width < iVar2) {
    do {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d19cd8,x,iVar1,0xffff);
      iVar2 = iVar2 - CAlphaBitmap_01d19cd8.width;
      x = x + CAlphaBitmap_01d19cd8.width;
    } while (CAlphaBitmap_01d19cd8.width < iVar2);
  }
  engine_alphabit_cpp_FUN_0040d8a0
            (&CAlphaBitmap_01d19cd8,x,iVar1,0,0,iVar2 + -1,CAlphaBitmap_01d19cd8.height + -1,0xffff)
  ;
  return;
}
