// Name: FUN_00558b20
// Address: 00558b20
// Address Range: [[00558b20, 00558bba]]
// Convention: unknown
// Signature: undefined4 FUN_00558b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558b20(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00558b00();
  if (iVar1 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x1700;
    FUN_004e4330("setRecordingFormat - can't do this while recording active!");
  }
  _DAT_0060425c = param_1;
  _DAT_00604260 = param_2;
  _DAT_00604264 = param_3;
  _DAT_02cf3c70 = (uint)(param_4 != 0);
  if (_DAT_02cf3c68 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 0xc))(_DAT_02cf3c68,param_1,param_2,param_3,_DAT_02cf3c70)
    ;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
