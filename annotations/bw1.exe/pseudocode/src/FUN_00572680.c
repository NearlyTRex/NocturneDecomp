// Name: FUN_00572680
// Address: 00572680
// Address Range: [[00572680, 005726b9]]
// Convention: unknown
// Signature: undefined4 FUN_00572680(int param_1)

#include "nocturne.h"

uint FUN_00572680(int param_1)

{
  if (((*(int *)(param_1 + 0x124) < 2) && (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x128)))
     && (*(int *)(param_1 + 0x13c) < 1)) {
    if (*(int *)(param_1 + 0x13c) == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}
