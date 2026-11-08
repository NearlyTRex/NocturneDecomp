// Name: FUN_004a2560
// Address: 004a2560
// Address Range: [[004a2560, 004a25b7]]
// Convention: unknown
// Signature: void FUN_004a2560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2560(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01c74e9c * 0x2c;
  _DAT_01c74e9c = _DAT_01c74e9c + 1;
  if (0x7ff < _DAT_01c74e9c) {
    _DAT_01c74e9c = 0;
  }
  FUN_00496d60(&DAT_01c74ea0 + iVar1,param_2,param_3,param_4,param_5);
  return;
}
