// Name: FUN_004fac50
// Address: 004fac50
// Address Range: [[004fac50, 004fac82]]
// Convention: unknown
// Signature: void FUN_004fac50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004fac50(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004faa10(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00469670(DAT_0060b280,param_1 + 0xe8);
  return;
}
