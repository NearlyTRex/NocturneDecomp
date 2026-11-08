// Name: FUN_00483520
// Address: 00483520
// Address Range: [[00483520, 0048354c]]
// Convention: unknown
// Signature: void FUN_00483520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00483520(int param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_00483c00(param_1,param_2,param_4);
  *(uint *)(param_1 + 0x194) = param_3;
  FUN_004849f0(param_1);
  return;
}
