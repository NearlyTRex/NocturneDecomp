// Name: FUN_004edca0
// Address: 004edca0
// Address Range: [[004edca0, 004edcae]]
// Convention: unknown
// Signature: void FUN_004edca0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004edca0(uint *param_1)

{
  *(byte *)(param_1 + 1) = 2;
  *param_1 = 0x71;
  return;
}
