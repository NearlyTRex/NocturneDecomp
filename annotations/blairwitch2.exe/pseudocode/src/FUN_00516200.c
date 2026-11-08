// Name: FUN_00516200
// Address: 00516200
// Address Range: [[00516200, 0051622f]]
// Convention: unknown
// Signature: void FUN_00516200(int param_1)

#include "nocturne.h"

void FUN_00516200(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x14));
  }
  FUN_005b7fce(*(uint *)(param_1 + 0x20));
  FUN_005161d0(param_1);
  return;
}
