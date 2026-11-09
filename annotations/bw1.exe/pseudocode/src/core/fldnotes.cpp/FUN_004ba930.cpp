// Name: core_fldnotes.cpp_FUN_004ba930
// Address: 004ba930
// Address Range: [[004ba930, 004baa07]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004ba930(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004ba930(int *param_1)

{
  int iVar1;
  int iVar2;
  int x;
  
  engine_font_cpp_FUN_004c1dd0(param_1[0x47],param_1 + 7,*param_1,param_1[1],0,0xffffffff);
  if (param_1[6] == 0) {
    return;
  }
  iVar1 = engine_font_cpp_FUN_004c4510((CBitFont *)param_1[0x47],0x78);
  iVar1 = param_1[1] + iVar1;
  if (param_1[0x47] != _DAT_0152d254) {
    _DAT_01c4f020 = 0;
    engine_2d_c_drawHLine_FUN_00402f30(*param_1,iVar1,*param_1 + param_1[2] + -1);
    return;
  }
  iVar2 = param_1[2];
  x = *param_1;
  if ((int)CAlphaBitmap_01cc7cc0._12_4_ < iVar2) {
    do {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01cc7cc0,x,iVar1,0xffff);
      iVar2 = iVar2 - CAlphaBitmap_01cc7cc0._12_4_;
      x = x + CAlphaBitmap_01cc7cc0._12_4_;
    } while ((int)CAlphaBitmap_01cc7cc0._12_4_ < iVar2);
  }
  engine_alphabit_cpp_FUN_0040d660
            (&CAlphaBitmap_01cc7cc0,x,iVar1,0,0,iVar2 + -1,CAlphaBitmap_01cc7cc0._16_4_ + -1,0xffff)
  ;
  return;
}
