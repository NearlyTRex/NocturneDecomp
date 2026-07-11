// Name: FUN_00410a80
// Address: 00410a80
// Address Range: [[00410a80, 00410bab]]
// Convention: unknown
// Signature: void FUN_00410a80(int param_1,int param_2)

#include "nocturne.h"

void FUN_00410a80(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if ((((param_2 != 0) && (param_2 != *(int *)(param_1 + 0x1fb14))) &&
      (*(int *)(param_1 + 0x1fb14) == 0)) &&
     ((iVar1 = FUN_0040d890(param_2,DAT_00765a98), iVar1 == 0 ||
      (iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1), iVar1 < 1)))) {
    *(int *)(param_1 + 0x1fb14) = param_2;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0xc0000000;
    pfVar2 = (float *)FUN_0040a200(*(uint *)(param_1 + 0x1fb14),local_34,&local_1c);
    iVar1 = *(int *)(param_1 + 0x1fb14);
    local_28 = *(float *)(iVar1 + 0x20) + *pfVar2;
    local_24 = *(float *)(iVar1 + 0x24) + pfVar2[1];
    local_20 = *(float *)(iVar1 + 0x28) + pfVar2[2];
    *(float *)(param_1 + 0x20) = local_28;
    *(float *)(param_1 + 0x24) = local_24;
    *(float *)(param_1 + 0x28) = local_20;
    iVar1 = *(int *)(param_1 + 0x1fb14);
    if ((uint *)(param_1 + 0x30) != (uint *)(iVar1 + 0x30)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar1 + 0x30);
      *(uint *)(param_1 + 0x34) = *(uint *)(iVar1 + 0x34);
      *(uint *)(param_1 + 0x38) = *(uint *)(iVar1 + 0x38);
    }
    FUN_00563cc0(param_1 + 0xbc94,0,0x2c);
    FUN_004e16b0(param_1 + 0x150,6,1);
    *(uint *)(param_1 + 0x1fb34) = 1;
    *(uint *)(param_1 + 0x1fb38) = 0;
    return;
  }
  return;
}
