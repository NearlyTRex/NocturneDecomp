// Name: FUN_004bcb70
// Address: 004bcb70
// Address Range: [[004bcb70, 004bcb95]]
// Convention: unknown
// Signature: int FUN_004bcb70(int param_1)

#include "nocturne.h"

int FUN_004bcb70(int param_1)

{
  FUN_004bdaa0(param_1);
  *(uint *)(param_1 + 0x40) = 0;
  FUN_004bb1c0(0x1cc7cd4);
  return param_1;
}
