// Name: FUN_004a3a30
// Address: 004a3a30
// Address Range: [[004a3a30, 004a3a9f]]
// Convention: unknown
// Signature: int FUN_004a3a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a3a30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01cf61d0;
  FUN_0049cee0(_DAT_01cf61d0 * 1000 + 0x1cf61d4,param_2,param_3,param_4,param_5,param_6);
  _DAT_01cf61d0 = _DAT_01cf61d0 + 1;
  if (_DAT_01cf61d0 < 0x14) {
    return iVar1;
  }
  _DAT_01cf61d0 = 0;
  return iVar1;
}
