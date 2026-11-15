// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_00494500
// Address: 00494500
// Address Range: [[00494500, 004945f7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_00494500(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_00494500(CEditorTools *this_ptr,char *format_string,...)

{
  char acStack_414 [1024];
  byte *puStack_14;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_displayErrorAndQuit_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = _DAT_01c3eb50->max_char_width;
  _DAT_01c3f53c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(_DAT_01c3eb50,0x6a);
  puStack_14 = &stack0x0000000c;
  _vsprintf(acStack_414,format_string,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
  engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
            (_DAT_01c3eb50,acStack_414,_DAT_01c4f008,_DAT_01c4f00c,_DAT_01c3f578,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
  return;
}
