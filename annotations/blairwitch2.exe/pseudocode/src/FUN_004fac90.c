// Name: FUN_004fac90
// Address: 004fac90
// Address Range: [[004fac90, 004facc2]]
// Convention: unknown
// Signature: void FUN_004fac90(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004fac90(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004faa10(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_004699a0(DAT_0060b280,param_1 + 0xe8);
  return;
}
