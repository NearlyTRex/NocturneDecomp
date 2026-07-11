// Name: FUN_0056b2b4
// Address: 0056b2b4
// Address Range: [[0056b2b4, 0056b326]]
// Convention: unknown
// Signature: int * FUN_0056b2b4(int *param_1,undefined1 *param_2)

#include "nocturne.h"

int * FUN_0056b2b4(int *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))(iVar1);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_0056b2df;
    }
  }
  pbVar2 = *(byte **)(iVar1 + 0x14);
  *(byte **)(iVar1 + 0x14) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2;
LAB_0056b2df:
  if (uVar3 != 0xffffffff) {
    *param_2 = (char)uVar3;
    param_1[1] = 1;
    return param_1;
  }
  FUN_0056b327(*(int *)(*param_1 + 4) + (int)param_1,6);
  param_1[1] = 0;
  return param_1;
}
