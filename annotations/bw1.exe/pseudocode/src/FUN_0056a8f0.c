// Name: FUN_0056a8f0
// Address: 0056a8f0
// Address Range: [[0056a8f0, 0056ac5a]]
// Convention: unknown
// Signature: int FUN_0056a8f0(int param_1,float *param_2)

#include "nocturne.h"

int FUN_0056a8f0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_10e0 [1013];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_7c;
  float local_78;
  float local_68;
  uint local_5c;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  uint local_28;
  float local_24;
  float local_1c;
  
  bVar5 = 0;
  local_44 = FUN_00569f30(param_1);
  local_34 = 1e+30;
  local_40 = 0;
  local_30 = 0;
  if (0 < *(int *)(local_44 + 0x1de78)) {
    param_1 = param_1 + 0xe80;
    local_2c = local_44;
    local_3c = param_1;
    do {
      iVar1 = *(int *)(local_2c + 0x1de9c);
      if (-1 < iVar1) {
        local_68 = *(float *)(param_1 + 0xc);
        local_5c = *(uint *)(param_1 + 0x1c);
        local_7c = *(uint *)(param_1 + 0x2c);
        local_bc = local_68;
        local_b8 = *(uint *)(param_1 + 0x1c);
        local_b4 = *(uint *)(param_1 + 0x2c);
        local_98 = local_68;
        *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        iVar4 = iVar1 * 0x30 + local_3c;
        local_78 = *(float *)(iVar4 + 0xc);
        local_28 = *(uint *)(iVar4 + 0x2c);
        local_a0 = *(uint *)(iVar4 + 0x1c);
        local_a4 = local_78;
        local_9c = *(uint *)(iVar4 + 0x2c);
        local_d4 = local_78;
        *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_f4 = local_d0 - local_94;
        local_f0 = local_cc - local_90;
        local_ec = local_d4 - local_98;
        *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff0c + (uint)bVar5 * -8);
        fVar3 = local_94;
        *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffff10 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_38 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_38 <= 0.0) {
LAB_0056aae9:
          fVar3 = (param_2[1] - local_94) * (param_2[1] - local_94) +
                  (*param_2 - local_98) * (*param_2 - local_98);
          fVar2 = param_2[2] - local_90;
        }
        else {
          fVar2 = 1.0 / local_38;
          local_ec = local_ec * fVar2;
          local_e8 = local_e8 * fVar2;
          local_e4 = local_e4 * fVar2;
          local_24 = (param_2[2] * local_e4 + param_2[1] * local_e8 + *param_2 * local_ec) -
                     (local_90 * local_e4 + local_98 * local_ec + local_94 * local_e8);
          if (local_24 <= 0.0) goto LAB_0056aae9;
          if (local_24 < local_38) {
            local_8c = local_ec * local_24;
            local_88 = local_e8 * local_24;
            local_84 = local_e4 * local_24;
            local_e0 = local_ec * local_24;
            *(uint *)((int)&stack0xffffff24 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_b0 = local_98 + local_e0;
            local_ac = fVar3 + local_dc;
            local_a8 = local_90 + local_d8;
            local_c8 = local_98 + local_e0;
            *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff54 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff40 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            fVar3 = (param_2[1] - local_c4) * (param_2[1] - local_c4) +
                    (*param_2 - local_c8) * (*param_2 - local_c8);
            fVar2 = param_2[2] - local_c0;
          }
          else {
            fVar3 = (param_2[1] - local_d0) * (param_2[1] - local_d0) +
                    (*param_2 - local_d4) * (*param_2 - local_d4);
            fVar2 = param_2[2] - local_cc;
          }
        }
        local_1c = SQRT(fVar2 * fVar2 + fVar3);
        if (local_1c < local_34) {
          local_40 = iVar1;
          local_34 = local_1c;
        }
      }
      local_2c = local_2c + 0x24;
      param_1 = param_1 + 0x30;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(local_44 + 0x1de78));
  }
  return local_40;
}
