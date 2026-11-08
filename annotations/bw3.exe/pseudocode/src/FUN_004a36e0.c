// Name: FUN_004a36e0
// Address: 004a36e0
// Address Range: [[004a36e0, 004a378a]]
// Convention: unknown
// Signature: void FUN_004a36e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a36e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  char *pcVar1;
  
  FUN_0049c730(_DAT_01cf608c * 0x20 + 0x1cf6090,param_2,param_3,param_4,param_6);
  _DAT_01cf608c = _DAT_01cf608c + 1;
  if (9 < _DAT_01cf608c) {
    _DAT_01cf608c = 0;
  }
  if (param_6 == 0) {
    pcVar1 = "xplode?.wav @ 6.0";
  }
  else if (param_6 == 1) {
    pcVar1 = "wp_bindevil.wav";
  }
  else {
    if (param_6 != 3) goto LAB_004a373c;
    pcVar1 = "wp_disease.wav";
  }
  FUN_005609d0(0x02CF5680,param_1,pcVar1,param_2);
LAB_004a373c:
  if (param_6 != 0) {
    return;
  }
  FUN_004a3aa0(param_1,param_2,param_5);
  return;
}
