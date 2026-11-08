// Name: FUN_004e7e80
// Address: 004e7e80
// Address Range: [[004e7e80, 004e7eb8]]
// Convention: unknown
// Signature: void FUN_004e7e80(int param_1)

#include "nocturne.h"

void FUN_004e7e80(int param_1)

{
  FUN_00408a80(param_1);
  FUN_00438af0(param_1 + 0x300,param_1 + 0x2b4);
  FUN_004e7d50(param_1);
  *(uint *)(param_1 + 0x2d8) = 0;
  return;
}
