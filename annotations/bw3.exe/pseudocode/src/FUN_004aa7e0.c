// Name: FUN_004aa7e0
// Address: 004aa7e0
// Address Range: [[004aa7e0, 004aa805]]
// Convention: unknown
// Signature: int FUN_004aa7e0(int param_1)

#include "nocturne.h"

int FUN_004aa7e0(int param_1)

{
  FUN_004ab7a0(param_1);
  *(uint *)(param_1 + 0x40) = 0;
  FUN_004a8e00(0x1d19d30);
  return param_1;
}
