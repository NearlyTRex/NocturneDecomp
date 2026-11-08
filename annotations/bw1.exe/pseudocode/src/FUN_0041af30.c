// Name: FUN_0041af30
// Address: 0041af30
// Address Range: [[0041af30, 0041af49]]
// Convention: unknown
// Signature: undefined4 FUN_0041af30(int param_1)

#include "nocturne.h"

uint FUN_0041af30(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x158) != 0) {
    return 0;
  }
  uVar1 = FUN_00409d70(param_1);
  return uVar1;
}
