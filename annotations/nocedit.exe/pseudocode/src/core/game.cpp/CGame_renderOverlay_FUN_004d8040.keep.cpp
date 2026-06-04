// Name: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
// MANUAL RECONSTRUCTION
// Address Range: [[004d8040, 004d8590]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

{
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  int iVar2;
  int iVar6;
  int iVar7;
  int iVar8;
  CBitFont *this_ptr_00;
  char **text;
  int iVar9;
  int iVar10;
  int iVar11;
  char local_164 [256];
  int local_44;
  CBitFont *local_40;
  CBitFont *local_38;
  int local_20;
  char (*local_1c) [256];
  float fVar1;
  
  iVar9 = g_WindowHeight;
  iVar1 = g_WindowWidth;
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= (double)this_ptr->message_timer) {
      iVar8 = 0xffff;
    }
    else {
      iVar8 = (int)ROUND(ROUND((double)this_ptr->message_timer * 65535));
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(iVar8);
    local_38 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_38 = g_SmallEditorFont;
    }
    iVar8 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_38,this_ptr->message_text,g_WrappedTextBuffer[0],10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(local_38,0x58);
    iVar10 = g_WindowHeight - iVar8 * iVar2;
    iVar6 = core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar10 = (iVar10 - iVar6) - iVar2;
    if (g_SmallEditorFont == local_38) {
      iVar10 = iVar10 + -7;
    }
    iVar11 = 0;
    iVar6 = g_WindowWidth + -1;
    if (0 < iVar8) {
      text = (char **)g_WrappedTextBuffer;
      do {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_38,(char *)text);
        iVar11 = iVar11 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80
                  (local_38,(char *)text,(iVar6 - iVar7) / 2,iVar10,0xf8,0);
        text = text + 0x40;
        iVar10 = iVar10 + iVar2;
      } while (iVar11 < iVar8);
    }
  }
  if (0.0 < g_OverlayDisplayTimer) {
    this_ptr_00 = g_MediumFont;
    if ((g_WindowHeight < 0x1e0) && (this_ptr_00 = g_TinyFont, g_WindowHeight < 0x180)) {
      this_ptr_00 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar8 = g_WindowHeight - iVar5;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    _sprintf(local_164,"%d - %s",g_ChapterDisplayYear,g_ChapterDisplayName);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (this_ptr_00,local_164,iVar4 * 2,(iVar8 - iVar3) - iVar4,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    local_44 = iVar9 / 0x28;
    local_40 = g_SmallEditorFont;
    if (0x280 < g_WindowWidth) {
      local_40 = g_TinyFont;
    }
    if (800 < g_WindowWidth) {
      local_40 = g_MediumFont;
    }
    iVar8 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(local_40,0x58);
    if (local_44 < iVar8) {
      local_44 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(local_40,0x58);
    }
    iVar8 = iVar1 / 0x50;
    iVar1 = iVar8 + iVar1 / 4;
    iVar9 = iVar9 - iVar9 / 0x50;
    local_20 = 0;
    if (0 < this_ptr->status_display_count) {
      local_1c = this_ptr->status_bar_names;
      do {
        iVar2 = iVar9 - local_44;
        iVar10 = 2;
        fVar1 = this_ptr->status_bar_values[local_20];
        if (fVar1 < (float)0.59999999999999998) {
          iVar10 = 0xfb;
        }
        if (fVar1 < (float)0.34999999999999998) {
          iVar10 = 1;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200(iVar8,iVar2,iVar1,iVar9,0,0);
        iVar6 = (int)ROUND(ROUND((float)((iVar1 - iVar8) + 1) * fVar1));
        if (0 < iVar6) {
          engine_2d_c_fillRectColor_FUN_00403170(iVar8,iVar2,iVar6 + iVar8,iVar9,iVar10);
        }
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_40,*local_1c,iVar8,iVar2,0xf8,0);
        local_1c = local_1c + 1;
        iVar9 = iVar9 - (local_44 * 3) / 2;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->status_display_count);
    }
  }
  return;
}
