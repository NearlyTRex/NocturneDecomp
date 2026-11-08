// Name: FUN_004e5f40
// Address: 004e5f40
// Address Range: [[004e5f40, 004e5f91]]
// Convention: unknown
// Signature: void FUN_004e5f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5f40(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 2) {
    iVar1 = _DAT_01cd0ea8 * 0x48;
    _DAT_01cd0ea8 = _DAT_01cd0ea8 + 1;
    if (0xff < _DAT_01cd0ea8) {
      _DAT_01cd0ea8 = 0;
    }
    FUN_004e3e20(iVar1 + 0x1cd0eac,param_2,param_3,param_4);
  }
  return;
}
