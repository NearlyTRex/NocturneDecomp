// Name: FUN_004cadf0
// Address: 004cadf0
// Address Range: [[004cadf0, 004cae0c]]
// Convention: unknown
// Signature: int FUN_004cadf0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004cadf0(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 0x14) * 2 + 2) * param_3 + 0x20 + param_2;
}
