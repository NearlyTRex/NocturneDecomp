// Name: FUN_0049d5b0
// Address: 0049d5b0
// Address Range: [[0049d5b0, 0049d5fb]]
// Convention: unknown
// Signature: void FUN_0049d5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d5b0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _DAT_01c93cd4 * 0x50;
  _DAT_01c93cd4 = _DAT_01c93cd4 + 1;
  if (0x3f < _DAT_01c93cd4) {
    _DAT_01c93cd4 = 0;
  }
  FUN_004965f0(iVar1 + 0x1c93cd8,param_2,param_3,param_4);
  return;
}
