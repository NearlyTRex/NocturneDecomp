// Name: FUN_0049d450
// Address: 0049d450
// Address Range: [[0049d450, 0049d4ad]]
// Convention: unknown
// Signature: void FUN_0049d450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d450(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01c86e60 * 0xa4;
  _DAT_01c86e60 = _DAT_01c86e60 + 1;
  if (0xff < _DAT_01c86e60) {
    _DAT_01c86e60 = 0;
  }
  FUN_00496c60(iVar1 + 0x1c86e64,param_2,param_3,param_4,param_5,param_6);
  return;
}
