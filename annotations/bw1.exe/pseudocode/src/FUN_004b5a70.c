// Name: FUN_004b5a70
// Address: 004b5a70
// Address Range: [[004b5a70, 004b5ab9]]
// Convention: unknown
// Signature: void FUN_004b5a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5a70(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_01c9f1b8 * 0x5c;
  _DAT_01c9f1b8 = _DAT_01c9f1b8 + 1;
  if (0x13 < _DAT_01c9f1b8) {
    _DAT_01c9f1b8 = 0;
  }
  FUN_004af340(&DAT_01c9f1bc + iVar1,param_2,param_3);
  return;
}
