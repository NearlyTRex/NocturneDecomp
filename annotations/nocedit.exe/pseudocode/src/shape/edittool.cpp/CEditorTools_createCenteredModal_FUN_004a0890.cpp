// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
// Address: 004a0890
// Address Range: [[004a0890, 004a0962]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 141;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_width;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_EditorFont,0x6a);
  if (text_content != (char *)0x0) {
    iVar1 = g_EditorFont->char_widths[0x20];
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,text_content);
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (g_WindowWidth - min_width) / 2;
  iVar2 = (g_WindowHeight - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970
            (this_ptr,iVar1,iVar2,g_WindowWidth - iVar1,g_WindowHeight - iVar2,text_content,
             window_flags);
  return;
}
