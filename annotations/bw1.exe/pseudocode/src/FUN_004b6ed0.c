// Name: FUN_004b6ed0
// Address: 004b6ed0
// Address Range: [[004b6ed0, 004b6f2d]]
// Convention: unknown
// Signature: int FUN_004b6ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b6ed0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01cb0188;
  FUN_004b1c50(_DAT_01cb0188 * 0x3e4 + 0x1cb018c,param_2,param_3,param_4,param_5,param_6);
  _DAT_01cb0188 = _DAT_01cb0188 + 1;
  if (_DAT_01cb0188 < 0x14) {
    return iVar1;
  }
  _DAT_01cb0188 = 0;
  return iVar1;
}
