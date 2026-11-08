// Name: FUN_0055d310
// Address: 0055d310
// Address Range: [[0055d310, 0055d35c]]
// Convention: unknown
// Signature: void FUN_0055d310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d310(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if (_DAT_02cf49d4 == (int *)0x0) {
    return;
  }
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_10 = 0;
  uStack_4 = param_4;
  (**(code **)(*_DAT_02cf49d4 + 0x10))(_DAT_02cf49d4,&DAT_00604500,0,0,0,&uStack_10,0x10);
  return;
}
