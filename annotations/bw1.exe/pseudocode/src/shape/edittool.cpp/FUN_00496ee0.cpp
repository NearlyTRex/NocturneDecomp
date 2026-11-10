// Name: shape_edittool.cpp_FUN_00496ee0
// Address: 00496ee0
// Address Range: [[00496ee0, 00497656]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00496ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00496ee0(void)

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
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (_DAT_01c3eb5c < 1) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x949;
    core_main_c_FUN_005030e0("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = _DAT_01c4f020;
  iVar5 = (_DAT_01c3eb5c + -1) * 0x1f8;
  shape_edittool_cpp_paintWindowBackground_FUN_004941e0();
  piVar6 = (int *)(iVar5 + 0x1c3eb60);
  if (_DAT_01c3f544 == 0) {
    engine_matrix_c_pushViewport_FUN_005090b0
              (*piVar6,*(int *)(iVar5 + 0x1c3eb64),(*(int *)(iVar5 + 0x1c3eb68) - *piVar6) + 1,
               (*(int *)(iVar5 + 0x1c3eb6c) - *(int *)(iVar5 + 0x1c3eb64)) + 1);
    uVar8 = _DAT_01c3f548;
    iVar4 = *(int *)(iVar5 + 0x1c3eb6c);
    iVar7 = iVar4 + -2;
    local_18 = *(int *)(iVar5 + 0x1c3eb68) + -2;
    local_20 = *(int *)(iVar5 + 0x1c3eb64) + 1;
    local_1c = *piVar6 + 1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar7,_DAT_01c3f548,_DAT_01c3f54c);
    }
    else {
      uVar1 = _DAT_01c3f54c;
      if (_DAT_01c3f544 != 0) {
        iVar2 = (_DAT_01c3f54c & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar2] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8);
        uVar1 = _DAT_01c4f020;
      }
      _DAT_01c4f020 = uVar1;
      engine_mini3d_cpp_FUN_00518290(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (_DAT_01c3f544 != 0) {
        iVar4 = (uVar8 & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
        uVar8 = _DAT_01c4f020;
      }
      _DAT_01c4f020 = uVar8;
      engine_mini3d_cpp_FUN_00518010(local_1c,local_20,local_18,iVar7);
    }
    uVar8 = _DAT_01c3f550;
    if (_DAT_01c3f544 != 0) {
      iVar4 = (_DAT_01c3f550 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar8 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c3eb6c) + -1;
    iVar4 = *(int *)(iVar5 + 0x1c3eb68) + -1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6,iVar7,iVar4);
    }
    else {
      engine_mini3d_cpp_FUN_005182e0(*piVar6,iVar7,iVar4);
    }
    iVar4 = *(int *)(iVar5 + 0x1c3eb68) + -1;
    iVar7 = *(int *)(iVar5 + 0x1c3eb6c) + -1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar4,*(int *)(iVar5 + 0x1c3eb64),iVar7);
      engine_matrix_c_popViewport_FUN_00509210();
    }
    else {
      engine_mini3d_cpp_FUN_00518300(iVar4,*(int *)(iVar5 + 0x1c3eb64),iVar7);
      engine_matrix_c_popViewport_FUN_00509210();
    }
  }
  else {
    unkafter_minecar_cpp_FUN_00511980(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)(iVar5 + 0x1c3eb68) + 1;
    unkafter_minecar_cpp_FUN_00511850
              ((float)*piVar6,(float)*(int *)(iVar5 + 0x1c3eb64),(float)local_14,
               (float)(*(int *)(iVar5 + 0x1c3eb6c) + 1));
    uVar8 = _DAT_01c3f54c;
    if (_DAT_01c3f544 != 0) {
      iVar4 = (_DAT_01c3f54c & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar8 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar8;
    engine_mini3d_cpp_FUN_00518290
              (*piVar6,*(uint *)(iVar5 + 0x1c3eb64),*(int *)(iVar5 + 0x1c3eb68) + -1,
               *(int *)(iVar5 + 0x1c3eb6c) + -1);
    uVar8 = _DAT_01c3f548;
    if (_DAT_01c3f544 != 0) {
      iVar4 = (_DAT_01c3f548 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10);
      uVar8 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar8;
    engine_mini3d_cpp_FUN_00518010
              (*piVar6 + 1,*(int *)(iVar5 + 0x1c3eb64) + 1,*(int *)(iVar5 + 0x1c3eb68) + -2,
               *(int *)(iVar5 + 0x1c3eb6c) + -2);
    uVar8 = _DAT_01c3f550;
    if (_DAT_01c3f544 != 0) {
      iVar4 = (_DAT_01c3f550 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
      uVar8 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar8;
    engine_mini3d_cpp_FUN_005182e0
              (*piVar6,*(int *)(iVar5 + 0x1c3eb6c) + -1,*(int *)(iVar5 + 0x1c3eb68) + -1);
    engine_mini3d_cpp_FUN_00518300
              (*(int *)(iVar5 + 0x1c3eb68) + -1,*(uint *)(iVar5 + 0x1c3eb64),
               *(int *)(iVar5 + 0x1c3eb6c) + -1);
    unkafter_minecar_cpp_FUN_00511850(local_44,local_40,local_3c,local_38);
  }
  if (*(char *)(iVar5 + 0x1c3eba8) != '\0') {
    local_30 = _DAT_01c4f00c;
    _DAT_01c4f00c = *(uint *)(iVar5 + 0x1c3eb64);
    local_34 = _DAT_01c3f53c / 2 + *(int *)(iVar5 + 0x1c3eb64) + -1;
    iVar4 = _DAT_01c3f53c * 5 >> 0x1f;
    iVar7 = *(int *)(iVar5 + 0x1c3eb68) + -2;
    local_24 = ((int)((_DAT_01c3f53c * 5 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar6 + 1;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar7,local_24,_DAT_01c3f558);
    }
    else {
      uVar8 = _DAT_01c3f558;
      if (_DAT_01c3f544 != 0) {
        iVar4 = (_DAT_01c3f558 & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
        uVar8 = _DAT_01c4f020;
      }
      _DAT_01c4f020 = uVar8;
      engine_mini3d_cpp_FUN_00518010(local_2c,local_34,iVar7,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_FUN_00512320(0x3f800000);
    uVar10 = 0xffffffff;
    iVar2 = _DAT_01c3f53c / 2 + *(int *)(iVar5 + 0x1c3eb64);
    text = (char *)(iVar5 + 0x1c3eba8);
    iVar4 = *piVar6;
    iVar7 = *(int *)(iVar5 + 0x1c3eb68);
    uVar9 = _DAT_01c3f554;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,text);
    engine_font_cpp_FUN_004c1dd0
              (_DAT_01c3eb50,text,((iVar4 + iVar7) - iVar3) / 2,iVar2,uVar9,uVar10);
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,text);
    iVar4 = _DAT_01c3f53c + iVar4;
    iVar7 = engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,&DAT_005dc1cb);
    if (iVar4 < iVar7 + _DAT_01c3f53c) {
      iVar4 = iVar7 + _DAT_01c3f53c;
    }
    iVar4 = iVar4 + *(int *)(iVar5 + 0x1c3eb64);
    uVar8 = _DAT_01c3f54c;
    if (_DAT_01c3f544 != 0) {
      iVar7 = (_DAT_01c3f54c & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar7] |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar7] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar7] << 0x10);
      uVar8 = _DAT_01c4f020;
    }
    _DAT_01c4f020 = uVar8;
    iVar7 = *(int *)(iVar5 + 0x1c3eb68) + -2;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4,iVar7);
    }
    else {
      engine_mini3d_cpp_FUN_005182e0(*piVar6 + 1,iVar4,iVar7);
    }
    if (_DAT_01c3f550 != _DAT_01c3f54c) {
      uVar8 = _DAT_01c3f550;
      if (_DAT_01c3f544 != 0) {
        iVar7 = (_DAT_01c3f550 & 0xff) * 3;
        engine_mini3d_cpp_FUN_00517d50
                  ((uint)(byte)(&DAT_01c4e9fa)[iVar7] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar7] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar7] << 8);
        uVar8 = _DAT_01c4f020;
      }
      _DAT_01c4f020 = uVar8;
      iVar5 = *(int *)(iVar5 + 0x1c3eb68) + -2;
      if (_DAT_01c3f544 == 0) {
        engine_2d_c_drawHLine_FUN_00402f30(*piVar6 + 1,iVar4 + -1,iVar5);
      }
      else {
        engine_mini3d_cpp_FUN_005182e0(*piVar6 + 1,iVar4 + -1,iVar5);
      }
    }
    _DAT_01c4f00c = local_30;
  }
  _DAT_01c4f020 = local_28;
  return;
}
