// Name: FUN_004b1800
// Address: 004b1800
// Address Range: [[004b1800, 004b181c]]
// Convention: unknown
// Signature: int FUN_004b1800(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004b1800(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 0x14) * 2 + 2) * param_3 + 0x20 + param_2;
}
