// Name: FUN_004b1d90
// Address: 004b1d90
// Address Range: [[004b1d90, 004b1f0d]]
// Convention: unknown
// Signature: void FUN_004b1d90(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1d90(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1034 [1010];
  int *piVar5;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  if (0.0 < (float)param_1[0xf7]) {
    local_10 = *(float *)(0x01CCF390 + 0x294);
    fVar2 = (float)param_1[0xf7];
    pfVar1 = (float *)(param_1 + 0x60);
    param_1[0xf7] = (int)(fVar2 - local_10);
    if (0.0 < fVar2 - local_10) {
      FUN_0041e0d0(pfVar1,local_10);
      if (*param_1 != 0) {
        return;
      }
      piVar5 = param_1 + 1;
      local_40 = _DAT_02c8af28;
      (&stack0xffffffc4)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)(&DAT_02c8af2c + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&DAT_02c8af30 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      iVar3 = FUN_00468900(piVar5);
      local_38 = local_38 + *(float *)(iVar3 + 0x34c);
      FUN_0045f690(param_1 + 0x66,&stack0xffffffc0);
      local_1c = local_28;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_4c = *pfVar1 + local_1c;
      local_48 = (float)param_1[0x61] + local_18;
      local_44 = (float)param_1[0x62] + local_14;
      local_34 = *pfVar1 + local_1c;
      (&stack0xffffffd0)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (&stack0xffffffc0 != &stack0xffffffcc) {
        local_40 = local_34;
        local_3c = local_30;
        local_38 = local_2c;
      }
      FUN_004b59e0(0x01C57074,&stack0xffffffc0,0,0x20000,0x10000,0,0xffff);
      return;
    }
    if (*param_1 == 0) {
      FUN_004b6c60(0x01C57074,pfVar1,0x41800000,0x42c80000,0x40800000);
      FUN_00573a80(param_1[0xf8]);
      return;
    }
  }
  return;
}
