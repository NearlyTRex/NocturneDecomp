// Name: FUN_004d4160
// Address: 004d4160
// Address Range: [[004d4160, 004d4194]]
// Convention: unknown
// Signature: void FUN_004d4160(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d4160(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x20b98) == 0) {
    return;
  }
  FUN_004319d0(param_1,param_2,*(int *)(param_1 + 0x20b98),0x3dcccccd,0);
  *(uint *)(param_1 + 0x20b98) = 0;
  return;
}
