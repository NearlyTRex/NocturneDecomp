// Name: FUN_004c99e0
// Address: 004c99e0
// Address Range: [[004c99e0, 004c9dc5]]
// Convention: unknown
// Signature: undefined4 FUN_004c99e0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c99e0(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_10e0 [1011];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_5c;
  uint local_50;
  uint local_4c;
  uint local_44;
  uint local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float local_18;
  
  bVar2 = 0;
  local_1c = (float *)(param_1 + 0x20);
  local_24 = 0;
  local_20 = 0;
  *(uint *)(param_1 + 0x1ff84) = 0;
  do {
    if (*(int *)(0x01E82168 + 0x14d164) <= local_24) {
      return 0;
    }
    iVar1 = FUN_0040c600(*(uint *)(0x01E82168 + local_20 + 0x14d168),_DAT_01d1bcdc);
    local_2c = iVar1;
    if (iVar1 != 0) {
      local_b0 = *local_1c - *(float *)(iVar1 + 0x20);
      local_ac = local_1c[1] - *(float *)(iVar1 + 0x24);
      local_a8 = local_1c[2] - *(float *)(iVar1 + 0x28);
      local_98 = local_b0;
      *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff54 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff70 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if ((ABS(local_94) <= (float)_DAT_005e113c) &&
         (local_94 = 0.0, SQRT(local_90 * local_90 + local_98 * local_98) <= (float)_DAT_005e1144))
      {
        FUN_00408bb0(param_1,(float *)(iVar1 + 0x20));
        local_f8 = local_80;
        (&stack0xffffff0c)[(uint)bVar2 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff84 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffff10 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        if ((ABS(local_f8) <= (float)_DAT_005e114c) &&
           (((float)_DAT_005e1154 <= local_f0 && ((double)local_f0 <= _DAT_005e1144)))) {
          FUN_005a7520(&stack0xffffff08);
          local_d4 = local_38;
          *(uint *)((int)&stack0xffffff30 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffff34 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          local_18 = (float)FUN_0040cd60(local_d0);
          if (ABS(local_18) <= (float)_DAT_005e115c) {
            local_28 = 0;
            FUN_00408bb0(iVar1,local_1c);
            local_ec = local_5c;
            (&stack0xffffff18)[(uint)bVar2 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xffffffa8 + (uint)bVar2 * -8);
            *(uint *)((int)&stack0xffffff1c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
                 *(uint *)(&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8);
            if (&stack0xffffff08 != &stack0xffffff14) {
              local_f8 = local_ec;
              local_f4 = local_e8;
              local_f0 = local_e4;
            }
            if (local_f0 < 0.0) {
              local_28 = 1;
              local_f0 = -local_f0;
            }
            if (((ABS(local_f8) <= (float)_DAT_005e114c) && ((float)_DAT_005e1154 <= local_f0)) &&
               ((double)local_f0 <= _DAT_005e1144)) {
              FUN_005a7520(&stack0xffffff08);
              local_50 = local_44;
              *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8) =
                   *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8);
              *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
                   *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
              local_18 = (float)FUN_0040cd60(local_4c);
              if (ABS(local_18) <= (float)_DAT_005e115c) {
                *(int *)(param_1 + 0x1ff84) = local_2c;
                FUN_005247c0(param_1 + 0x158,0x16,1);
                *(uint *)(param_1 + 0xc1e4) = 0;
                local_c0 = 0x40000000;
                local_c8 = 0;
                local_c4 = 0;
                if (local_28 != 0) {
                  local_c0 = 0xc0000000;
                }
                FUN_00408b40(local_2c,&stack0xffffff38);
                local_74 = local_a4;
                *(uint *)((int)&stack0xffffff90 + (uint)bVar2 * -8) =
                     *(uint *)(&stack0xffffff60 + (uint)bVar2 * -8);
                *(uint *)((int)&stack0xffffff94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
                     *(uint *)(&stack0xffffff64 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
                *(uint *)(param_1 + 0x20) = local_74;
                *(uint *)(param_1 + 0x24) = local_70;
                *(uint *)(param_1 + 0x28) = local_6c;
                local_8c = *(float *)(local_2c + 0x20) - *(float *)(param_1 + 0x20);
                local_88 = *(float *)(local_2c + 0x24) - *(float *)(param_1 + 0x24);
                local_84 = *(float *)(local_2c + 0x28) - *(float *)(param_1 + 0x28);
                local_bc = local_8c;
                *(uint *)((int)&stack0xffffff48 + (uint)bVar2 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * -8);
                *(uint *)(&stack0xffffff4c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
                     *(uint *)((int)&stack0xffffff7c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
                FUN_005a7520(&stack0xffffff44);
                local_68 = local_e0;
                *(uint *)((int)&stack0xffffff9c + (uint)bVar2 * -8) =
                     *(uint *)(&stack0xffffff24 + (uint)bVar2 * -8);
                *(uint *)(&stack0xffffffa0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
                     *(uint *)(&stack0xffffff28 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
                *(uint *)(param_1 + 0x34) = local_64;
                FUN_004088b0(param_1);
                return 1;
              }
            }
          }
        }
      }
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while( true );
}
