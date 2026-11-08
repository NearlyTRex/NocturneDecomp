// Name: FUN_00551220
// Address: 00551220
// Address Range: [[00551220, 00551294]]
// Convention: unknown
// Signature: void FUN_00551220(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551220(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x112e;
    FUN_004e4500("enableSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(param_1 * 4 + 0x2648540) = param_2;
  if (param_2 == 0) {
    FUN_005532f0();
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x263cf1c)) {
        FUN_0054f700(iVar1 + 0x263cf1c);
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != 0x4700);
    FUN_00551440();
  }
  return;
}
