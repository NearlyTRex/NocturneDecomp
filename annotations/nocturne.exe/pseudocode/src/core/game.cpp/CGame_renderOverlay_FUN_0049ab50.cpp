// Name: core_game.cpp_CGame_renderOverlay_FUN_0049ab50
// Address: 0049ab50
// Address Range: [[0049ab50, 0049b0a0]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderOverlay_FUN_0049ab50(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_0049ab50(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBitFont *this_ptr_00;
  char *pcVar5;
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
  
  local_60 = DAT_005b761c;
  local_5c = DAT_005b7620;
  local_64 = DAT_005b7620;
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= (double)this_ptr->message_timer) {
      iVar2 = 0xffff;
    }
    else {
      iVar2 = 0x49af32;
      dVar6 = round((double)this_ptr->message_timer * 65535);
      local_18 = (CGame *)(int)ROUND(dVar6);
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(iVar2);
    local_38 = g_CBitFont_PTR_014b9900;
    if (g_CDemonCamera_01fb8508.screen_width < 0x1e0) {
      local_38 = g_CBitFont_PTR_014b9904;
    }
    iVar2 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (local_38,this_ptr->message_text,(char *)0x1c71430,10,0x100,
                       (g_CDemonCamera_01fb8508.screen_width * 9) / 10);
    local_48 = iVar2;
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_38,0x58);
    iVar2 = DAT_005b7620 - iVar2 * iVar4;
    local_54 = iVar4;
    iVar3 = core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(0x01E56DA0);
    iVar4 = (iVar2 - iVar3) - iVar4;
    if (g_CBitFont_PTR_014b9904 == local_38) {
      iVar4 = iVar4 + -7;
    }
    iVar2 = 0;
    if (0 < local_48) {
      pcVar5 = (char *)0x1c71430;
      local_4c = DAT_005b761c + -1;
      do {
        iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_38,pcVar5);
        iVar2 = iVar2 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_00490980
                  (local_38,pcVar5,(local_4c - iVar3) / 2,iVar4,0xf8,0);
        pcVar5 = pcVar5 + 0x100;
        iVar4 = iVar4 + local_54;
      } while (iVar2 < local_48);
    }
  }
  if (0.0 < _DAT_01c78ac4) {
    this_ptr_00 = g_CBitFont_PTR_014b98f8;
    if ((DAT_005b7620 < 0x1e0) && (this_ptr_00 = g_CBitFont_PTR_014b98fc, DAT_005b7620 < 0x180)) {
      this_ptr_00 = g_CBitFont_PTR_014b9904;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr_00,0x58);
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(this_ptr_00,0x58);
    core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(0x01E56DA0);
    iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_004fe710(0x01E56DA0);
    iVar4 = DAT_005b7620 - iVar4;
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    _sprintf(local_164,"%d - %s");
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (this_ptr_00,local_164,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    iVar3 = local_60 >> 0x1f;
    iVar2 = local_60 + iVar3 * -4;
    local_44 = (CBitFont *)(local_5c / 0x28);
    local_40 = g_CBitFont_PTR_014b9904;
    if (0x280 < DAT_005b761c) {
      local_40 = g_CBitFont_PTR_014b98fc;
    }
    if (800 < DAT_005b761c) {
      local_40 = g_CBitFont_PTR_014b98f8;
    }
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_40,0x58);
    if ((int)local_44 < iVar4) {
      local_44 = (CBitFont *)engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar2 - (uint)(iVar3 << 1 < 0)) >> 2);
    iVar2 = local_64 - local_5c / 0x50;
    local_20 = (char *)0x0;
    if (0 < this_ptr->status_display_count) {
      local_1c = this_ptr->status_bar_names;
      local_50 = ((int)local_44 * 3) / 2;
      local_18 = this_ptr;
      do {
        iVar3 = local_3c;
        local_34 = iVar2 - (int)local_44;
        local_28 = local_58;
        iVar4 = 2;
        fVar1 = local_18->status_bar_values[0];
        if (fVar1 < (float)0.59999999999999998) {
          iVar4 = 0xfb;
        }
        if (fVar1 < (float)0.34999999999999998) {
          iVar4 = 1;
        }
        local_30 = local_34;
        local_24 = iVar2;
        engine_2d_c_fillRectWithBorder_FUN_00403ef0(local_3c,local_34,local_58,iVar2,0,0);
        local_14 = (local_28 - iVar3) + 1;
        dVar6 = round((double)((float)local_14 * fVar1));
        local_30 = (int)ROUND(dVar6);
        if (0 < local_30) {
          engine_2d_c_fillRectColor_FUN_00403e60
                    (iVar3,(int)local_38,local_30 + iVar3,local_28,iVar4);
        }
        pcVar5 = local_20;
        engine_font_cpp_CBitFont_drawText_FUN_00490980
                  (local_44,local_20,(int)local_40,local_34,0xf8,0);
        local_20 = pcVar5 + 0x100;
        local_1c = (char (*) [256])(*local_1c + 4);
        iVar2 = iVar2 - local_54;
      } while (local_24 + 1 < this_ptr->status_display_count);
    }
  }
  return;
}
