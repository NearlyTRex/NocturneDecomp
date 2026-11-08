// Name: FUN_00459960
// Address: 00459960
// Address Range: [[00459960, 0045997f]]
// Convention: unknown
// Signature: void FUN_00459960(int param_1)

#include "nocturne.h"

void FUN_00459960(int param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_005a3770(*(int *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x48) = 0;
  return;
}
