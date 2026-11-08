// Name: FUN_00558290
// Address: 00558290
// Address Range: [[00558290, 0055832d]]
// Convention: unknown
// Signature: undefined4 FUN_00558290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558290(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = FUN_005586c0();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x148c;
    FUN_004e4330("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_00604228 = param_1;
  DAT_0060422c = param_2;
  DAT_00604230 = param_3;
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3280 + 0xc))(_DAT_02cf3280,param_1,param_2,param_3,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      FUN_00552970(iStack_10,4);
      return 1;
    }
  }
  return 1;
}
