// Name: FUN_004d0000
// Address: 004d0000
// Address Range: [[004d0000, 004d001c]]
// Convention: unknown
// Signature: int FUN_004d0000(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004d0000(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 0x14) * 2 + 2) * param_3 + 0x20 + param_2;
}
