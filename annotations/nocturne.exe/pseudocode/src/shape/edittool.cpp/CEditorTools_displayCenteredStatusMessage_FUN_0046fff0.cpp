// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
// Address: 0046fff0
// Address Range: [[0046fff0, 004700c6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0(CEditorTools *this_ptr,char *format)

{
  byte *local_14;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  local_14 = &stack0x0000000c;
  _vsprintf((char *)0x1bcacd0,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  engine_special_cpp_clearScreen_FUN_0052ee70();
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_00490ce0
            (_DAT_01bcd070,DAT_005b761c / 2,DAT_005b7620 / 2,_DAT_01bcdde8,-1,(char *)0x1bcacd0);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  return;
}
