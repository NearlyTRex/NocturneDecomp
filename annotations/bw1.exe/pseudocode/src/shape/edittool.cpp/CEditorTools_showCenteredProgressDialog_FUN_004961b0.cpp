// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0
// Address: 004961b0
// Address Range: [[004961b0, 004962a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0(CEditorTools *this_ptr,char *message_text)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0(CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  iVar1 = g_INT_0061b498 / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(g_CBitFont_PTR_01c3eb50,message_text)
    ;
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                        (g_CBitFont_PTR_01c3eb50,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00496840
            (this_ptr,iVar1,g_INT_01c3f53c * 6,message_text,0);
  iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = (g_WindowStackCount + -1) * 0x1f8;
  *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1ec) = iVar2;
  *(uint *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1f0) = 0xffffffff;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0(this_ptr,0.0,1.0);
  return;
}
