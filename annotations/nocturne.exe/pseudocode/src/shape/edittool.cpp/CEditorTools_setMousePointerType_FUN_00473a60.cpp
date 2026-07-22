// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00473a60
// Address: 00473a60
// Address Range: [[00473a60, 00473b59]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01bcd9c0 = param_2;
  if (param_2 != 0) {
    if (param_2 < 2) {
      if ((int)param_3 < 1) {
        param_3 = 0xb;
      }
      if ((int)param_4 < 1) {
        param_4 = (int)param_3 / 2;
      }
      goto LAB_00473a96;
    }
    if (param_2 != 2) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0x93b;
      FUN_004c8440("CEditorTools::setMousePointerType - invalid type!");
      DAT_005b6d54 = param_4;
      DAT_005b6d58 = param_3;
      return;
    }
  }
  if ((int)param_3 < 1) {
    param_3 = 0xb;
  }
  if ((int)param_4 < 1) {
    iVar1 = (int)(param_3 * DAT_005b761c * 3) / DAT_005b7620;
    iVar2 = iVar1 >> 0x1f;
    param_4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
LAB_00473a96:
  if ((param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  DAT_005b6d54 = param_4;
  DAT_005b6d58 = param_3;
  return;
}
