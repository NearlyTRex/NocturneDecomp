// Name: FUN_0042f390
// Address: 0042f390
// Address Range: [[0042f390, 0042f3b3]]
// Convention: unknown
// Signature: undefined4 FUN_0042f390(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0042f390(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00569eb0(param_1 + 0x158,param_2);
  iVar2 = FUN_00565760(uVar1);
  return *(uint *)(iVar2 + 0x5c);
}
