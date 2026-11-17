// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047be90
// Address: 0047be90
// Address Range: [[0047be90, 0047bf73]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047be90(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047be90(CEditorTools *this_ptr,char *format,...)

{
  byte *local_14;
  
  if (g_CBitFont_PTR_01c25590 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0xa0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("gEdFont must be set by the application.");
  }
  g_INT_01c25f78 = g_CBitFont_PTR_01c25590->max_char_width;
  g_INT_01c25f7c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x6a)
  ;
  local_14 = &stack0x0000000c;
  _vsprintf(g_CHAR_ARRAY_01c231f0,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004a92a0
            (g_CBitFont_PTR_01c25590,g_INT_006141b8 / 2,g_INT_006141bc / 2,g_INT_01c263b4,-1,
             g_CHAR_ARRAY_01c231f0);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  return;
}
