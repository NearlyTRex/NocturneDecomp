// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
// Address: 004a0430
// Address Range: [[004a0430, 004a052c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
          (CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_WindowWidth / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message_text);
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (this_ptr,iVar1,g_FontCharacterWidth * 6,message_text,0);
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = g_WindowStackCount + -1;
  g_WindowStack[iVar2].progress_start_time = iVar1;
  g_WindowStack[iVar2].progress_percentage = -1;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(this_ptr,0.0,1.0);
  return;
}
