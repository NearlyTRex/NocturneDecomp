// Name: FUN_0047a1c0
// Address: 0047a1c0
// Address Range: [[0047a1c0, 0047a1d6]]
// Convention: unknown
// Signature: bool FUN_0047a1c0(int param_1)

#include "nocturne.h"

bool FUN_0047a1c0(int param_1)

{
  return (*(uint *)(param_1 + 0x6d4) & 0x7fffffff) == 0;
}
