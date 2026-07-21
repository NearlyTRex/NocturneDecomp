// Name: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
// Address: 00474d70
// Address Range: [[00474d70, 00474e62]]
// Convention: unknown
// Signature: int shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "?..\\shape\\edittool.cpp" + 1;
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  uVar2 = _DAT_01bd1d8c;
  uVar1 = DAT_005b7630;
  if (0 < *param_1) {
    DAT_005b7630 = 0x7f;
    uVar4 = _DAT_01bd1d90;
    shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70
              (param_1,param_2,param_3,0,_DAT_01bd1d90);
    do {
      iVar3 = FUN_00475230(param_1);
      FUN_004759d0(param_1);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (iVar3 == -2);
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(uVar2,uVar4);
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    FUN_004720c0(0x01BCD074);
    DAT_005b7630 = uVar1;
    return iVar3;
  }
  return -1;
}
