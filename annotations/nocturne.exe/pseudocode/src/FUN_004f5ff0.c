// Name: FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f614d]]
// Convention: unknown
// Signature: void FUN_004f5ff0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004f5ff0(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1844 [1523];
  byte *puVar5;
  uint local_68;
  uint local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  byte local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  if (*(float *)(param_1 + 0x2d4) < 0.0) {
    *(uint *)(param_1 + 0x2d4) = 0;
  }
  if (1.0 < *(float *)(param_1 + 0x2d4)) {
    *(uint *)(param_1 + 0x2d4) = 0x3f800000;
  }
  puVar1 = (uint *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2e8) == '\0') {
    pfVar2 = (float *)(param_1 + 0x2d4);
    local_48 = *(float *)(param_1 + 800) * *pfVar2;
    local_44 = *(float *)(param_1 + 0x324) * *pfVar2;
    local_40 = *(float *)(param_1 + 0x328) * *pfVar2;
    local_18 = 1.0 - *(float *)(param_1 + 0x2d4);
    local_24 = *(float *)(param_1 + 0x314) * local_18;
    local_20 = *(float *)(param_1 + 0x318) * local_18;
    local_1c = *(float *)(param_1 + 0x31c) * local_18;
    local_3c = local_24 + local_48;
    local_38 = local_20 + local_44;
    local_34 = local_1c + local_40;
    *(float *)(param_1 + 0x20) = local_3c;
    *(float *)(param_1 + 0x24) = local_38;
    *(float *)(param_1 + 0x28) = local_34;
    FUN_0055d2d0(param_1 + 0x32c,param_1 + 0x33c,*(uint *)(param_1 + 0x2d4));
    puVar3 = &stack0xffffffa8;
    puVar5 = local_30;
    local_58 = local_68;
    *(uint *)((int)&stack0xffffffac + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8);
    *(uint *)(local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -0x20) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    *(uint *)
     ((int)(local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -0x20) + ((uint)bVar4 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    puVar3 = (uint *)FUN_0055d5b0(puVar5,puVar3);
    if (puVar1 != puVar3) {
      *puVar1 = *puVar3;
      *(uint *)(param_1 + 0x34) = puVar3[1];
      *(uint *)(param_1 + 0x38) = puVar3[2];
      return;
    }
  }
  else {
    local_14 = *(int *)(param_1 + 0x308);
    FUN_0043b800((int *)(param_1 + 0x308),(float)local_14 * *(float *)(param_1 + 0x2d4),
                 (float *)(param_1 + 0x20),puVar1);
  }
  return;
}
