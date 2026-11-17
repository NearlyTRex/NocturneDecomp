// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_004700d0
// Address: 004700d0
// Address Range: [[004700d0, 0047019f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_004700d0(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_004700d0(CEditorTools *this_ptr,char *format_string,...)

{
  byte *local_14;
  
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  local_14 = &stack0x0000000c;
  _vsprintf(g_CHAR_ARRAY_01bcb0d0,format_string,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_01bcd070,g_CHAR_ARRAY_01bcb0d0,g_ClipLeft,g_ClipTop,
             g_WindowStatusTextColor,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  return;
}
