// Name: shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60
// Address: 0046fe60
// Address Range: [[0046fe60, 0046ffe8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60(CEditorTools *this_ptr,char *format,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *local_18;
  char *local_14;
  
  if (g_CBitFont_PTR_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  g_INT_01bcd9b8 = g_CBitFont_PTR_01bcd070->max_char_width;
  g_INT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_01bcd070,0x6a)
  ;
  local_18 = &stack0x0000000c;
  _vsprintf(g_CHAR_ARRAY_01bca8d0,format,(va_list_t)&local_18);
  local_18 = (byte *)0x0;
  local_14 = "Message";
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (g_CBitFont_PTR_01bcd070,"Message");
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                    (g_CBitFont_PTR_01bcd070,g_CHAR_ARRAY_01bca8d0);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                    (g_CBitFont_PTR_01bcd070,g_CHAR_ARRAY_01bca8d0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (this_ptr,g_INT_01bcd9b8 * 4 + iVar1,g_INT_01bcd9bc * 2 + iVar3,local_14,0);
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_01bcd070,g_CHAR_ARRAY_01bca8d0,((g_ClipLeft + g_ClipRight) - iVar2) / 2,
             ((g_ClipTop + g_ClipBottom) - iVar3) / 2,g_INT_01bcddd8,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(g_CKeys_PTR_005bac64);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(this_ptr);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return;
}
