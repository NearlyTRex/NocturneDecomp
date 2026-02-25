// Name: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
// Address Range: [[004d8040, 004d8590]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

{
  float fVar1;
  char (*pacVar2) [256];
  int iVar3;
  int iVar4;
  int iVar5;
  CBitFont *this_ptr_00;
  char **text;
  char local_164 [256];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  CBitFont *local_40;
  int local_3c;
  CBitFont *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char (*local_1c) [256];
  CGame *local_18;
  int local_14;
  
  local_60 = g_WindowWidth;
  local_5c = g_WindowHeight;
  local_64 = g_WindowHeight;
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= (double)this_ptr->message_timer) {
      iVar3 = 0xffff;
    }
    else {
      iVar3 = (int)ROUND(ROUND((double)this_ptr->message_timer * 65535));
      local_14 = iVar3;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(iVar3);
    local_38 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_38 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_38,this_ptr->message_text,(char *)&g_WrappedTextBuffer,10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    local_48 = iVar3;
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_38,0x58);
    iVar3 = g_WindowHeight - iVar3 * iVar5;
    local_54 = iVar5;
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar5 = (iVar3 - iVar4) - iVar5;
    if (g_SmallEditorFont == local_38) {
      iVar5 = iVar5 + -7;
    }
    iVar3 = 0;
    if (0 < local_48) {
      text = &g_WrappedTextBuffer;
      local_4c = g_WindowWidth + -1;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_38,(char *)text);
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80
                  (local_38,(char *)text,(local_4c - iVar4) / 2,iVar5,0xf8,0);
        text = text + 0x40;
        iVar5 = iVar5 + local_54;
      } while (iVar3 < local_48);
    }
  }
  if (0.0 < g_OverlayDisplayTimer) {
    this_ptr_00 = g_MediumFont;
    if ((g_WindowHeight < 0x1e0) && (this_ptr_00 = g_TinyFont, g_WindowHeight < 0x180)) {
      this_ptr_00 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(g_CScriptPtr);
    iVar5 = g_WindowHeight - iVar5;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    _sprintf
              (local_164,"%d - %s",g_CurrentDisplayText,g_ChapterDisplayName);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (this_ptr_00,local_164,iVar4 * 2,(iVar5 - iVar3) - iVar4,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    iVar4 = local_60 >> 0x1f;
    iVar3 = local_60 + iVar4 * -4;
    local_44 = local_5c / 0x28;
    local_40 = g_SmallEditorFont;
    if (0x280 < g_WindowWidth) {
      local_40 = g_TinyFont;
    }
    if (800 < g_WindowWidth) {
      local_40 = g_MediumFont;
    }
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_40,0x58);
    if (local_44 < iVar5) {
      local_44 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2);
    iVar3 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < this_ptr->status_display_count) {
      local_1c = this_ptr->status_bar_names;
      local_50 = (local_44 * 3) / 2;
      local_18 = this_ptr;
      do {
        iVar4 = local_3c;
        local_34 = iVar3 - local_44;
        local_28 = local_58;
        iVar5 = 2;
        fVar1 = local_18->status_bar_values[0];
        if (fVar1 < (float)0.59999999999999998) {
          iVar5 = 0xfb;
        }
        if (fVar1 < (float)0.34999999999999998) {
          iVar5 = 1;
        }
        local_30 = local_34;
        local_24 = iVar3;
        engine_2d_c_fillRectWithBorder_FUN_00403200(local_3c,local_34,local_58,iVar3,0,0);
        local_14 = (local_28 - iVar4) + 1;
        local_2c = (int)ROUND(ROUND((float)local_14 * fVar1));
        if (0 < local_2c) {
          engine_2d_c_fillRectColor_FUN_00403170(iVar4,local_34,local_2c + iVar4,local_24,iVar5);
        }
        pacVar2 = local_1c;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_40,*local_1c,local_3c,local_30,0xf8,0);
        local_1c = pacVar2 + 1;
        local_18 = (CGame *)&local_18->game_pixy;
        iVar3 = iVar3 - local_50;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->status_display_count);
    }
  }
  return;
}
