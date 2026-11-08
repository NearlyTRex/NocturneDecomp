// Name: FUN_004a28e0
// Address: 004a28e0
// Address Range: [[004a28e0, 004a292b]]
// Convention: unknown
// Signature: void FUN_004a28e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a28e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _DAT_01cf2780 * 0x50;
  _DAT_01cf2780 = _DAT_01cf2780 + 1;
  if (0x3f < _DAT_01cf2780) {
    _DAT_01cf2780 = 0;
  }
  FUN_00499fe0(iVar1 + 0x1cf2784,param_2,param_3,param_4);
  return;
}
