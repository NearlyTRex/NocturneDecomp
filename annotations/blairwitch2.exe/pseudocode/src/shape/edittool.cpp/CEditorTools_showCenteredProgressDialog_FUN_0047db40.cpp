// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
// Address: 0047db40
// Address Range: [[0047db40, 0047dc37]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 160;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  iVar1 = g_INT_006141b8 / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_EditorFont,message_text);
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_EditorFont,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
            (this_ptr,iVar1,g_INT_01c25f7c * 6,message_text,0);
  iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar1 = (g_WindowStackCount + -1) * 0x1f8;
  *(int *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1ec) = iVar2;
  *(uint *)((int)g_SWindow_ARRAY_01c255a0 + iVar1 + 0x1f0) = 0xffffffff;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047dc40(this_ptr,0.0,1.0);
  return;
}
