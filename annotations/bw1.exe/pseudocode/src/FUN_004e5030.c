// Name: FUN_004e5030
// Address: 004e5030
// Address Range: [[004e5030, 004e50d5]]
// Convention: unknown
// Signature: void FUN_004e5030(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e5030(int param_1,uint param_2)

{
  FUN_005c03c0(param_2,"%f,%f,%f\n",(double)*(float *)(param_1 + 4),
               (double)*(float *)(param_1 + 8),(double)*(float *)(param_1 + 0xc));
  FUN_005c03c0();
  FUN_005c03c0(param_2,"%f,%f,%f\n",(double)*(float *)(param_1 + 0x18),
               (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x1c));
  FUN_005c03c0(param_2,"%d,%d,%d,%d,%d,%d,%d\n",*(uint *)(param_1 + 0x28),
               *(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),
               *(uint *)(param_1 + 0x34),*(uint *)(param_1 + 0x38),
               *(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x40));
  return;
}
