// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
// Address: 00494400
// Address Range: [[00494400, 004944fa]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools *this_ptr,char *format)

{
  char local_414 [1024];
  byte *local_14;
  
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\shape\\edittool.cpp";
    g_INT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c3eb50->max_char_width;
  g_INT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(g_CBitFont_PTR_01c3eb50,0x6a)
  ;
  local_14 = &stack0x0000000c;
  _vsprintf(local_414,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004c2250
            (g_CBitFont_PTR_01c3eb50,g_INT_0061b498 / 2,g_INT_0061b49c / 2,g_StatusTextColor,-1,
             local_414);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  return;
}
