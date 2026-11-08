// Name: FUN_00573c50
// Address: 00573c50
// Address Range: [[00573c50, 00573cc4]]
// Convention: unknown
// Signature: void FUN_00573c50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573c50(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1125;
    FUN_005030e0("enableSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(param_1 * 4 + 0x2c7fd10) = param_2;
  if (param_2 == 0) {
    FUN_00575d20();
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x2c745ec)) {
        FUN_00571d70(iVar1 + 0x2c745ec);
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    FUN_00573e70();
  }
  return;
}
