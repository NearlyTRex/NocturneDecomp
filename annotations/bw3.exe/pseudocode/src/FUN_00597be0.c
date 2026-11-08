// Name: FUN_00597be0
// Address: 00597be0
// Address Range: [[00597be0, 00597c69]]
// Convention: unknown
// Signature: void FUN_00597be0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00597be0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x158;
  if (0.0 < *(float *)(param_1 + 0xd080)) {
    FUN_004fc0d0(iVar1,0,1);
    return;
  }
  iVar2 = FUN_0040cea0(0,100);
  if (0x31 < iVar2) {
    if ((iVar2 < 0x32) || (0x5e < iVar2)) {
      FUN_004fc0d0(param_1 + 0x158,2,1);
      return;
    }
    if (param_2 != 0) {
      FUN_004fc0d0(iVar1,0,1);
      *(uint *)(param_1 + 0xd080) = 0;
      return;
    }
  }
  FUN_004fc0d0(iVar1,1,1);
  return;
}
