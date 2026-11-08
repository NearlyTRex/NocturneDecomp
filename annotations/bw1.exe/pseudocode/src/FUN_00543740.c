// Name: FUN_00543740
// Address: 00543740
// Address Range: [[00543740, 00543788]]
// Convention: unknown
// Signature: void FUN_00543740(int param_1)

#include "nocturne.h"

void FUN_00543740(int param_1)

{
  FUN_00499470(param_1 + 0x34);
  FUN_00543790(param_1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x24));
    *(uint *)(param_1 + 0x24) = 0;
  }
  *(uint *)(param_1 + 0x20) = 0;
  FUN_0049c370(0x1e818c0);
  return;
}
