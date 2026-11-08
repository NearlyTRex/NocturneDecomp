// Name: FUN_0040e600
// Address: 0040e600
// Address Range: [[0040e600, 0040e662]]
// Convention: unknown
// Signature: void FUN_0040e600(int param_1,float param_2)

#include "nocturne.h"

void FUN_0040e600(int param_1,float param_2)

{
  *(float *)(param_1 + 0x478) = param_2;
  FUN_00436710(PTR_DAT_00609ed0,"Open pct : %f\n",(double)param_2);
  if ((*(int *)(param_1 + 0x4a4) == 0) &&
     (*(uint *)(param_1 + 0x4a4) = 1, *(char *)(param_1 + 0x484) != '\0')) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x484);
    return;
  }
  return;
}
