// Name: FUN_004722b0
// Address: 004722b0
// Address Range: [[004722b0, 00472484]]
// Convention: unknown
// Signature: void FUN_004722b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004722b0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (_DAT_01bcd07c < 1) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x749;
    FUN_004c8440("CEditorTools::paintWindow() called but no window was opened!");
  }
  uVar4 = _DAT_01c00c70;
  iVar7 = (_DAT_01bcd07c + -1) * 0x1d8;
  piVar8 = (int *)(iVar7 + 0x1bcd080);
  engine_matrix_c_pushViewport_FUN_004ce7c0
            (*piVar8,*(uint *)(iVar7 + 0x1bcd084),(*(int *)(iVar7 + 0x1bcd088) - *piVar8) + 1,
             (*(int *)(iVar7 + 0x1bcd08c) - *(int *)(iVar7 + 0x1bcd084)) + 1);
  engine_2d_c_fillRectWithBorder_FUN_00403ef0
            (*piVar8 + 1,*(int *)(iVar7 + 0x1bcd084) + 1,*(int *)(iVar7 + 0x1bcd088) + -2,
             *(int *)(iVar7 + 0x1bcd08c) + -2,_DAT_01bcddc8,_DAT_01bcddcc);
  engine_matrix_c_popViewport_FUN_004ce920();
  uVar3 = _DAT_01c00c5c;
  if (*(char *)(iVar7 + 0x1bcd0b8) == '\0') {
    _DAT_01c00c70 = uVar4;
    return;
  }
  _DAT_01c00c5c = *(uint *)(iVar7 + 0x1bcd084);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  iVar1 = *piVar8;
  iVar2 = *(int *)(iVar7 + 0x1bcd088);
  iVar6 = iVar7 + 0x1bcd0b8;
  iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (_DAT_01bcd070,iVar6,_DAT_01bcd9bc / 2 + *(int *)(iVar7 + 0x1bcd084) + 1,
                     _DAT_01bcddd0,0xffffffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_01bcd070,iVar6,((iVar1 + iVar2) - iVar5) / 2);
  _DAT_01c00c70 = _DAT_01bcddcc;
  iVar6 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,iVar6);
  engine_2d_c_drawHLine_FUN_00403bd0
            (*piVar8 + 1,iVar6 + *(int *)(iVar7 + 0x1bcd084) + _DAT_01bcd9bc,
             *(int *)(iVar7 + 0x1bcd088) + -2);
  _DAT_01c00c5c = uVar3;
  _DAT_01c00c70 = uVar4;
  return;
}
