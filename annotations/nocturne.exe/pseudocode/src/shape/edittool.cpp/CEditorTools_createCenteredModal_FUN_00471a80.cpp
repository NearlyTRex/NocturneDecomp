// Name: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
// Address: 00471a80
// Address Range: [[00471a80, 00471b48]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags)

{
  int iVar1;
  int top;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  if (text_content != (char *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,text_content);
    if (min_width < iVar1) {
      min_width = iVar1;
    }
  }
  iVar1 = (g_WindowWidth - min_width) / 2;
  top = (g_WindowHeight - min_height) / 2;
  shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50
            (this_ptr,iVar1,top,g_WindowWidth - iVar1,g_WindowHeight - top,text_content,window_flags
            );
  return;
}
