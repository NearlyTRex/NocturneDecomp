// Name: core_game.cpp_CGame_renderOverlay_FUN_004d8040
// Address: 004d8040
// Address Range: [[004d8040, 004d8590]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_renderOverlay_FUN_004d8040(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBitFont *pCVar5;
  int iVar6;
  char *text_string;
  int iVar7;
  uint in_EDX;
  uint extraout_EDX;
  char **text;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float fStack_14c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  CBitFont *local_34;
  CBitFont *local_30;
  CBitFont *local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_14;
  
  if (ABS(this_ptr->message_timer) != 0.0) {
    fVar1 = this_ptr->message_timer;
    if (1.0 < fVar1 || (fVar1 == 1.0) != 0) {
      iVar2 = 0xffff;
    }
    else {
      fVar8 = (float10)fVar1 * (float10)65535;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */(in_EDX,CONCAT22 /* combine 2-byte values */((short)((uint)this_ptr >> 0x10),
                                                  (ushort)(1.0 < fVar1) << 8 |
                                                  (ushort)NAN(fVar1) << 10 |
                                                  (ushort)(fVar1 == 1.0) << 0xe)));
      iVar2 = (int)ROUND(fVar8);
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
    local_48 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_30,0x58);
    iVar2 = g_WindowHeight - iVar2 * local_48;
    iVar3 = core_script_cpp_FUN_00559ac0();
    iVar2 = (iVar2 - iVar3) - local_48;
    if (g_SmallEditorFont == local_28) {
      iVar2 = iVar2 + -7;
    }
    iVar4 = 0;
    iVar3 = g_WindowWidth + -1;
    if (0 < local_38) {
      text = &g_WrappedTextBuffer;
      do {
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_28,(char *)text);
        iVar4 = iVar4 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (local_24,(char *)text,(local_38 - iVar7) / 2,iVar2,0xf8,0);
        text = text + 0x40;
        iVar2 = iVar2 + iVar3;
      } while (iVar4 < (int)local_30);
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
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffea4,"%d - %s",g_CurrentDisplayText);
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (pCVar5,&stack0xfffffea8,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((this_ptr->letterbox_mode == 0) && (0 < this_ptr->status_display_count)) {
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
    iVar2 = local_48 / 0x50;
    iVar3 = local_4c - local_44 / 0x50;
    if (0 < this_ptr->status_display_count) {
      do {
        pCVar5 = (CBitFont *)(iVar3 - (int)local_2c);
        iVar4 = 2;
        if (*(float *)(this_ptr->field101_0x38c + 0x500) < (float)0.59999999999999998) {
          iVar4 = 0xfb;
        }
        if (*(float *)(this_ptr->field101_0x38c + 0x500) < (float)0.34999999999999998) {
          iVar4 = 1;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (iVar2,(int)pCVar5,
                   iVar2 + ((int)((local_50 + (local_50 >> 0x1f) * -4) -
                                 (uint)((local_50 >> 0x1f) << 1 < 0)) >> 2),iVar3,0,0);
        iVar6 = iVar3 - iVar2;
        text_string = (char *)(iVar6 + 1);
        fVar8 = (float10)(int)text_string * (float10)fStack_14c;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,text_string));
        iVar7 = (int)ROUND(fVar8);
        if (0 < iVar7) {
          engine_2d_c_fillRectColor_FUN_00403170
                    (iVar2,local_14,iVar7 + iVar2,(int)this_ptr->field101_0x38c,iVar4);
        }
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                  (pCVar5,text_string,(int)pCVar5,iVar7,0xf8,0);
        iVar3 = iVar3 - (int)local_28;
      } while (iVar6 + 2 < this_ptr->status_display_count);
    }
  }
  return;
}
