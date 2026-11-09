// Name: shape_edittool.cpp_FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047efe6]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047e870(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047e870(void)

{
  char *text_string;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
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
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x8ea;
    core_main_c_FUN_004e4500("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = _DAT_01c35e60;
  iVar4 = (_DAT_01c2559c + -1) * 0x1f8;
  shape_edittool_cpp_FUN_0047bca0();
  piVar5 = (int *)(iVar4 + 0x1c255a0);
  if (_DAT_01c25f84 == 0) {
    engine_matrix_c_pushViewport_FUN_004ea410
              (*piVar5,*(int *)(iVar4 + 0x1c255a4),(*(int *)(iVar4 + 0x1c255a8) - *piVar5) + 1,
               (*(int *)(iVar4 + 0x1c255ac) - *(int *)(iVar4 + 0x1c255a4)) + 1);
    uVar7 = _DAT_01c26388;
    iVar3 = *(int *)(iVar4 + 0x1c255ac);
    iVar6 = iVar3 + -2;
    local_18 = *(int *)(iVar4 + 0x1c255a8) + -2;
    local_20 = *(int *)(iVar4 + 0x1c255a4) + 1;
    local_1c = *piVar5 + 1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar6,_DAT_01c26388,_DAT_01c2638c);
    }
    else {
      uVar1 = _DAT_01c2638c;
      if (_DAT_01c25f84 != 0) {
        iVar2 = (_DAT_01c2638c & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar2] |
                   (uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar2] << 8);
        uVar1 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar1;
      engine_mini3d_cpp_FUN_004f9340(local_1c + -1,local_20 + -1,local_18 + 1,iVar3 + -1);
      if (_DAT_01c25f84 != 0) {
        iVar3 = (uVar7 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                   (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
        uVar7 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar7;
      engine_mini3d_cpp_FUN_004f90d0(local_1c,local_20,local_18,iVar6);
    }
    uVar7 = _DAT_01c26390;
    if (_DAT_01c25f84 != 0) {
      iVar3 = (_DAT_01c26390 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
      uVar7 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar7;
    iVar6 = *(int *)(iVar4 + 0x1c255ac) + -1;
    iVar3 = *(int *)(iVar4 + 0x1c255a8) + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar5,iVar6,iVar3);
    }
    else {
      engine_mini3d_cpp_FUN_004f9390(*piVar5,iVar6,iVar3);
    }
    iVar3 = *(int *)(iVar4 + 0x1c255a8) + -1;
    iVar6 = *(int *)(iVar4 + 0x1c255ac) + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar3,*(int *)(iVar4 + 0x1c255a4),iVar6);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
    else {
      engine_mini3d_cpp_FUN_004f93b0(iVar3,*(int *)(iVar4 + 0x1c255a4),iVar6);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
  }
  else {
    unkafter_minecar_cpp_FUN_004f2ba0((CEdCheck *)&local_44);
    local_14 = *(int *)(iVar4 + 0x1c255a8) + 1;
    unkafter_minecar_cpp_FUN_004f2ac0
              ((float)*piVar5,(float)*(int *)(iVar4 + 0x1c255a4),(float)local_14,
               (float)(*(int *)(iVar4 + 0x1c255ac) + 1));
    uVar7 = _DAT_01c2638c;
    if (_DAT_01c25f84 != 0) {
      iVar3 = (_DAT_01c2638c & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
      uVar7 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar7;
    engine_mini3d_cpp_FUN_004f9340
              (*piVar5,*(uint *)(iVar4 + 0x1c255a4),*(int *)(iVar4 + 0x1c255a8) + -1,
               *(int *)(iVar4 + 0x1c255ac) + -1);
    uVar7 = _DAT_01c26388;
    if (_DAT_01c25f84 != 0) {
      iVar3 = (_DAT_01c26388 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10);
      uVar7 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar7;
    engine_mini3d_cpp_FUN_004f90d0
              (*piVar5 + 1,*(int *)(iVar4 + 0x1c255a4) + 1,*(int *)(iVar4 + 0x1c255a8) + -2,
               *(int *)(iVar4 + 0x1c255ac) + -2);
    uVar7 = _DAT_01c26390;
    if (_DAT_01c25f84 != 0) {
      iVar3 = (_DAT_01c26390 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
      uVar7 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar7;
    engine_mini3d_cpp_FUN_004f9390
              (*piVar5,*(int *)(iVar4 + 0x1c255ac) + -1,*(int *)(iVar4 + 0x1c255a8) + -1);
    engine_mini3d_cpp_FUN_004f93b0
              (*(int *)(iVar4 + 0x1c255a8) + -1,*(uint *)(iVar4 + 0x1c255a4),
               *(int *)(iVar4 + 0x1c255ac) + -1);
    unkafter_minecar_cpp_FUN_004f2ac0(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)(iVar4 + 0x1c255e8) != '\0') {
    local_30 = _DAT_01c35e4c;
    _DAT_01c35e4c = *(uint *)(iVar4 + 0x1c255a4);
    local_34 = _DAT_01c25f7c / 2 + *(int *)(iVar4 + 0x1c255a4) + -1;
    iVar3 = _DAT_01c25f7c * 5 >> 0x1f;
    iVar6 = *(int *)(iVar4 + 0x1c255a8) + -2;
    local_24 = ((int)((_DAT_01c25f7c * 5 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar5 + 1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar6,local_24,_DAT_01c26398);
    }
    else {
      uVar7 = _DAT_01c26398;
      if (_DAT_01c25f84 != 0) {
        iVar3 = (_DAT_01c26398 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                   (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
        uVar7 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar7;
      engine_mini3d_cpp_FUN_004f90d0(local_2c,local_34,iVar6,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_FUN_004f3570(0x3f800000);
    text_string = (char *)(iVar4 + 0x1c255e8);
    iVar3 = *piVar5;
    iVar6 = *(int *)(iVar4 + 0x1c255a8);
    iVar2 = engine_font_cpp_FUN_004aaf00
                      (_DAT_01c25590,text_string,_DAT_01c25f7c / 2 + *(int *)(iVar4 + 0x1c255a4),
                       _DAT_01c26394,0xffffffff);
    engine_font_cpp_FUN_004a8df0(_DAT_01c25590,text_string,((iVar3 + iVar6) - iVar2) / 2);
    iVar3 = engine_font_cpp_FUN_004aafb0(_DAT_01c25590,text_string);
    iVar3 = _DAT_01c25f7c + iVar3;
    iVar6 = engine_font_cpp_FUN_004aafb0(_DAT_01c25590,&DAT_005d2432);
    if (iVar3 < iVar6 + _DAT_01c25f7c) {
      iVar3 = iVar6 + _DAT_01c25f7c;
    }
    iVar3 = iVar3 + *(int *)(iVar4 + 0x1c255a4);
    uVar7 = _DAT_01c2638c;
    if (_DAT_01c25f84 != 0) {
      iVar6 = (_DAT_01c2638c & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar6] |
                 (uint)(byte)(&DAT_01c35839)[iVar6] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar6] << 0x10);
      uVar7 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar7;
    iVar6 = *(int *)(iVar4 + 0x1c255a8) + -2;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar5 + 1,iVar3,iVar6);
    }
    else {
      engine_mini3d_cpp_FUN_004f9390(*piVar5 + 1,iVar3,iVar6);
    }
    if (_DAT_01c26390 != _DAT_01c2638c) {
      uVar7 = _DAT_01c26390;
      if (_DAT_01c25f84 != 0) {
        iVar6 = (_DAT_01c26390 & 0xff) * 3;
        engine_mini3d_cpp_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar6] |
                   (uint)(byte)(&DAT_01c35838)[iVar6] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar6] << 8);
        uVar7 = _DAT_01c35e60;
      }
      _DAT_01c35e60 = uVar7;
      iVar4 = *(int *)(iVar4 + 0x1c255a8) + -2;
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_drawHLine_FUN_00402f30(*piVar5 + 1,iVar3 + -1,iVar4);
      }
      else {
        engine_mini3d_cpp_FUN_004f9390(*piVar5 + 1,iVar3 + -1,iVar4);
      }
    }
    _DAT_01c35e4c = local_30;
  }
  _DAT_01c35e60 = local_28;
  return;
}
