// Name: FUN_0048b320
// Address: 0048b320
// Address Range: [[0048b320, 0048b36b]]
// Convention: unknown
// Signature: void FUN_0048b320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b320(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _DAT_01c5b4fc * 0x48;
  _DAT_01c5b4fc = _DAT_01c5b4fc + 1;
  if (0x3f < _DAT_01c5b4fc) {
    _DAT_01c5b4fc = 0;
  }
  FUN_00484c90(iVar1 + 0x1c5b500,param_2,param_3,param_4);
  return;
}
