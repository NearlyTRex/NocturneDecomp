// Name: FUN_00551080
// Address: 00551080
// Address Range: [[00551080, 005510cb]]
// Convention: unknown
// Signature: undefined4 FUN_00551080(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint FUN_00551080(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0xfc) = param_2;
  *(uint *)(iVar1 + 0x100) = param_3;
  *(float *)(iVar1 + 0x104) = (float)param_4;
  FUN_00551440();
  return 1;
}
