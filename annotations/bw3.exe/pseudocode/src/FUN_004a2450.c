// Name: FUN_004a2450
// Address: 004a2450
// Address Range: [[004a2450, 004a2499]]
// Convention: unknown
// Signature: void FUN_004a2450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2450(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_01cbb9b8 * 0x5c;
  _DAT_01cbb9b8 = _DAT_01cbb9b8 + 1;
  if (0x13 < _DAT_01cbb9b8) {
    _DAT_01cbb9b8 = 0;
  }
  FUN_0049a390(&DAT_01cbb9bc + iVar1,param_2,param_3);
  return;
}
