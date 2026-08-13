// Name: shape_edittool.cpp_FUN_0046fcd0
// Address: 0046fcd0
// Address Range: [[0046fcd0, 0046fe58]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0046fcd0(CEditorTools *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0046fcd0(CEditorTools *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *local_18;
  char *local_14;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  local_18 = &stack0x0000000c;
  _vsprintf((char *)0x1bca4d0,param_2,(va_list_t)&local_18);
  local_18 = (byte *)0x0;
  local_14 = "Error";
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,"Error");
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,(char *)0x1bca4d0);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(_DAT_01bcd070,(char *)0x1bca4d0);
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (param_1,_DAT_01bcd9b8 * 4 + iVar1,_DAT_01bcd9bc * 2 + iVar3,local_14,0);
  shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004722b0(param_1);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,(char *)0x1bca4d0,((g_ClipLeft + g_ClipRight) - iVar2) / 2,
             ((g_ClipTop + g_ClipBottom) - iVar3) / 2,_DAT_01bcddd4,-1);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(g_CKeys_PTR_005bac64);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(param_1);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return;
}
