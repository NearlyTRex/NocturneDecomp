// Name: core_game.cpp_CGame_renderOverlay_FUN_004b47d0
// Address: 004b47d0
// Address Range: [[004b47d0, 004b4d4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004b47d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004b47d0(CGame *this_ptr)

{
  char cVar1;
  float fVar2;
  char (*pacVar3) [256];
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CBitFont *pCVar8;
  float10 fVar9;
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
  CGame *local_1c;
  char (*local_18) [256];
  int local_14;
  
  local_60 = DAT_005fba18;
  local_5c = DAT_005fba1c;
  local_64 = DAT_005fba1c;
  iVar6 = -1;
  pcVar7 = this_ptr->end_timer_text;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
              (_DAT_01549aa0,0,0x27f,10,0xf8,0,this_ptr->end_timer_text);
  }
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= this_ptr->message_timer) {
      iVar6 = 0xffff;
    }
    else {
      fVar9 = (float10)this_ptr->message_timer * (float10)_DAT_005c2220;
      round();
      iVar6 = (int)ROUND(fVar9);
      local_14 = iVar6;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(iVar6);
    local_38 = _DAT_01549aa8;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_38 = _DAT_01549ab4;
    }
    pCVar8 = local_38;
    iVar6 = engine_font_cpp_FUN_004b2e40
                      (local_38,this_ptr->message_text,0x1d1b110,10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    local_48 = iVar6;
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(pCVar8,0x58);
    iVar6 = DAT_005fba1c - iVar6 * iVar4;
    local_54 = iVar4;
    iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr);
    iVar4 = (iVar6 - iVar5) - iVar4;
    if (pCVar8 == _DAT_01549ab4) {
      iVar4 = iVar4 + -7;
    }
    iVar6 = 0;
    if (0 < local_48) {
      pcVar7 = (char *)0x1d1b110;
      local_4c = DAT_005fba18 + -1;
      do {
        iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_38,pcVar7);
        iVar6 = iVar6 + 1;
        engine_font_cpp_FUN_004b0a20(local_38,pcVar7,(local_4c - iVar5) / 2,iVar4,0xf8,0);
        pcVar7 = pcVar7 + 0x100;
        iVar4 = iVar4 + local_54;
      } while (iVar6 < local_48);
    }
  }
  if (0.0 < _DAT_01d22af4) {
    pCVar8 = _DAT_01549aa0;
    if ((DAT_005fba1c < 0x1e0) && (pCVar8 = _DAT_01549aa4, DAT_005fba1c < 0x180)) {
      pCVar8 = _DAT_01549ab4;
    }
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(pCVar8,0x58);
    iVar5 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(pCVar8,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr);
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00528f60(g_CScriptPtr);
    iVar4 = DAT_005fba1c - iVar4;
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    _sprintf(local_164,"?%d - %s" + 1);
    engine_font_cpp_FUN_004b0a20(pCVar8,local_164,iVar5 * 2,(iVar4 - iVar6) - iVar5,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    iVar5 = local_60 >> 0x1f;
    iVar6 = local_60 + iVar5 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_01549ab4;
    if (0x280 < DAT_005fba18) {
      local_40 = _DAT_01549aa4;
    }
    if (800 < DAT_005fba18) {
      local_40 = _DAT_01549aa0;
    }
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_40,0x58);
    if (local_44 < iVar4) {
      local_44 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_50 = local_3c + ((int)(iVar6 - (uint)(iVar5 << 1 < 0)) >> 2);
    iVar6 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < this_ptr->status_display_count) {
      local_18 = this_ptr->status_bar_names;
      local_58 = (local_44 * 3) / 2;
      local_1c = this_ptr;
      do {
        iVar5 = local_3c;
        local_34 = iVar6 - local_44;
        local_30 = local_50;
        iVar4 = 2;
        fVar2 = local_1c->status_bar_values[0];
        if (fVar2 < (float)_DAT_005c2228) {
          iVar4 = 0xfb;
        }
        if (fVar2 < (float)_DAT_005c2230) {
          iVar4 = 1;
        }
        local_2c = local_34;
        local_28 = iVar6;
        engine_2d_c_fillRectWithBorder_FUN_00403250(local_3c,local_34,local_50,iVar6,0,0);
        local_14 = (local_30 - iVar5) + 1;
        fVar9 = (float10)local_14 * (float10)fVar2;
        round();
        local_24 = (int)ROUND(fVar9);
        if (0 < local_24) {
          engine_2d_c_fillRectColor_FUN_004031c0(iVar5,local_2c,local_24 + iVar5,local_28,iVar4);
        }
        pacVar3 = local_18;
        engine_font_cpp_FUN_004b0a20(local_40,local_18,local_3c,local_34,0xf8,0);
        local_18 = pacVar3 + 1;
        local_1c = (CGame *)&local_1c->game_pixy;
        iVar6 = iVar6 - local_58;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->status_display_count);
    }
  }
  return;
}
