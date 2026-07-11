// Name: FUN_0044b500
// Address: 0044b500
// Address Range: [[0044b500, 0044b63d]]
// Convention: unknown
// Signature: undefined4 FUN_0044b500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,uint *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044b500(int param_1,uint param_2,uint param_3,uint param_4,float *param_5,uint *param_6)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_1c [3];
  
  iVar6 = -1;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar7 = 0;
    do {
      iVar4 = FUN_00449d30(*(int *)(param_1 + 0x2c) + iVar7,param_2,param_3,param_4);
      if (iVar4 != 0) {
        iVar6 = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x20;
    } while (iVar5 < *(int *)(param_1 + 0x28));
  }
  if (-1 < iVar6) {
    puVar3 = *(uint **)(iVar6 * 0x20 + *(int *)(param_1 + 0x2c));
    if (puVar3 != (uint *)&DAT_014b89e8) {
      _DAT_014b89e8 = *puVar3;
      _DAT_014b89f0 = puVar3[2];
      _DAT_014b89ec = puVar3[1];
    }
    puVar3 = *(uint **)(*(int *)(param_1 + 0x2c) + 4 + iVar6 * 0x20);
    if (puVar3 != (uint *)&DAT_014b89f4) {
      _DAT_014b89f4 = *puVar3;
      _DAT_014b89fc = puVar3[2];
      _DAT_014b89f8 = puVar3[1];
    }
    puVar3 = *(uint **)(iVar6 * 0x20 + 8 + *(int *)(param_1 + 0x2c));
    if (puVar3 != (uint *)&DAT_014b8a00) {
      _DAT_014b8a00 = *puVar3;
      _DAT_014b8a08 = puVar3[2];
      _DAT_014b8a04 = puVar3[1];
    }
    *param_6 = (uint)*(byte *)(*(int *)(param_1 + 0x30) + iVar6);
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar6 = iVar6 * 0x20;
    fVar1 = *(float *)(iVar5 + 0x10 + iVar6);
    fVar2 = *(float *)(iVar5 + 0x14 + iVar6);
    if (local_1c != param_5) {
      *param_5 = -*(float *)(iVar5 + 0xc + iVar6);
      param_5[1] = -fVar1;
      param_5[2] = -fVar2;
    }
    return 1;
  }
  return 0;
}
