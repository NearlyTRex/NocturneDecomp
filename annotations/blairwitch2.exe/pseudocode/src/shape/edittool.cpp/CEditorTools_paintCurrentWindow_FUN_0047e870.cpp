// Name: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_0047e870
// Address: 0047e870
// Address Range: [[0047e870, 0047efe6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047e870(CEditorTools *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047e870(CEditorTools *this_ptr)

{
  char *text;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int color_value;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CBitFont_PTR_01c25590 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_INT_01c25f78 = g_CBitFont_PTR_01c25590->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x6a)
  ;
  if (g_INT_01c2559c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x8ea;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::paintWindow() called but no window was opened!");
  }
  local_28 = g_INT_01c35e60;
  iVar1 = (g_INT_01c2559c + -1) * 0x1f8;
  shape_edittool_cpp_paintWindowBackground_FUN_0047bca0();
  piVar7 = (int *)(g_CHAR_ARRAY_01c255a0 + iVar1);
  if (g_INT_01c25f84 == 0) {
    engine_matrix_c_pushViewport_FUN_004ea410
              (*piVar7,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),
               (*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) - *piVar7) + 1,
               (*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) -
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4)) + 1);
    iVar6 = g_INT_01c26388;
    iVar4 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc);
    iVar5 = iVar4 + -2;
    local_18 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2;
    local_20 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4) + 1;
    local_1c = *piVar7 + 1;
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (local_1c,local_20,local_18,iVar5,g_INT_01c26388,g_INT_01c2638c);
    }
    else {
      iVar2 = g_INT_01c2638c;
      if (g_INT_01c25f84 != 0) {
        iVar2 = (g_INT_01c2638c & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)g_UCHAR_ARRAY_01c35838[iVar2 + 2] |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar2] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar2 + 1] << 8);
        iVar2 = g_INT_01c35e60;
      }
      g_INT_01c35e60 = iVar2;
      engine_mini3d_cpp_drawRect_FUN_004f9340(local_1c + -1,local_20 + -1,local_18 + 1,iVar4 + -1);
      if (g_INT_01c25f84 != 0) {
        iVar4 = (iVar6 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8);
        iVar6 = g_INT_01c35e60;
      }
      g_INT_01c35e60 = iVar6;
      engine_mini3d_cpp_fillRect_FUN_004f90d0(local_1c,local_20,local_18,iVar5);
    }
    iVar4 = g_INT_01c26390;
    if (g_INT_01c25f84 != 0) {
      iVar4 = (g_INT_01c26390 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8);
      iVar4 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar4;
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30
                (*piVar7,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1,
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390
                (*piVar7,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1,
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1);
    }
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_drawVLine_FUN_00403040
                (*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1,
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f93b0
                (*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1,
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),
                 *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1);
      engine_matrix_c_popViewport_FUN_004ea570();
    }
  }
  else {
    engine_mini3d_cpp_getRenderViewport_FUN_004f2ba0(&local_44,&local_40,&local_3c,&local_38);
    local_14 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + 1;
    engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0
              ((float)*piVar7,(float)*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),(float)local_14,
               (float)(*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + 1));
    iVar4 = g_INT_01c2638c;
    if (g_INT_01c25f84 != 0) {
      iVar4 = (g_INT_01c2638c & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8);
      iVar4 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar4;
    engine_mini3d_cpp_drawRect_FUN_004f9340
              (*piVar7,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1,
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1);
    iVar4 = g_INT_01c26388;
    if (g_INT_01c25f84 != 0) {
      iVar4 = (g_INT_01c26388 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10);
      iVar4 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar4;
    engine_mini3d_cpp_fillRect_FUN_004f90d0
              (*piVar7 + 1,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4) + 1,
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2,
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -2);
    iVar4 = g_INT_01c26390;
    if (g_INT_01c25f84 != 0) {
      iVar4 = (g_INT_01c26390 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar4 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar4 + 1] << 8);
      iVar4 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar4;
    engine_mini3d_cpp_drawHLine_FUN_004f9390
              (*piVar7,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1,
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1);
    engine_mini3d_cpp_drawVLine_FUN_004f93b0
              (*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -1,
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4),
               *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0xc) + -1);
    engine_mini3d_cpp_setRenderViewport_FUN_004f2ac0(local_44,local_40,local_3c,local_38);
  }
  if (g_CHAR_ARRAY_01c255a0[iVar1 + 0x48] != '\0') {
    local_30 = g_INT_01c35e4c;
    g_INT_01c35e4c = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4);
    local_34 = g_INT_01c25f7c / 2 + *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4) + -1;
    iVar6 = g_INT_01c25f7c * 5 >> 0x1f;
    iVar4 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8);
    local_24 = ((int)((g_INT_01c25f7c * 5 + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2) + local_34 +
               -1;
    local_2c = *piVar7 + 1;
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_2c,local_34,iVar4 + -2,local_24,g_INT_01c26398);
    }
    else {
      iVar6 = g_INT_01c26398;
      if (g_INT_01c25f84 != 0) {
        iVar6 = (g_INT_01c26398 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)g_UCHAR_ARRAY_01c35838[iVar6 + 2] |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar6] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar6 + 1] << 8);
        iVar6 = g_INT_01c35e60;
      }
      g_INT_01c35e60 = iVar6;
      engine_mini3d_cpp_fillRect_FUN_004f90d0(local_2c,local_34,iVar4 + -2,local_24);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
    color_value = -1;
    iVar2 = g_INT_01c25f7c / 2 + *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4);
    text = g_CHAR_ARRAY_01c255a0 + iVar1 + 0x48;
    iVar4 = *piVar7;
    iVar6 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8);
    iVar5 = g_INT_01c26394;
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_CBitFont_PTR_01c25590,text);
    engine_font_cpp_CBitFont_drawText_FUN_004a8df0
              (g_CBitFont_PTR_01c25590,text,((iVar4 + iVar6) - iVar3) / 2,iVar2,iVar5,color_value);
    iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(g_CBitFont_PTR_01c25590,text);
    iVar4 = g_INT_01c25f7c + iVar4;
    iVar6 = engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0
                      (g_CBitFont_PTR_01c25590,"j");
    if (iVar4 < iVar6 + g_INT_01c25f7c) {
      iVar4 = iVar6 + g_INT_01c25f7c;
    }
    iVar4 = iVar4 + *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 4);
    iVar6 = g_INT_01c2638c;
    if (g_INT_01c25f84 != 0) {
      iVar6 = (g_INT_01c2638c & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)g_UCHAR_ARRAY_01c35838[iVar6 + 2] |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar6 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c35838[iVar6] << 0x10);
      iVar6 = g_INT_01c35e60;
    }
    g_INT_01c35e60 = iVar6;
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30
                (*piVar7 + 1,iVar4,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390
                (*piVar7 + 1,iVar4,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2);
    }
    if (g_INT_01c26390 != g_INT_01c2638c) {
      iVar6 = g_INT_01c26390;
      if (g_INT_01c25f84 != 0) {
        iVar6 = (g_INT_01c26390 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)g_UCHAR_ARRAY_01c35838[iVar6 + 2] |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar6] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c35838[iVar6 + 1] << 8);
        iVar6 = g_INT_01c35e60;
      }
      g_INT_01c35e60 = iVar6;
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_drawHLine_FUN_00402f30
                  (*piVar7 + 1,iVar4 + -1,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2);
      }
      else {
        engine_mini3d_cpp_drawHLine_FUN_004f9390
                  (*piVar7 + 1,iVar4 + -1,*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 8) + -2);
      }
    }
    g_INT_01c35e4c = local_30;
  }
  g_INT_01c35e60 = local_28;
  return;
}
