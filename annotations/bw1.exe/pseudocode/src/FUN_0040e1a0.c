// Name: FUN_0040e1a0
// Address: 0040e1a0
// Address Range: [[0040e1a0, 0040e202]]
// Convention: unknown
// Signature: void FUN_0040e1a0(int param_1,float param_2)

#include "nocturne.h"

void FUN_0040e1a0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x31c) = param_2;
  FUN_00445430(PTR_DAT_00611100,"Open pct : %f\n",(double)param_2);
  if ((*(int *)(param_1 + 0x348) == 0) &&
     (*(uint *)(param_1 + 0x348) = 1, *(char *)(param_1 + 0x328) != '\0')) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x328);
    return;
  }
  return;
}
