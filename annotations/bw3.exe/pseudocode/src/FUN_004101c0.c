// Name: FUN_004101c0
// Address: 004101c0
// Address Range: [[004101c0, 004101d3]]
// Convention: unknown
// Signature: bool FUN_004101c0(int param_1)

#include "nocturne.h"

bool FUN_004101c0(int param_1)

{
  return *(int *)(param_1 + 0x206a8) == 0;
}
