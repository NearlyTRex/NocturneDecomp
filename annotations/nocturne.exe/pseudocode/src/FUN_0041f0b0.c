// Name: FUN_0041f0b0
// Address: 0041f0b0
// Address Range: [[0041f0b0, 0041f0de]]
// Convention: unknown
// Signature: undefined4 FUN_0041f0b0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0041f0b0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30c) != 3) {
    iVar1 = FUN_0040d7e0(param_2,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x30c);
}
