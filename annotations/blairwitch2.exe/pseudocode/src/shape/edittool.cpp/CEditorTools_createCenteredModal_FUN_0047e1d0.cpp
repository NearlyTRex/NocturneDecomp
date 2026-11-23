// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
// Address: 0047e1d0
// Address Range: [[0047e1d0, 0047e2a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

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
  if (text_content != (char *)0x0) {
    iVar1 = g_EditorFont->char_widths[0x20];
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(g_EditorFont,text_content);
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (g_INT_006141b8 - min_width) / 2;
  iVar2 = (g_INT_006141bc - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047e2b0
            (this_ptr,iVar1,iVar2,g_INT_006141b8 - iVar1,g_INT_006141bc - iVar2,text_content,
             window_flags);
  return;
}
