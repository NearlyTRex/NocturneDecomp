// Name: crt_unknown.c_FUN_0060d576
// Address: 0060d576
// Address Range: [[0060d576, 0060d5fe]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_0060d576(int *param_1)

#include "nocturne.h"

uint FUN_0060d576(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = func_0x00608cd1(param_1,1);
  if (iVar2 == 0) {
    param_1[1] = 0;
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))(iVar2);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_0060d5b5;
    }
  }
  pbVar1 = *(byte **)(iVar2 + 0x14);
  *(byte **)(iVar2 + 0x14) = pbVar1 + 1;
  uVar3 = (uint)*pbVar1;
LAB_0060d5b5:
  if (uVar3 != 0xffffffff) {
    param_1[1] = 1;
    return uVar3;
  }
  reportStreamError
            ((FileEmbeddedData *)(*(int *)(*param_1 + 4) + (int)param_1),4);
  param_1[1] = 0;
  return 0xffffffff;
}
