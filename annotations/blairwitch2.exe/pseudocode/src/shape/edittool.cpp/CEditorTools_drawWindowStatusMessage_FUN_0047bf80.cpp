// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0047bf80
// Address: 0047bf80
// Address Range: [[0047bf80, 0047c05c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0047bf80(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0047bf80(CEditorTools *this_ptr,char *format_string,...)

{
  byte *puStack_14;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_EditorFont->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_EditorFont,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf(g_ConfirmationMessageBuffer,format_string,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047e870(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  engine_font_cpp_CBitFont_drawText_FUN_004a8df0
            (g_EditorFont,g_ConfirmationMessageBuffer,g_INT_01c35e48,g_INT_01c35e4c,
             g_WindowStatusTextColor,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  return;
}
