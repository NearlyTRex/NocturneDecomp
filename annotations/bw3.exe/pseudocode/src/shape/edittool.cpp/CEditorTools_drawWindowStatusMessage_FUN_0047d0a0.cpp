// Name: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0047d0a0
// Address: 0047d0a0
// Address Range: [[0047d0a0, 0047d197]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0047d0a0(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0047d0a0(CEditorTools *this_ptr,char *format_string,...)

{
  char acStack_414 [1024];
  byte *puStack_14;
  
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0xa7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("gEdFont must be set by the application.");
  }
  g_EditorFontMaxCharWidth = g_CBitFont_PTR_01c5b0e0->max_char_width;
  g_INT_01c5bae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(g_CBitFont_PTR_01c5b0e0,0x6a)
  ;
  puStack_14 = &stack0x0000000c;
  _vsprintf(acStack_414,format_string,(va_list_t)&puStack_14);
  puStack_14 = (byte *)0x0;
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
  engine_font_cpp_CBitFont_drawText_FUN_004b0a20
            (g_CBitFont_PTR_01c5b0e0,acStack_414,g_INT_01c6b5a8,g_INT_01c6b5ac,
             g_WindowStatusTextColor,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
  return;
}
