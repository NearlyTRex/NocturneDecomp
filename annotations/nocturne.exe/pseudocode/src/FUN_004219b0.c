// Name: FUN_004219b0
// Address: 004219b0
// Address Range: [[004219b0, 004219cd]]
// Convention: unknown
// Signature: undefined4 FUN_004219b0(int param_1)

#include "nocturne.h"

uint FUN_004219b0(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(param_1 + 0xbd24) == 3) {
    return 2;
  }
  return 0;
}
