// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
// Address: 0049e870
// Address Range: [[0049e870, 0049e93f]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string, ...)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
          (CEditorTools *this_ptr,char *format_string,...)

{
  va_list_t local_14;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  local_14 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(g_ConfirmationMessageBuffer,format_string,&local_14);
  local_14 = (va_list_t)0x0;
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,g_ConfirmationMessageBuffer,g_ClipLeft,g_ClipTop,g_WindowStatusTextColor,
             -1);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
