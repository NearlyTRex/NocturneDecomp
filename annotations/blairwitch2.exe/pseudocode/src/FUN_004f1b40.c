// Name: FUN_004f1b40
// Address: 004f1b40
// Address Range: [[004f1b40, 004f1b59]]
// Convention: unknown
// Signature: undefined4 FUN_004f1b40(int param_1)

#include "nocturne.h"

uint FUN_004f1b40(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    return 0;
  }
  uVar1 = FUN_004f1890(param_1);
  return uVar1;
}
