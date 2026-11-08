// Name: FUN_00499250
// Address: 00499250
// Address Range: [[00499250, 00499349]]
// Convention: unknown
// Signature: void FUN_00499250(undefined4 param_1,uint param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499250(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c3f540 = param_2;
  if (param_2 != 0) {
    if (param_2 < 2) {
      if ((int)param_3 < 1) {
        param_3 = 0xb;
      }
      if ((int)param_4 < 1) {
        param_4 = (int)param_3 / 2;
      }
      goto LAB_00499286;
    }
    if (param_2 != 2) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0xb9a;
      FUN_005030e0("CEditorTools::setMousePointerType - invalid type!");
      DAT_0061abc4 = param_4;
      DAT_0061abc8 = param_3;
      return;
    }
  }
  if ((int)param_3 < 1) {
    param_3 = 0xb;
  }
  if ((int)param_4 < 1) {
    iVar1 = (int)(param_3 * DAT_0061b498 * 3) / DAT_0061b49c;
    iVar2 = iVar1 >> 0x1f;
    param_4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
LAB_00499286:
  if ((param_4 & 1) == 0) {
    param_4 = param_4 + 1;
  }
  DAT_0061abc4 = param_4;
  DAT_0061abc8 = param_3;
  return;
}
