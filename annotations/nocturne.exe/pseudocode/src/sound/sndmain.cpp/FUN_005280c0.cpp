// Name: FUN_005280c0
// Address: 005280c0
// Address Range: [[005280c0, 0052815d]]
// Convention: unknown
// Signature: undefined4 FUN_005280c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005280c0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = FUN_00528490();
  if (iVar1 != 0) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x1168;
    FUN_004c8440("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_005bea64 = param_1;
  DAT_005bea68 = param_2;
  DAT_005bea6c = param_3;
  if (_DAT_02dc8318 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0xc))(_DAT_02dc8318,param_1,param_2,param_3,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      FUN_00522f10(iStack_10,4);
      return 1;
    }
  }
  return 1;
}
