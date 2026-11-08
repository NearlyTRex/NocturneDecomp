// Name: FUN_004a9e80
// Address: 004a9e80
// Address Range: [[004a9e80, 004a9eaa]]
// Convention: unknown
// Signature: undefined4 FUN_004a9e80(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004a9e80(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a9fa0(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(iVar1 * 4 + param_1 + 0x34c0);
  }
  return 0;
}
