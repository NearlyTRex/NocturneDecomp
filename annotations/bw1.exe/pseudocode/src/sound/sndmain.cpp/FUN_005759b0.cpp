// Name: FUN_005759b0
// Address: 005759b0
// Address Range: [[005759b0, 00575a4a]]
// Convention: unknown
// Signature: undefined4 FUN_005759b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005759b0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00575990();
  if (iVar1 != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x16ed;
    FUN_005030e0("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_00623320 = param_1;
  _DAT_00623324 = param_2;
  _DAT_00623328 = param_3;
  _DAT_02c81040 = (uint)(param_4 != 0);
  if (_DAT_02c81038 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c81038 + 0xc))(_DAT_02c81038,param_1,param_2,param_3,_DAT_02c81040)
    ;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
