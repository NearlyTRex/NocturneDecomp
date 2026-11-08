// Name: FUN_004eaa70
// Address: 004eaa70
// Address Range: [[004eaa70, 004eaaa5]]
// Convention: unknown
// Signature: undefined4 FUN_004eaa70(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004eaa70(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(0x01CCF390 + 0x1ec) == 0) && ((*(uint *)(param_1 + 0xc1d0) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408cd0(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}
