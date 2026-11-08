// Name: FUN_00573ab0
// Address: 00573ab0
// Address Range: [[00573ab0, 00573afb]]
// Convention: unknown
// Signature: undefined4 FUN_00573ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint FUN_00573ab0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0xfc) = param_2;
  *(uint *)(iVar1 + 0x100) = param_3;
  *(float *)(iVar1 + 0x104) = (float)param_4;
  FUN_00573e70();
  return 1;
}
