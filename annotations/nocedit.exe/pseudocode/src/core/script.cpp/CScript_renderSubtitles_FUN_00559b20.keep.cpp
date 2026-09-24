// Name: core_script.cpp_CScript_renderSubtitles_FUN_00559b20
// Address: 00559b20
// MANUAL RECONSTRUCTION
// Address Range: [[00559b20, 00559d70]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_00559b20(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_renderSubtitles_FUN_00559b20(CScript *this_ptr)

{
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int y;
  int iVar7;
  float fVar1;
  int iVar8;
  char (*text) [1024];
  CBitFont *this_ptr_00;
  int iVar3;
  int iVar1;
  int iVar2;
#if !NOCTURNE_AUTHENTIC_HUD_SCALE
  int bar_scale;
  int full_letterbox;
#endif

  if (g_CGamePtr->letterbox_mode == 0) {
    fVar3 = core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(g_CGamePtr);
    g_ScriptTimeScale = g_ScriptTimeScale - fVar3 / 0.35f;
  }
  else {
    g_PreviousLetterboxMode = g_CGamePtr->letterbox_mode;
    fVar1 = core_charactr_cpp_getGameDeltaTime_FUN_0042f9e0(g_CGamePtr);
    g_ScriptTimeScale = fVar1 / 0.35f + g_ScriptTimeScale;
  }
  iVar3 = g_WindowHeight;
  iVar1 = g_WindowWidth;
  if (g_ScriptTimeScale < 0.0) {
    g_ScriptTimeScale = 0.0;
  }
  if (1.0 < g_ScriptTimeScale) {
    g_ScriptTimeScale = 1.0;
  }
  iVar4 = core_script_cpp_CScript_getLetterboxHeight_FUN_00559ac0(this_ptr);
  if (0 < iVar4) {
#if !NOCTURNE_AUTHENTIC_NETPLAY
    if (g_ModalDialogActive != 0) {
      nocturne_ui_push_screen_clip();
    }
#endif
    if (g_PreviousLetterboxMode != 2) {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,iVar1 + -1,iVar4 + -1,0);
    }
    engine_2d_c_fillRectColor_FUN_00403170(0,iVar3 - iVar4,iVar1 + -1,iVar3 + -1,0);
#if !NOCTURNE_AUTHENTIC_NETPLAY
    if (g_ModalDialogActive != 0) {
      nocturne_ui_pop_clip();
    }
#endif
  }
  iVar2 = g_ClipTop;
  if ((this_ptr->current_message[0] != '\0') && (g_CGamePtr->subtitle_mode != 0)) {
#if !NOCTURNE_AUTHENTIC_NETPLAY
    if (g_ModalDialogActive != 0) {
      nocturne_ui_push_screen_clip();
    }
#endif
    this_ptr_00 = g_MediumFont;
    if (g_WindowHeight < 0x1e0) {
      this_ptr_00 = g_TinyFont;
    }
    if ((g_WindowHeight < 0x180) && (this_ptr_00 = g_MicroFont, g_UseOSFonts != 0)) {
      this_ptr_00 = g_SmallEditorFont;
    }
#if NOCTURNE_AUTHENTIC_HUD_SCALE
    iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (this_ptr_00,this_ptr->current_message,g_ScriptSubtitleLines[0],10,0x400,
                       (g_WindowWidth * 9) / 10);
    iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(this_ptr_00,0x58);
#else
    bar_scale = nocturne_ui_box_scale(g_WindowHeight,0x1e0);
    iVar5 = nocturne_ui_wrap_to_width
                      (this_ptr_00,this_ptr->current_message,g_ScriptSubtitleLines[0],10,0x400,
                       (g_WindowWidth * 9) / 10,bar_scale,&iVar6);
    full_letterbox = (g_WindowHeight - (g_WindowWidth * 100) / 0xb9) / 2;
    if ((0 < iVar4) && (iVar6 * iVar5 <= full_letterbox)) {
      nocturne_ui_push_clip(0,g_WindowHeight - iVar4,g_WindowWidth + -1,g_WindowHeight + -1);
    }
    else {
      nocturne_ui_push_clip(0,0,g_WindowWidth + -1,g_WindowHeight + -1);
    }
#endif
    y = ((iVar3 * 2 - iVar4) - iVar6 * iVar5) / 2;
    iVar8 = iVar3 - iVar6 * iVar5;
    if (iVar8 < y) {
      y = iVar8;
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    iVar3 = 0;
    if (0 < iVar5) {
      text = g_ScriptSubtitleLines;
      do {
#if NOCTURNE_AUTHENTIC_HUD_SCALE
        iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_00,*text);
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80
                  (this_ptr_00,*text,(iVar1 - iVar7) / 2,y,0xf8,0);
#else
        iVar7 = nocturne_ui_text_width(this_ptr_00,*text,bar_scale);
        iVar3 = iVar3 + 1;
        nocturne_ui_draw_text(this_ptr_00,*text,(iVar1 - iVar7) / 2,y,0xf8,0,bar_scale);
#endif
        text = text + 1;
        y = y + iVar6;
      } while (iVar3 < iVar5);
    }
#if !NOCTURNE_AUTHENTIC_HUD_SCALE
    nocturne_ui_pop_clip();
#endif
#if !NOCTURNE_AUTHENTIC_NETPLAY
    if (g_ModalDialogActive != 0) {
      nocturne_ui_pop_clip();
    }
#endif
  }
  g_ClipTop = iVar2;
  return;
}
