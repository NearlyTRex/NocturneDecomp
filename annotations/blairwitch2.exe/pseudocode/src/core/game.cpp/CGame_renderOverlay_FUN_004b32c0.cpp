// Name: core_game.cpp_CGame_renderOverlay_FUN_004b32c0
// Address: 004b32c0
// Address Range: [[004b32c0, 004b3810]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004b32c0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004b32c0(CGame *this_ptr)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CBitFont *this_ptr_00;
  char (*text) [256];
  double dVar6;
  char local_164 [256];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CBitFont *local_44;
  CBitFont *local_40;
  int local_3c;
  CBitFont *local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  char *local_20;
  char (*local_1c) [256];
  CGame *local_18;
  int local_14;
  
  local_60 = g_INT_006141b8;
  local_5c = g_INT_006141bc;
  local_64 = g_INT_006141bc;
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= (double)this_ptr->message_timer) {
      iVar3 = 0xffff;
    }
    else {
      iVar3 = 0x4b36a2;
      dVar6 = round
                        ((double)this_ptr->message_timer * 65535);
      local_18 = (CGame *)(int)ROUND(dVar6);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(iVar3);
    local_38 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_38 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004ab2b0
                      (local_38,this_ptr->message_text,g_WrappedTextBuffer[0],10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    local_48 = iVar3;
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_38,0x58);
    iVar3 = g_INT_006141bc - iVar3 * iVar5;
    local_54 = iVar5;
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = (iVar3 - iVar4) - iVar5;
    if (g_SmallEditorFont == local_38) {
      iVar5 = iVar5 + -7;
    }
    iVar3 = 0;
    if (0 < local_48) {
      text = g_WrappedTextBuffer;
      local_4c = g_INT_006141b8 + -1;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_38,*text);
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                  (local_38,*text,(local_4c - iVar4) / 2,iVar5,0xf8,0);
        text = text + 1;
        iVar5 = iVar5 + local_54;
      } while (iVar3 < local_48);
    }
  }
  if (0.0 < g_OverlayDisplayTimer) {
    this_ptr_00 = g_MediumFont;
    if ((g_INT_006141bc < 0x1e0) && (this_ptr_00 = g_TinyFont, g_INT_006141bc < 0x180)) {
      this_ptr_00 = g_SmallEditorFont;
    }
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(this_ptr_00,0x58);
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004ab530(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr);
    iVar5 = g_INT_006141bc - iVar5;
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    _sprintf(local_164,"%d - %s");
    engine_font_cpp_CBitFont_drawText_FUN_004a8df0
              (this_ptr_00,local_164,iVar4 * 2,(iVar5 - iVar3) - iVar4,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    iVar4 = local_60 >> 0x1f;
    iVar3 = local_60 + iVar4 * -4;
    local_44 = (CBitFont *)(local_5c / 0x28);
    local_40 = g_SmallEditorFont;
    if (0x280 < g_INT_006141b8) {
      local_40 = g_TinyFont;
    }
    if (800 < g_INT_006141b8) {
      local_40 = g_MediumFont;
    }
    iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_40,0x58);
    if ((int)local_44 < iVar5) {
      local_44 = (CBitFont *)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar3 - (uint)(iVar4 << 1 < 0)) >> 2);
    iVar3 = local_64 - local_5c / 0x50;
    local_20 = (char *)0x0;
    if (0 < this_ptr->status_display_count) {
      local_1c = this_ptr->status_bar_names;
      local_50 = ((int)local_44 * 3) / 2;
      local_18 = this_ptr;
      do {
        iVar4 = local_3c;
        local_34 = iVar3 - (int)local_44;
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
        engine_2d_c_fillRectWithBorder_FUN_00403250(local_3c,local_34,local_58,iVar3,0,0);
        local_14 = (local_28 - iVar4) + 1;
        dVar6 = round((double)((float)local_14 * fVar1));
        local_30 = (int)ROUND(dVar6);
        if (0 < local_30) {
          engine_2d_c_fillRectColor_FUN_004031c0
                    (iVar4,(int)local_38,local_30 + iVar4,local_28,iVar5);
        }
        pcVar2 = local_20;
        engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                  (local_44,local_20,(int)local_40,local_34,0xf8,0);
        local_20 = pcVar2 + 0x100;
        local_1c = (char (*) [256])(*local_1c + 4);
        iVar3 = iVar3 - local_54;
      } while (local_24 + 1 < this_ptr->status_display_count);
    }
  }
  return;
}
