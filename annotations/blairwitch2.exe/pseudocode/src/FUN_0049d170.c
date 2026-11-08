// Name: FUN_0049d170
// Address: 0049d170
// Address Range: [[0049d170, 0049d1b9]]
// Convention: unknown
// Signature: void FUN_0049d170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d170(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_01c8672c * 0x5c;
  _DAT_01c8672c = _DAT_01c8672c + 1;
  if (0x13 < _DAT_01c8672c) {
    _DAT_01c8672c = 0;
  }
  FUN_0059d360(&DAT_01c86730 + iVar1,param_2,param_3);
  return;
}
