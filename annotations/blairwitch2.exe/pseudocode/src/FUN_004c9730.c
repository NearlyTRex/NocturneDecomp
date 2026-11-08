// Name: FUN_004c9730
// Address: 004c9730
// Address Range: [[004c9730, 004c9781]]
// Convention: unknown
// Signature: void FUN_004c9730(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9730(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 2) {
    iVar1 = _DAT_01cb82f0 * 0x48;
    _DAT_01cb82f0 = _DAT_01cb82f0 + 1;
    if (0xff < _DAT_01cb82f0) {
      _DAT_01cb82f0 = 0;
    }
    FUN_004c7460(iVar1 + 0x1cb82f4,param_2,param_3,param_4);
  }
  return;
}
