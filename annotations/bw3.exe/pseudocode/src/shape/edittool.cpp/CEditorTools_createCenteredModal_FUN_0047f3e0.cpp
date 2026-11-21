// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047f3e0
// Address: 0047f3e0
// Address Range: [[0047f3e0, 0047f4b2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047f3e0(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

{
  int iVar1;
  int iVar2;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 167;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  if (text_content != (char *)0x0) {
    iVar1 = g_CBitFont_PTR_01c5b0e0->char_widths[0x20];
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(g_CBitFont_PTR_01c5b0e0,text_content)
    ;
    iVar2 = iVar2 + iVar1 * 2;
    if (min_width < iVar2) {
      min_width = iVar2;
    }
  }
  iVar1 = (g_INT_005fba18 - min_width) / 2;
  iVar2 = (g_INT_005fba1c - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_0047f4c0
            (this_ptr,iVar1,iVar2,g_INT_005fba18 - iVar1,g_INT_005fba1c - iVar2,text_content,
             window_flags);
  return;
}
