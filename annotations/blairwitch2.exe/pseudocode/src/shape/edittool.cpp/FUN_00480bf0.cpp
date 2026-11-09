// Name: shape_edittool.cpp_FUN_00480bf0
// Address: 00480bf0
// Address Range: [[00480bf0, 00480ce9]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00480bf0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00480bf0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c25f80 = param_2;
  if (param_2 != 0) {
    if (param_2 < 2) {
      if ((int)param_3 < 1) {
        param_3 = 0xb;
      }
      if ((int)param_4 < 1) {
        param_4 = (int)param_3 / 2;
      }
      goto LAB_00480c26;
    }
    if (param_2 != 2) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0xb28;
      core_main_c_FUN_004e4500("CEditorTools::setMousePointerType - invalid type!");
      DAT_006138e4 = param_4;
      DAT_006138e8 = param_3;
      return;
    }
  }
  if ((int)param_3 < 1) {
    param_3 = 0xb;
  }
  if ((int)param_4 < 1) {
    iVar1 = (int)(param_3 * DAT_006141b8 * 3) / DAT_006141bc;
    iVar2 = iVar1 >> 0x1f;
    param_4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
LAB_00480c26:
  if ((param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  DAT_006138e4 = param_4;
  DAT_006138e8 = param_3;
  return;
}
