// Name: FUN_00552f80
// Address: 00552f80
// Address Range: [[00552f80, 0055301a]]
// Convention: unknown
// Signature: undefined4 FUN_00552f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00552f80(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00552f60();
  if (iVar1 != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x16f6;
    FUN_004e4500("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_0061bcd0 = param_1;
  _DAT_0061bcd4 = param_2;
  _DAT_0061bcd8 = param_3;
  _DAT_02649870 = (uint)(param_4 != 0);
  if (_DAT_02649868 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02649868 + 0xc))(_DAT_02649868,param_1,param_2,param_3,_DAT_02649870)
    ;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
