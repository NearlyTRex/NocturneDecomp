// Name: FUN_0049d230
// Address: 0049d230
// Address Range: [[0049d230, 0049d287]]
// Convention: unknown
// Signature: void FUN_0049d230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d230(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01c3f8dc * 0x2c;
  _DAT_01c3f8dc = _DAT_01c3f8dc + 1;
  if (0x7ff < _DAT_01c3f8dc) {
    _DAT_01c3f8dc = 0;
  }
  FUN_00493510(&DAT_01c3f8e0 + iVar1,param_2,param_3,param_4,param_5);
  return;
}
