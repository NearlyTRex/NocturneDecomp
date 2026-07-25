// Name: FUN_00447dd0
// Address: 00447dd0
// Address Range: [[00447dd0, 00447e73]]
// Convention: unknown
// Signature: void FUN_00447dd0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00447dd0(int param_1,uint param_2)

{
  _fprintf(param_2,"fogR,fogG,fogB\n");
  _fprintf();
  _fprintf(param_2,"fogVel\n");
  _fprintf(param_2,"%f,%f,%f\n",(double)*(float *)(param_1 + 0xc),
             (double)*(float *)(param_1 + 0x10),(double)*(float *)(param_1 + 0x14));
  _fprintf(param_2,"%f,%f\n",(double)*(float *)(param_1 + 0x18),
             (double)*(float *)(param_1 + 0x1c));
  _fprintf(param_2,"%f\n",(double)*(float *)(param_1 + 0x20));
  return;
}
