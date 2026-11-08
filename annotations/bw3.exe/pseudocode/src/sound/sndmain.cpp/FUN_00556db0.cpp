// Name: FUN_00556db0
// Address: 00556db0
// Address Range: [[00556db0, 00556e24]]
// Convention: unknown
// Signature: void FUN_00556db0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556db0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1136;
    FUN_004e4330("enableSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(param_1 * 4 + 0x2cf2940) = param_2;
  if (param_2 == 0) {
    FUN_00558e90();
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x2ce721c)) {
        FUN_00555270(iVar1 + 0x2ce721c);
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    FUN_00556fd0();
  }
  return;
}
