// Name: FUN_00481df0
// Address: 00481df0
// Address Range: [[00481df0, 00481ee9]]
// Convention: unknown
// Signature: void FUN_00481df0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481df0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c5bae8 = param_2;
  if (param_2 != 0) {
    if (param_2 < 2) {
      if ((int)param_3 < 1) {
        param_3 = 0xb;
      }
      if ((int)param_4 < 1) {
        param_4 = (int)param_3 / 2;
      }
      goto LAB_00481e26;
    }
    if (param_2 != 2) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0xb9d;
      FUN_004e4330("CEditorTools::setMousePointerType - invalid type!");
      DAT_005fb144 = param_4;
      DAT_005fb148 = param_3;
      return;
    }
  }
  if ((int)param_3 < 1) {
    param_3 = 0xb;
  }
  if ((int)param_4 < 1) {
    iVar1 = (int)(param_3 * DAT_005fba18 * 3) / DAT_005fba1c;
    iVar2 = iVar1 >> 0x1f;
    param_4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
LAB_00481e26:
  if ((param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  DAT_005fb144 = param_4;
  DAT_005fb148 = param_3;
  return;
}
