// Name: FUN_004b5b30
// Address: 004b5b30
// Address Range: [[004b5b30, 004b5b87]]
// Convention: unknown
// Signature: void FUN_004b5b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5b30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01c58a9c * 0x2c;
  _DAT_01c58a9c = _DAT_01c58a9c + 1;
  if (0x7ff < _DAT_01c58a9c) {
    _DAT_01c58a9c = 0;
  }
  FUN_004abeb0(&DAT_01c58aa0 + iVar1,param_2,param_3,param_4,param_5);
  return;
}
