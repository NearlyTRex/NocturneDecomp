// Name: FUN_004ce8a0
// Address: 004ce8a0
// Address Range: [[004ce8a0, 004ce8f1]]
// Convention: unknown
// Signature: void FUN_004ce8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce8a0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 2) {
    iVar1 = _DAT_01d22eb0 * 0x48;
    _DAT_01d22eb0 = _DAT_01d22eb0 + 1;
    if (0xff < _DAT_01d22eb0) {
      _DAT_01d22eb0 = 0;
    }
    FUN_004ccac0(iVar1 + 0x1d22eb4,param_2,param_3,param_4);
  }
  return;
}
