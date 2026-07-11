// Name: FUN_0051dd00
// Address: 0051dd00
// Address Range: [[0051dd00, 0051de5c]]
// Convention: unknown
// Signature: void FUN_0051dd00(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0051dd00(int param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  *(uint *)(param_1 + 0x22b0) = param_2;
  iVar1 = FUN_0051e0a0(param_1);
  FUN_004e1860(param_1,iVar1);
  local_14 = *(int *)(iVar1 + 0x28558);
  iVar4 = *(int *)(param_1 + 0x22b0);
  local_24 = *(float *)(iVar4 + 0x1744) * *(float *)(param_1 + 0x54);
  local_20 = *(float *)(iVar4 + 0x1748) * *(float *)(param_1 + 0x54);
  local_1c = *(float *)(iVar4 + 0x174c) * *(float *)(param_1 + 0x54);
  if ((float *)(param_1 + 0x508) != &local_24) {
    *(float *)(param_1 + 0x508) = local_24;
    *(float *)(param_1 + 0x50c) = local_20;
    *(float *)(param_1 + 0x510) = local_1c;
  }
  iVar4 = 0;
  if (0 < local_14) {
    pfVar5 = (float *)(param_1 + 0x54);
    local_18 = param_1;
    pfVar3 = (float *)(param_1 + 0x58);
    do {
      pfVar2 = (float *)FUN_00518180(*(uint *)(param_1 + 0x22b0),iVar4);
      if (pfVar3 != pfVar2) {
        *pfVar3 = *pfVar2;
        pfVar3[1] = pfVar2[1];
        pfVar3[2] = pfVar2[2];
      }
      *(uint *)(local_18 + 0x514) = *(uint *)(param_1 + 0x54);
      if (*(int *)(iVar1 + 0x2857c) < 0) {
        *pfVar3 = *pfVar5 * *pfVar3;
        pfVar3[1] = *pfVar5 * pfVar3[1];
        pfVar3[2] = *pfVar5 * pfVar3[2];
      }
      iVar1 = iVar1 + 0x24;
      pfVar3 = pfVar3 + 3;
      local_18 = local_18 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_14);
  }
  FUN_0051b750(param_1);
  FUN_0051de60(param_1);
  FUN_0051b880(param_1);
  return;
}
