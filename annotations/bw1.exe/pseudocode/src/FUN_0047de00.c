// Name: FUN_0047de00
// Address: 0047de00
// Address Range: [[0047de00, 0047e147]]
// Convention: unknown
// Signature: void FUN_0047de00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047de00(int param_1,float param_2)

{
  byte *puVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1068 [1002];
  ulonglong uVar7;
  float local_80;
  uint local_74;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  
  bVar6 = 0;
  fVar3 = *(float *)(param_1 + 0xc2fc) - param_2;
  *(float *)(param_1 + 0xc2fc) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0xc2fc) = 0;
  }
  local_28 = &DAT_01bc0d54;
  local_2c = &DAT_01bc0f4c;
  do {
    local_24 = local_28;
    if (param_1 == *(int *)(local_28 + 0x50)) {
      iVar2 = FUN_005735a0();
      puVar1 = local_28;
      if (iVar2 == 0) {
        *(uint *)(local_28 + 0x50) = 0;
      }
      else {
        local_18 = (float *)(local_28 + 0x44);
        *(float *)(local_28 + 0x1c) = *(float *)(local_28 + 0x1c) + param_2;
        local_1c = (float *)(local_28 + 0x38);
        local_20 = (float *)(local_28 + 0x20);
        pfVar4 = (float *)(local_28 + 0x2c);
        while (1.0 < *(float *)(local_24 + 0x1c)) {
          *(float *)(local_24 + 0x1c) = *(float *)(local_24 + 0x1c) + _DAT_005dafe9;
          if (pfVar4 != local_20) {
            *local_20 = *pfVar4;
            local_20[1] = *(float *)(puVar1 + 0x30);
            local_20[2] = *(float *)(puVar1 + 0x34);
          }
          if (pfVar4 != local_1c) {
            *pfVar4 = *local_1c;
            *(float *)(puVar1 + 0x30) = local_1c[1];
            *(float *)(puVar1 + 0x34) = local_1c[2];
          }
          if (local_1c != local_18) {
            *local_1c = *local_18;
            local_1c[1] = local_18[1];
            local_1c[2] = local_18[2];
          }
          uVar7 = 0x40a00000c0a00000;
          local_80 = _DAT_01fe37f0;
          *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8) =
               *(uint *)(&DAT_01fe37f4 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&DAT_01fe37f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          fVar3 = (float)FUN_0040cc00(uVar7);
          local_14 = fVar3;
          local_68 = local_80;
          *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          local_68 = fVar3 + local_68;
          local_14 = (float)FUN_0040cc00(0xc0000000);
          local_64 = local_14 + local_64;
          local_14 = (float)FUN_0040cc00(0xc0a00000);
          local_60 = local_14 + local_60;
          local_50 = local_68;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (&stack0xffffffb0 != local_18) {
            *local_18 = local_50;
            local_18[1] = local_4c;
            local_18[2] = local_48;
          }
        }
        FUN_00583d60();
        FUN_00583f90();
        puVar1 = local_24;
        puVar5 = (uint *)(local_24 + 4);
        local_44 = local_5c;
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (puVar5 != &stack0xffffffbc) {
          *puVar5 = local_44;
          *(uint *)(puVar1 + 8) = local_40;
          *(uint *)(puVar1 + 0xc) = local_3c;
        }
        FUN_00445430(PTR_DAT_00611100,"@%5.2f %5.2f %5.2f\n" + 1,
                     (double)*(float *)(local_24 + 4),(double)*(float *)(local_24 + 8),
                     (double)*(float *)(local_24 + 0xc));
        FUN_005841d0();
        local_38 = local_74;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if ((uint *)(local_24 + 0x10) != &stack0xffffffc8) {
          *(uint *)(local_24 + 0x10) = local_38;
          *(uint *)(local_24 + 0x14) = local_34;
          *(uint *)(local_24 + 0x18) = local_30;
        }
      }
    }
    local_28 = local_28 + 0x54;
  } while (local_28 != local_2c);
  return;
}
