// Name: FUN_004ef890
// Address: 004ef890
// Address Range: [[004ef890, 004efa56]]
// Convention: unknown
// Signature: void FUN_004ef890(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ef890(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float local_20;
  byte local_1c [12];
  
  if (1.0 <= *(float *)(param_1 + 0x202a8)) {
    return;
  }
  iVar3 = FUN_004e1660(param_1 + 0x150);
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((iVar3 == 1) || (iVar3 == 2)) {
    if ((iVar3 == 2) &&
       ((fVar2 = param_2 / _DAT_005a1068 + *(float *)(param_1 + 0x202a8),
        *(float *)(param_1 + 0x202a8) = fVar2, 1.0 <= fVar2 && (*(int *)(param_1 + 0x1f678) != 0))))
    {
      FUN_004d8c60(0x01CC9450,*(int *)(param_1 + 0x1f678));
      uVar5 = 0x01CC9450;
      *(uint *)(param_1 + 0x1f678) = 0;
      FUN_004d9110(uVar5,param_1,1);
    }
  }
  else {
    iVar4 = FUN_0047dc30(0x01C03A10,param_1 + 0x1f570);
    if (iVar4 != 0) {
      FUN_004e16b0(param_1 + 0x150,1,1);
      if (*(char *)(param_1 + 0x1f614) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x1f614);
        *(byte *)(param_1 + 0x1f614) = 0;
      }
    }
  }
  local_20 = param_2;
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  while (0.0 < local_20) {
    uVar5 = FUN_004e11c0(param_1 + 0x150,&local_20);
    FUN_0042add0(param_1,uVar5);
  }
  if (iVar3 != 0) {
    pfVar6 = (float *)FUN_0040a200(param_1,local_1c,param_1 + 0x23a4);
    pfVar1 = (float *)(param_1 + 0x20);
    *pfVar1 = *pfVar6 + *pfVar1;
    *(float *)(param_1 + 0x24) = pfVar6[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar6[2] + *(float *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x1f678);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x20) = *pfVar1;
      *(uint *)(iVar3 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar3 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar3 + 0x2c) = *(uint *)(param_1 + 0x2c);
    }
  }
  FUN_0051b8a0(param_1 + 0x150);
  FUN_0042a150(param_1,param_2);
  return;
}
