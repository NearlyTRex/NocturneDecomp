// Name: FUN_00548120
// Address: 00548120
// Address Range: [[00548120, 0054813e]]
// Convention: unknown
// Signature: int FUN_00548120(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00548120(int param_1,int param_2,int param_3)

{
  return (param_3 * *(int *)(param_1 + 0x1de78) + param_2) * 0x10 + *(int *)(param_1 + 0x1ec90);
}
