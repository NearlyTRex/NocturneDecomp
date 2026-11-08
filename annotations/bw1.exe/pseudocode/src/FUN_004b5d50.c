// Name: FUN_004b5d50
// Address: 004b5d50
// Address Range: [[004b5d50, 004b5dad]]
// Convention: unknown
// Signature: void FUN_004b5d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5d50(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01c9f8ec * 0xa4;
  _DAT_01c9f8ec = _DAT_01c9f8ec + 1;
  if (0xff < _DAT_01c9f8ec) {
    _DAT_01c9f8ec = 0;
  }
  FUN_004af600(iVar1 + 0x1c9f8f0,param_2,param_3,param_4,param_5,param_6);
  return;
}
