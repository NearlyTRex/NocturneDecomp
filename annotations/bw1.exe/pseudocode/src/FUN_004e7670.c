// Name: FUN_004e7670
// Address: 004e7670
// Address Range: [[004e7670, 004e768c]]
// Convention: unknown
// Signature: int FUN_004e7670(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004e7670(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 0x14) * 2 + 2) * param_3 + 0x20 + param_2;
}
