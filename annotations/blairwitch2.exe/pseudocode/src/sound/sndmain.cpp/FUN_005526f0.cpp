// Name: FUN_005526f0
// Address: 005526f0
// Address Range: [[005526f0, 0055278d]]
// Convention: unknown
// Signature: undefined4 FUN_005526f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005526f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = FUN_00552b20();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1482;
    FUN_004e4500("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_0061bc98 = param_1;
  DAT_0061bc9c = param_2;
  DAT_0061bca0 = param_3;
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02648e80 + 0xc))(_DAT_02648e80,param_1,param_2,param_3,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      FUN_0054ce00(iStack_10,4);
      return 1;
    }
  }
  return 1;
}
