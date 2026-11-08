// Name: FUN_004b5eb0
// Address: 004b5eb0
// Address Range: [[004b5eb0, 004b5efb]]
// Convention: unknown
// Signature: void FUN_004b5eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5eb0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _DAT_01cac760 * 0x50;
  _DAT_01cac760 = _DAT_01cac760 + 1;
  if (0x3f < _DAT_01cac760) {
    _DAT_01cac760 = 0;
  }
  FUN_004aef90(iVar1 + 0x1cac764,param_2,param_3,param_4);
  return;
}
