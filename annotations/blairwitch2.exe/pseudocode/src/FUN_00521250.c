// Name: FUN_00521250
// Address: 00521250
// Address Range: [[00521250, 0052128a]]
// Convention: unknown
// Signature: void FUN_00521250(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00521250(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005211a0(param_1,param_2,100);
  if ((iVar1 == 0) && (_DAT_01e650f8 != 0)) {
    FUN_0048e3a0(0x01C38BC0,param_2);
    return;
  }
  return;
}
