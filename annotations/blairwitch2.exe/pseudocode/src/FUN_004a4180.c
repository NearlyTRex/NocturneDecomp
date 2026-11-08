// Name: FUN_004a4180
// Address: 004a4180
// Address Range: [[004a4180, 004a41a5]]
// Convention: unknown
// Signature: int FUN_004a4180(int param_1)

#include "nocturne.h"

int FUN_004a4180(int param_1)

{
  FUN_004a50b0(param_1);
  *(uint *)(param_1 + 0x40) = 0;
  FUN_004a27e0(0x1caf240);
  return param_1;
}
