// Name: FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cbf0e]]
// Convention: unknown
// Signature: void FUN_004cbf00(int param_1)

#include "nocturne.h"

void FUN_004cbf00(int param_1)

{
  *(uint *)(param_1 + 0xb00) = 0x600f94;
  return;
}
