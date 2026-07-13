// Name: FUN_0052bdf0
// Address: 0052bdf0
// Address Range: [[0052bdf0, 0052be3c]]
// Convention: unknown
// Signature: void FUN_0052bdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052bdf0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (_DAT_02dc9224 == (int *)0x0) {
    return;
  }
  local_c = param_2;
  local_8 = param_3;
  local_10 = 0;
  local_4 = param_4;
  (**(code **)(*_DAT_02dc9224 + 0x10))(_DAT_02dc9224,&DAT_005bed30,0,0,0,&local_10,0x10);
  return;
}
