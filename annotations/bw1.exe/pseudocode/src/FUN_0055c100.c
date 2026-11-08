// Name: FUN_0055c100
// Address: 0055c100
// Address Range: [[0055c100, 0055c139]]
// Convention: unknown
// Signature: void FUN_0055c100(int param_1)

#include "nocturne.h"

void FUN_0055c100(int param_1)

{
  if (*(int *)(param_1 + 0x198) == 0) {
    *(uint *)(param_1 + 0x194) = 0;
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x198));
  *(uint *)(param_1 + 0x198) = 0;
  *(uint *)(param_1 + 0x194) = 0;
  return;
}
