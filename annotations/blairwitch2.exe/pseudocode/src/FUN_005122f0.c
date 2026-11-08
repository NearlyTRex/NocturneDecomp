// Name: FUN_005122f0
// Address: 005122f0
// Address Range: [[005122f0, 00512384]]
// Convention: unknown
// Signature: undefined4 FUN_005122f0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

uint FUN_005122f0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if ((((param_3 < 0) || (99 < param_3)) || (param_2 < 0)) || (99 < param_2)) {
    uVar1 = 0xffffd8f1;
  }
  else {
    iVar2 = param_3 * 4 + param_2 * 400 + param_1;
    if (param_4 != *(int *)(iVar2 + 0x9c70)) {
      local_18 = *(int *)(param_1 + 0x24) + param_3;
      local_14 = param_4 + 5;
      local_10 = *(int *)(param_1 + 0x2c) + param_2;
      uVar1 = FUN_00476c30(&DAT_01fc9c68,&local_18);
      *(uint *)(iVar2 + 0x30) = uVar1;
      *(int *)(iVar2 + 0x9c70) = param_4;
      return uVar1;
    }
    uVar1 = *(uint *)(iVar2 + 0x30);
  }
  return uVar1;
}
