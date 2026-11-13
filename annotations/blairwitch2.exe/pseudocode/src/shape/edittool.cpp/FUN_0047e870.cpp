// Name: shape_edittool.cpp_FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047efe6]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047e870(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047e870(void)

{
  char *text;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = _DAT_01c25590->max_char_width;
  _DAT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01c25590,0x6a);
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x8ea;
    core_main_c_FUN_004e4500("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = _DAT_01c35e60;
  iVar5 = (_DAT_01c2559c + -1) * 0x1f8;
  shape_edittool_cpp_paintWindowBackground_FUN_0047bca0();
  piVar6 = (int *)(iVar5 + 0x1c255a0);
  if (_DAT_01c25f84 == 0) {
    engine_matrix_c_pushViewport_FUN_004ea410
              (*piVar6,*(int *)(iVar5 + 0x1c255a4),(*(int *)(iVar5 + 0x1c255a8) - *piVar6) + 1,
               (*(int *)(iVar5 + 0x1c255ac) - *(int *)(iVar5 + 0x1c255a4)) + 1);
    uVar8 = _DAT_01c26388;
    iVar4 = *(int *)(iVar5 + 0x1c255ac);
    iVar7 = iVar4 + -2;
    local_18 = *(int *)(iVar5 + 0x1c255a8) + -2;
    local_20 = *(int *)(iVar5 + 0x1c255a4) + 1;
    local_1c = *piVar6 + 1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar7,_DAT_01c26388,_DAT_01c2638c);
    }
    else {
      uVar1 = _DAT_01c2638c;
      if (_DAT_01c25f84 != 0) {
        iVar2 = (_DAT_01c2638c & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar2] |
                   (uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar2] << 8);
        uVar1 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar1;
      engine_mini3d_cpp_drawRect_FUN_004f9340(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (_DAT_01c25f84 != 0) {
        iVar4 = (uVar8 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                   (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
        uVar8 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar8;
      engine_mini3d_cpp_fillRect_FUN_004f90d0(local_1c,local_20,local_18,iVar7);
    }
    uVar8 = _DAT_01c26390;
    if (_DAT_01c25f84 != 0) {
      iVar4 = (_DAT_01c26390 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                 (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      uVar8 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c255ac) + -1;
    iVar4 = *(int *)(iVar5 + 0x1c255a8) + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6,iVar7,iVar4);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390(*piVar6,iVar7,iVar4);
    }
    iVar4 = *(int *)(iVar5 + 0x1c255a8) + -1;
    iVar7 = *(int *)(iVar5 + 0x1c255ac) + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar4,*(int *)(iVar5 + 0x1c255a4),iVar7);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f93b0(iVar4,*(int *)(iVar5 + 0x1c255a4),iVar7);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
  }
  else {
    engine_mini3d_cpp_getRenderViewport_FUN_004f2ba0(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)(iVar5 + 0x1c255a8) + 1;
    engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
              ((float)*piVar6,(float)*(int *)(iVar5 + 0x1c255a4),(float)local_14,
               (float)(*(int *)(iVar5 + 0x1c255ac) + 1));
    uVar8 = _DAT_01c2638c;
    if (_DAT_01c25f84 != 0) {
      iVar4 = (_DAT_01c2638c & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                 (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      uVar8 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar8;
    engine_mini3d_cpp_drawRect_FUN_004f9340
              (*piVar6,*(int *)(iVar5 + 0x1c255a4),*(int *)(iVar5 + 0x1c255a8) + -1,
               *(int *)(iVar5 + 0x1c255ac) + -1);
    uVar8 = _DAT_01c26388;
    if (_DAT_01c25f84 != 0) {
      iVar4 = (_DAT_01c26388 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                 (uint)(byte)(&DAT_01c35839)[iVar4] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10);
      uVar8 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar8;
    engine_mini3d_cpp_fillRect_FUN_004f90d0
              (*piVar6 + 1,*(int *)(iVar5 + 0x1c255a4) + 1,*(int *)(iVar5 + 0x1c255a8) + -2,
               *(int *)(iVar5 + 0x1c255ac) + -2);
    uVar8 = _DAT_01c26390;
    if (_DAT_01c25f84 != 0) {
      iVar4 = (_DAT_01c26390 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                 (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
      uVar8 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar8;
    engine_mini3d_cpp_drawHLine_FUN_004f9390
              (*piVar6,*(int *)(iVar5 + 0x1c255ac) + -1,*(int *)(iVar5 + 0x1c255a8) + -1);
    engine_mini3d_cpp_drawVLine_FUN_004f93b0
              (*(int *)(iVar5 + 0x1c255a8) + -1,*(int *)(iVar5 + 0x1c255a4),
               *(int *)(iVar5 + 0x1c255ac) + -1);
    engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)(iVar5 + 0x1c255e8) != '\0') {
    local_30 = _DAT_01c35e4c;
    _DAT_01c35e4c = *(uint *)(iVar5 + 0x1c255a4);
    local_34 = _DAT_01c25f7c / 2 + *(int *)(iVar5 + 0x1c255a4) + -1;
    iVar4 = _DAT_01c25f7c * 5 >> 0x1f;
    iVar7 = *(int *)(iVar5 + 0x1c255a8) + -2;
    local_24 = ((int)((_DAT_01c25f7c * 5 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar6 + 1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar7,local_24,_DAT_01c26398);
    }
    else {
      uVar8 = _DAT_01c26398;
      if (_DAT_01c25f84 != 0) {
        iVar4 = (_DAT_01c26398 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar4] |
                   (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar4] << 8);
        uVar8 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar8;
      engine_mini3d_cpp_fillRect_FUN_004f90d0(local_2c,local_34,iVar7,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
    uVar10 = 0xffffffff;
    iVar2 = _DAT_01c25f7c / 2 + *(int *)(iVar5 + 0x1c255a4);
    text = (char *)(iVar5 + 0x1c255e8);
    iVar4 = *piVar6;
    iVar7 = *(int *)(iVar5 + 0x1c255a8);
    uVar9 = _DAT_01c26394;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(_DAT_01c25590,text);
    engine_font_cpp_FUN_004a8df0
              (_DAT_01c25590,text,((iVar4 + iVar7) - iVar3) / 2,iVar2,uVar9,uVar10);
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01c25590,text);
    iVar4 = _DAT_01c25f7c + iVar4;
    iVar7 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01c25590,&DAT_005d2432);
    if (iVar4 < iVar7 + _DAT_01c25f7c) {
      iVar4 = iVar7 + _DAT_01c25f7c;
    }
    iVar4 = iVar4 + *(int *)(iVar5 + 0x1c255a4);
    uVar8 = _DAT_01c2638c;
    if (_DAT_01c25f84 != 0) {
      iVar7 = (_DAT_01c2638c & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar7] |
                 (uint)(byte)(&DAT_01c35839)[iVar7] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar7] << 0x10);
      uVar8 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c255a8) + -2;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4,iVar7);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390(*piVar6 + 1,iVar4,iVar7);
    }
    if (_DAT_01c26390 != _DAT_01c2638c) {
      uVar8 = _DAT_01c26390;
      if (_DAT_01c25f84 != 0) {
        iVar7 = (_DAT_01c26390 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar7] |
                   (uint)(byte)(&DAT_01c35838)[iVar7] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar7] << 8);
        uVar8 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar8;
      iVar5 = *(int *)(iVar5 + 0x1c255a8) + -2;
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4 + -1,iVar5);
      }
      else {
        engine_mini3d_cpp_drawHLine_FUN_004f9390(*piVar6 + 1,iVar4 + -1,iVar5);
      }
    }
    _DAT_01c35e4c = local_30;
  }
  _DAT_01c35e60 = local_28;
  return;
}
