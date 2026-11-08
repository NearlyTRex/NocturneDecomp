// Name: FUN_004eaab0
// Address: 004eaab0
// Address Range: [[004eaab0, 004eaaf0]]
// Convention: unknown
// Signature: undefined4 FUN_004eaab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_004eaab0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((*(int *)(0x01CCF390 + 0x1ec) == 0) && ((*(uint *)(param_1 + 0xc1d0) & 0x7fffffff) == 0)) {
    uVar1 = FUN_00408d60(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}
