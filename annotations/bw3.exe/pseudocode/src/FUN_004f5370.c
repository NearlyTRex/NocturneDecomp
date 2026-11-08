// Name: FUN_004f5370
// Address: 004f5370
// Address Range: [[004f5370, 004f53a2]]
// Convention: unknown
// Signature: void FUN_004f5370(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f5370(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f5130(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_0046b240(DAT_005f2afc,param_1 + 0xe8);
  return;
}
