// Name: FUN_0049e5d0
// Address: 0049e5d0
// Address Range: [[0049e5d0, 0049e62d]]
// Convention: unknown
// Signature: int FUN_0049e5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049e5d0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01c976fc;
  FUN_004992b0(_DAT_01c976fc * 0x3e4 + 0x1c97700,param_2,param_3,param_4,param_5,param_6);
  _DAT_01c976fc = _DAT_01c976fc + 1;
  if (_DAT_01c976fc < 0x14) {
    return iVar1;
  }
  _DAT_01c976fc = 0;
  return iVar1;
}
