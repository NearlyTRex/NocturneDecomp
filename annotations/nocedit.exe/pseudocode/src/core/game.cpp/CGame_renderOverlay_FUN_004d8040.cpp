// Name: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
// Address Range: [[004d8040, 004d8590]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_renderOverlay_FUN_004d8040(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBitFont *pCVar5;
  char **text;
  BADSPACEBASE *in_ESP;
  char *text_string;
  double dVar6;
  CGame *pCVar7;
  float fStack_14c;
  char acStack_140 [220];
  int local_64;
  int local_60;
  int local_5c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  CBitFont *local_34;
  CBitFont *local_30;
  CBitFont *local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  local_60 = g_WindowWidth;
  local_5c = g_WindowHeight;
  local_64 = g_WindowHeight;
  if (ABS(this_ptr->message_timer) != 0.0) {
    if (1.0 <= (double)this_ptr->message_timer) {
      iVar2 = 0xffff;
    }
    else {
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)this_ptr->message_timer * 65535);
      iVar2 = (int)ROUND(dVar6);
      local_14 = iVar2;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(iVar2);
    local_34 = g_ThemeFont;
    if (g_CDemonCameraInstance.framebuffer_width < 0x1e0) {
      local_34 = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_34,this_ptr->message_text,(char *)&g_WrappedTextBuffer,10,0x100,
                       (g_CDemonCameraInstance.framebuffer_width * 9) / 10);
    local_40 = iVar2;
    iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_30,0x58);
    iVar2 = g_WindowHeight - iVar2 * iVar4;
    local_48 = iVar4;
    iVar3 = core_script_cpp_FUN_00559ac0();
    iVar4 = (iVar2 - iVar3) - iVar4;
    if (g_SmallEditorFont == local_28) {
      iVar4 = iVar4 + -7;
    }
    iVar2 = 0;
    if (0 < local_38) {
      text = &g_WrappedTextBuffer;
      local_3c = g_WindowWidth + -1;
      do {
        iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_28,(char *)text);
        iVar2 = iVar2 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (local_24,(char *)text,(local_38 - iVar3) / 2,iVar4,0xf8,0);
        text = text + 0x40;
        iVar4 = iVar4 + local_3c;
      } while (iVar2 < (int)local_30);
    }
  }
  if (0.0 < g_OverlayDisplayTimer) {
    pCVar5 = g_MediumFont;
    if ((g_WindowHeight < 0x1e0) && (pCVar5 = g_TinyFont, g_WindowHeight < 0x180)) {
      pCVar5 = g_SmallEditorFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar5,0x58);
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(pCVar5,0x58);
    core_script_cpp_FUN_00559ac0();
    iVar4 = core_script_cpp_FUN_00559ac0();
    iVar4 = g_WindowHeight - iVar4;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_140,"%d - %s");
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (pCVar5,&stack0xfffffe9c,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
    local_34 = (CBitFont *)(local_4c / 0x28);
    local_30 = g_SmallEditorFont;
    if (0x280 < g_WindowWidth) {
      local_30 = g_TinyFont;
    }
    if (800 < g_WindowWidth) {
      local_30 = g_MediumFont;
    }
    iVar2 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_30,0x58);
    if ((int)local_30 < iVar2) {
      local_2c = (CBitFont *)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_2c,0x58);
    }
    local_24 = (CBitFont *)(local_48 / 0x50);
    local_40 = (int)local_24 +
               ((int)((local_50 + (local_50 >> 0x1f) * -4) - (uint)((local_50 >> 0x1f) << 1 < 0)) >>
               2);
    iVar2 = local_4c - local_44 / 0x50;
    if (0 < this_ptr->status_display_count) {
      text_string = this_ptr->field101_0x38c;
      local_38 = ((int)local_2c * 3) / 2;
      pCVar7 = this_ptr;
      do {
        pCVar5 = local_24;
        local_1c = iVar2 - (int)local_2c;
        iVar3 = 2;
        if (*(float *)(pCVar7->field101_0x38c + 0x500) < (float)0.59999999999999998) {
          iVar3 = 0xfb;
        }
        if (*(float *)(pCVar7->field101_0x38c + 0x500) < (float)0.34999999999999998) {
          iVar3 = 1;
        }
        local_18 = local_1c;
        engine_2d_c_fillRectWithBorder_FUN_00403200((int)local_24,local_1c,local_40,iVar2,0,0);
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)((float)((iVar2 - (int)pCVar5) + 1) * fStack_14c));
        local_14 = (int)ROUND(dVar6);
        if (0 < local_14) {
          engine_2d_c_fillRectColor_FUN_00403170
                    ((int)pCVar5,local_1c,local_14 + (int)pCVar5,iVar2,iVar3);
        }
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (local_28,text_string,(int)local_24,local_18,0xf8,0);
        pCVar7 = (CGame *)(text_string + 0x100);
        iVar2 = iVar2 - (int)local_34;
        text_string = text_string + 1;
        piVar1 = &this_ptr->status_display_count;
        this_ptr = (CGame *)&this_ptr->game_pixy;
      } while ((int)text_string < *piVar1);
    }
  }
  return;
}
