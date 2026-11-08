// Name: FUN_004aa290
// Address: 004aa290
// Address Range: [[004aa290, 004aa2c6]]
// Convention: unknown
// Signature: undefined4 FUN_004aa290(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004aa290(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_004aa400(param_1);
  iVar1 = FUN_004aa3b0(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(param_1 + 0x3acc + iVar1 * 0x120);
  }
  return 0;
}
