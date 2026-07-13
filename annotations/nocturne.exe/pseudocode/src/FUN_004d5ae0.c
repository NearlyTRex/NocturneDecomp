// Name: FUN_004d5ae0
// Address: 004d5ae0
// Address Range: [[004d5ae0, 004d5af9]]
// Convention: unknown
// Signature: undefined4 FUN_004d5ae0(int param_1)

#include "nocturne.h"

uint FUN_004d5ae0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    return 0;
  }
  uVar1 = FUN_004d5860(param_1);
  return uVar1;
}
