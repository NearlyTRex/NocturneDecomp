// Name: FUN_004b00f0
// Address: 004b00f0
// Address Range: [[004b00f0, 004b013d]]
// Convention: unknown
// Signature: void FUN_004b00f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b00f0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 2) {
    iVar1 = _DAT_01c78ce8 * 0x40;
    _DAT_01c78ce8 = _DAT_01c78ce8 + 1;
    if (0xff < _DAT_01c78ce8) {
      _DAT_01c78ce8 = 0;
    }
    FUN_004ae070(iVar1 + 0x1c78cec,param_2,param_3,param_4);
  }
  return;
}
