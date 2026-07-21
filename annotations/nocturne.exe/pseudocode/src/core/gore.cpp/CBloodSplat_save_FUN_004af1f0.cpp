// Name: core_gore.cpp_CBloodSplat_save_FUN_004af1f0
// Address: 004af1f0
// Address Range: [[004af1f0, 004af295]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodSplat_save_FUN_004af1f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_gore_cpp_CBloodSplat_save_FUN_004af1f0(int param_1,uint param_2)

{
  _fprintf(param_2,"%f,%f,%f\n",(double)*(float *)(param_1 + 4),
             (double)*(float *)(param_1 + 8),(double)*(float *)(param_1 + 0xc));
  _fprintf();
  _fprintf(param_2,"%f,%f,%f\n",(double)*(float *)(param_1 + 0x18),
             (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x1c));
  _fprintf(param_2,"%d,%d,%d,%d,%d,%d,%d\n",*(uint *)(param_1 + 0x28),
             *(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),
             *(uint *)(param_1 + 0x34),*(uint *)(param_1 + 0x38),
             *(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x40));
  return;
}
