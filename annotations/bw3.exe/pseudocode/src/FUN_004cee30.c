// Name: FUN_004cee30
// Address: 004cee30
// Address Range: [[004cee30, 004cee63]]
// Convention: unknown
// Signature: void FUN_004cee30(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004cee30(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_004ced40(param_1,param_2 + 0x20,param_3,param_4,param_5);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_2 + 0x2c);
  *(int *)(iVar1 + 0x2a08) = param_2;
  return;
}
