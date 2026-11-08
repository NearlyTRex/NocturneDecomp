// Name: FUN_00575120
// Address: 00575120
// Address Range: [[00575120, 005751bd]]
// Convention: unknown
// Signature: undefined4 FUN_00575120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00575120(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iStack_10;
  
  iVar1 = FUN_00575550();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x1479;
    FUN_005030e0("setSoundOutputMode - can't do this while sound active!");
  }
  DAT_006232e8 = param_1;
  DAT_006232ec = param_2;
  DAT_006232f0 = param_3;
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 0xc))(_DAT_02c80650,param_1,param_2,param_3,&iStack_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < iStack_10) {
      FUN_0056f470(iStack_10,4);
      return 1;
    }
  }
  return 1;
}
