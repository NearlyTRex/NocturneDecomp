// Name: FUN_0049d120
// Address: 0049d120
// Address Range: [[0049d120, 0049d169]]
// Convention: unknown
// Signature: void FUN_0049d120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d120(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_01c85ff8 * 0x5c;
  _DAT_01c85ff8 = _DAT_01c85ff8 + 1;
  if (0x13 < _DAT_01c85ff8) {
    _DAT_01c85ff8 = 0;
  }
  FUN_004969a0(&DAT_01c85ffc + iVar1,param_2,param_3);
  return;
}
