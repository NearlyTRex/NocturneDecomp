// Name: FUN_00556c10
// Address: 00556c10
// Address Range: [[00556c10, 00556c5b]]
// Convention: unknown
// Signature: undefined4 FUN_00556c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

uint FUN_00556c10(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0xfc) = param_2;
  *(uint *)(iVar1 + 0x100) = param_3;
  *(float *)(iVar1 + 0x104) = (float)param_4;
  FUN_00556fd0();
  return 1;
}
