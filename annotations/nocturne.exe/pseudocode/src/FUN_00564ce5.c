// Name: FUN_00564ce5
// Address: 00564ce5
// Address Range: [[00564ce5, 00564d91]]
// Convention: unknown
// Signature: int * FUN_00564ce5(int *param_1,byte param_2)

#include "nocturne.h"

int * FUN_00564ce5(int *param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) == 0) &&
     (((*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8) == 0 &&
       ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 0x4000) == 0)) ||
      (iVar2 = FUN_0056b35c(param_1), iVar2 != 0)))) {
    iVar2 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
    pbVar1 = *(byte **)(iVar2 + 0x20);
    if (pbVar1 < *(byte **)(iVar2 + 0x1c)) {
      *(byte **)(iVar2 + 0x20) = pbVar1 + 1;
      *pbVar1 = param_2;
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar2 + 0x28) + 0xc))(iVar2,param_2);
    }
    if (uVar3 == 0xffffffff) {
      FUN_0056b327(*(int *)(*param_1 + 4) + (int)param_1,2);
    }
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 0x2000) != 0) {
      FUN_0056b3c2(param_1);
    }
  }
  return param_1;
}
