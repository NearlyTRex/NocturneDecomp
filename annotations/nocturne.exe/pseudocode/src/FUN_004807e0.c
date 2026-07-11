// Name: FUN_004807e0
// Address: 004807e0
// Address Range: [[004807e0, 0048080a]]
// Convention: unknown
// Signature: undefined4 FUN_004807e0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004807e0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00480900(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(iVar1 * 4 + param_1 + 0x34c0);
  }
  return 0;
}
