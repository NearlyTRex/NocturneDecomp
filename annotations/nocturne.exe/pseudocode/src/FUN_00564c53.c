// Name: FUN_00564c53
// Address: 00564c53
// Address Range: [[00564c53, 00564ce4]]
// Convention: unknown
// Signature: int * FUN_00564c53(int *param_1,undefined1 *param_2)

#include "nocturne.h"

int * FUN_00564c53(int *param_1,byte *param_2)

{
  byte *puVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) != 0) ||
      (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) != 0)) &&
     (iVar3 = FUN_0056b227(param_1,1), iVar3 == 0)) {
    param_1[1] = 0;
    return param_1;
  }
  iVar3 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(uint *)(iVar3 + 0x10) != *(uint *)(iVar3 + 0x14)) {
    if ((*(uint *)(iVar3 + 0x14) < *(uint *)(iVar3 + 0x10)) ||
       (iVar4 = (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(iVar3), iVar4 != -1)) {
      puVar1 = *(byte **)(iVar3 + 0x14);
      *(byte **)(iVar3 + 0x14) = puVar1 + 1;
      uVar2 = *puVar1;
    }
    else {
      uVar2 = 0xff;
    }
    *param_2 = uVar2;
    return param_1;
  }
  FUN_0056b2b4(param_1,param_2);
  return param_1;
}
