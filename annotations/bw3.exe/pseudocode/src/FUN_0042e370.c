// Name: FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e393]]
// Convention: unknown
// Signature: undefined4 FUN_0042e370(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0042e370(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0054ea40(param_1 + 0x158,param_2);
  iVar2 = FUN_0054a2f0(uVar1);
  return *(uint *)(iVar2 + 0x5c);
}
