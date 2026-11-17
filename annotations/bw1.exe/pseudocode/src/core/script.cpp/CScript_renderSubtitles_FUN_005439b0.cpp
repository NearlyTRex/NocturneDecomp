// Name: core_script.cpp_CScript_renderSubtitles_FUN_005439b0
// Address: 005439b0
// Address Range: [[005439b0, 00543bff]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005439b0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_005439b0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int y;
  char *text;
  CBitFont *this_ptr_00;
  int iVar7;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar3 = core_charactr_cpp_getGameDeltaTime_FUN_004355d0(g_CGamePtr);
    g_FLOAT_01e818b0 = g_FLOAT_01e818b0 - fVar3 / 0.35f;
  }
  else {
    g_INT_01e7e0a0 = g_CGamePtr->letterbox_mode;
    fVar3 = core_charactr_cpp_getGameDeltaTime_FUN_004355d0(g_CGamePtr);
    g_FLOAT_01e818b0 = fVar3 / 0.35f + g_FLOAT_01e818b0;
  }
  iVar7 = g_INT_0061b49c;
  iVar1 = g_INT_0061b498;
  if (g_FLOAT_01e818b0 < 0.0) {
    g_FLOAT_01e818b0 = 0.0;
  }
  if (1.0 < g_FLOAT_01e818b0) {
    g_FLOAT_01e818b0 = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00543950(this_ptr);
  if (0 < iVar4) {
    if (g_INT_01e7e0a0 != 2) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_004031c0(0,iVar7 - iVar4,iVar1 + -1,iVar7 + -1,0);
  }
  iVar2 = g_INT_01c4f00c;
  if ((this_ptr->current_message[0] != '\0') && (g_CGamePtr->subtitle_mode != 0)) {
    this_ptr_00 = g_CBitFont_PTR_0152d23c;
    if (g_INT_0061b49c < 0x1e0) {
      this_ptr_00 = g_CBitFont_PTR_0152d240;
    }
    if ((g_INT_0061b49c < 0x180) && (this_ptr_00 = g_CBitFont_PTR_0152d250, g_INT_01d7f1b8 != 0)) {
      this_ptr_00 = g_CBitFont_PTR_0152d248;
    }
    iVar5 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                      (this_ptr_00,this_ptr->current_message,g_CHAR_ARRAY_01e7e0a8,10,0x400,
                       (g_INT_0061b498 * 9) / 10);
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(this_ptr_00,0x58);
    y = ((iVar7 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar4 = iVar6;
    if (iVar5 < 4) {
      iVar4 = iVar6 * (iVar5 + 1);
    }
    if (iVar7 - iVar4 < y) {
      y = iVar7 - iVar4;
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    iVar7 = 0;
    if (0 < iVar5) {
      text = g_CHAR_ARRAY_01e7e0a8;
      do {
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(this_ptr_00,text);
        iVar7 = iVar7 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                  (this_ptr_00,text,(iVar1 - iVar4) / 2,y,0xf8,0);
        text = text + 0x400;
        y = y + iVar6;
      } while (iVar7 < iVar5);
    }
  }
  g_INT_01c4f00c = iVar2;
  return;
}
