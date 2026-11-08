// Name: FUN_00557300
// Address: 00557300
// Address Range: [[00557300, 005574bf]]
// Convention: unknown
// Signature: undefined4 FUN_00557300(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

uint FUN_00557300(int param_1,float *param_2,float *param_3)

{
  uint *puVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1044 [1013];
  float local_5c;
  uint local_58;
  uint local_54;
  float local_50;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  bVar3 = 0;
  if ((float *)(param_1 + 0x14d110) != param_2) {
    *(float *)(param_1 + 0x14d110) = *param_2;
    *(float *)(param_1 + 0x14d114) = param_2[1];
    *(float *)(param_1 + 0x14d118) = param_2[2];
  }
  if ((float *)(param_1 + 0x14d11c) != param_3) {
    *(float *)(param_1 + 0x14d11c) = *param_3;
    *(float *)(param_1 + 0x14d120) = param_3[1];
    *(float *)(param_1 + 0x14d124) = param_3[2];
  }
  puVar1 = (uint *)(param_1 + 0x15f6e4);
  local_14 = FUN_0048b150(&DAT_01fe5c1c,param_2,param_3,puVar1,param_1 + 0x15f6f0);
  *(uint *)(param_1 + 0x15f6e0) = local_14;
  if ((uint *)(param_1 + 0x14d128) != puVar1) {
    *(uint *)(param_1 + 0x14d128) = *puVar1;
    *(uint *)(param_1 + 0x14d12c) = *(uint *)(param_1 + 0x15f6e8);
    *(uint *)(param_1 + 0x14d130) = *(uint *)(param_1 + 0x15f6ec);
  }
  *(uint *)(param_1 + 0x14d134) = *(uint *)(param_1 + 0x15f6f0);
  if (*(float *)(param_1 + 0x15f6e0) < 0.0) {
    *(uint *)(param_1 + 0x15f6e0) = 0x3f8147ae;
  }
  local_14 = FUN_005578b0(param_1,0xbf800000,param_2,param_3,*(uint *)(param_1 + 0x15f6e0));
  *(uint *)(param_1 + 0x15f6dc) = local_14;
  if (*(float *)(param_1 + 0x15f6dc) <= 1.0) {
    local_2c = *param_3 - *param_2;
    local_28 = param_3[1] - param_2[1];
    local_24 = param_3[2] - param_2[2];
    local_38 = *param_3 - *param_2;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    pfVar2 = (float *)(param_1 + 0x15f6dc);
    local_20 = local_38 * *pfVar2;
    local_1c = local_34 * *pfVar2;
    local_18 = local_30 * *pfVar2;
    local_50 = local_38 * *pfVar2;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_44 = *param_2 + local_50;
    local_40 = param_2[1] + local_4c;
    local_3c = param_2[2] + local_48;
    local_5c = *param_2 + local_50;
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if ((float *)(param_1 + 0x14d138) != &stack0xffffffa4) {
      *(float *)(param_1 + 0x14d138) = local_5c;
      *(uint *)(param_1 + 0x14d13c) = local_58;
      *(uint *)(param_1 + 0x14d140) = local_54;
      return *(uint *)(param_1 + 0x15f6dc);
    }
  }
  return *(uint *)(param_1 + 0x15f6dc);
}
