// Name: FUN_004b9bd0
// Address: 004b9bd0
// Address Range: [[004b9bd0, 004b9be2]]
// Convention: unknown
// Signature: void FUN_004b9bd0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_004b9bd0(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x30) = 100;
  *(uint *)(param_2 + 4) = 0;
  return;
}
