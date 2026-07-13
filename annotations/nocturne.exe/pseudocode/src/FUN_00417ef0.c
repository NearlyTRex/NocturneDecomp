// Name: FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417f09]]
// Convention: unknown
// Signature: undefined4 FUN_00417ef0(int param_1)

#include "nocturne.h"

uint FUN_00417ef0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    return 0;
  }
  uVar1 = FUN_0040b200(param_1);
  return uVar1;
}
