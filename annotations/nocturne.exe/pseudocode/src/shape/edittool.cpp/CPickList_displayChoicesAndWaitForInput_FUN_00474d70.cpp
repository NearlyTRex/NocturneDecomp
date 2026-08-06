// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
// Address: 00474d70
// Address Range: [[00474d70, 00474e62]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  uint uVar1;
  int x;
  int y;
  int iVar2;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 139;
    core_main_c_displayErrorAndQuit_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  y = _DAT_01bd1d90;
  x = _DAT_01bd1d8c;
  uVar1 = DAT_005b7630;
  if (0 < (this_ptr->base).item_count) {
    DAT_005b7630 = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70
              (this_ptr,dialog_title,initial_selected_index,0);
    do {
      iVar2 = shape_edittool_cpp_FUN_00475230(this_ptr);
      shape_edittool_cpp_FUN_004759d0(this_ptr);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (iVar2 == -2);
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(x,y);
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    shape_edittool_cpp_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
    DAT_005b7630 = uVar1;
    return iVar2;
  }
  return -1;
}
