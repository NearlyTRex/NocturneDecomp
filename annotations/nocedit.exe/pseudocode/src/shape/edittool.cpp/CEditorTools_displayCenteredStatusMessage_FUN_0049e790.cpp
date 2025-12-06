// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
// Address: 0049e790
// Address Range: [[0049e790, 0049e866]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
          (CEditorTools *this_ptr,char *message)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000010;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_StatusMessageBuffer,in_stack_00000010,(va_list_t *)&stack0xfffffff4);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
            (g_EditorFont,g_WindowWidth / 2,g_WindowHeight / 2,g_StatusTextColor,-1,
             g_StatusMessageBuffer);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
