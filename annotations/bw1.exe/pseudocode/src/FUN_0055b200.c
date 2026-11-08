// Name: FUN_0055b200
// Address: 0055b200
// Address Range: [[0055b200, 0055b21e]]
// Convention: unknown
// Signature: void FUN_0055b200(int param_1)

#include "nocturne.h"

void FUN_0055b200(int param_1)

{
  if (*(float *)(param_1 + 0x15aecc) <= 0.0) {
    return;
  }
  *(uint *)(param_1 + 0x15aecc) = 0x1e3ce508;
  return;
}
