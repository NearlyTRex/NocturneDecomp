// Name: FUN_004a2780
// Address: 004a2780
// Address Range: [[004a2780, 004a27d4]]
// Convention: unknown
// Signature: void FUN_004a2780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2780(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01cbc0ec * 0xd4;
  _DAT_01cbc0ec = _DAT_01cbc0ec + 1;
  if (999 < _DAT_01cbc0ec) {
    _DAT_01cbc0ec = 0;
  }
  FUN_0049a650(iVar1 + 0x1cbc0f0,param_2,param_3,param_4,param_5,param_6);
  return;
}
