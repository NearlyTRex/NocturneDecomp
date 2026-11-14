// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
// Address: 0047cfa0
// Address Range: [[0047cfa0, 0047d09a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools *this_ptr,char *format)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools *this_ptr,char *format)

{
  char local_414 [1024];
  byte *local_14;
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = _DAT_01c5b0e0->max_char_width;
  _DAT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  local_14 = &stack0x0000000c;
  _vsprintf(local_414,format,(va_list_t)&local_14);
  local_14 = (byte *)0x0;
  engine_special_cpp_clearScreen_FUN_00560d70();
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0
            (_DAT_01c5b0e0,DAT_005fba18 / 2,DAT_005fba1c / 2,_DAT_01c5bb1c,-1,local_414);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  return;
}
