// Name: core_gore.cpp_CBloodSplat_load_FUN_004af160
// Address: 004af160
// Address Range: [[004af160, 004af1e1]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodSplat_load_FUN_004af160(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_gore_cpp_CBloodSplat_load_FUN_004af160(int param_1,uint param_2)

{
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 4,param_1 + 8,param_1 + 0xc);
  _fscanf(param_2,"%d,%d,%d\n",param_1 + 0x10,param_1 + 0x14,param_1);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x18,param_1 + 0x20,param_1 + 0x1c);
  _fscanf(param_2,"%d,%d,%d,%d,%d,%d,%d\n",param_1 + 0x28,param_1 + 0x2c,param_1 + 0x30,
             param_1 + 0x34,param_1 + 0x38,param_1 + 0x3c,param_1 + 0x40);
  return;
}
