// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
// Address: 00474d70
// Address Range: [[00474d70, 00474e62]]
// Convention: unknown
// Signature: int shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(CPickList *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(CPickList *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int x;
  int y;
  int iVar2;
  
  if (_DAT_01bcd070 == (CBitFont *)0x0) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x8b;
    core_main_c_FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = _DAT_01bcd070->max_char_width;
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  y = _DAT_01bd1d90;
  x = _DAT_01bd1d8c;
  uVar1 = DAT_005b7630;
  if (0 < (param_1->base).item_count) {
    DAT_005b7630 = 0x7f;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(param_1,param_2,param_3,0);
    do {
      iVar2 = shape_edittool_cpp_FUN_00475230(param_1);
      shape_edittool_cpp_FUN_004759d0(param_1);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (iVar2 == -2);
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(x,y);
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    shape_edittool_cpp_FUN_004720c0(0x01BCD074);
    DAT_005b7630 = uVar1;
    return iVar2;
  }
  return -1;
}
