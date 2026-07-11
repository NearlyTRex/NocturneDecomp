// Name: FUN_0044f9b0
// Address: 0044f9b0
// Address Range: [[0044f9b0, 00450161]]
// Convention: unknown
// Signature: void FUN_0044f9b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f9b0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  byte *puVar5;
  byte bVar6;
  float10 fVar7;
  int aiStackY_10d4 [992];
  byte local_138 [4];
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  int aiStack_e8 [2];
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  byte local_c8 [12];
  int local_bc;
  int local_b8;
  int local_b4;
  byte local_b0 [12];
  int local_a4;
  int local_a0 [2];
  float local_98;
  float local_94;
  float local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  byte local_44 [20];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    FUN_00460d30(DAT_005ae704,&local_74);
    local_74 = local_74 - *(float *)(param_1 + 0x104);
    local_70 = local_70 - *(float *)(param_1 + 0x108);
    local_6c = local_6c - *(float *)(param_1 + 0x10c);
    pfVar4 = (float *)FUN_0044daa0(param_1 + 0x110,local_b0,&local_74);
    if (&local_74 != pfVar4) {
      local_74 = *pfVar4;
      local_70 = pfVar4[1];
      local_6c = pfVar4[2];
    }
    if (local_6c <= *(float *)(param_1 + 0x100)) {
      local_30 = local_70 * local_70;
      local_24 = ((local_6c * (float)_DAT_0057c7ee) / *(float *)(param_1 + 0x138)) *
                 (float)_DAT_0057c7f6;
      local_28 = local_74 * local_74 + local_30;
      local_2c = local_24 * local_24;
      if (local_28 <= local_2c) {
        fVar1 = local_28 / local_2c;
        FUN_00460d10(DAT_005ae704);
        local_a4 = local_ec;
        local_a0[(uint)bVar6 * -2] = aiStack_e8[(uint)bVar6 * -2];
        local_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             aiStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        local_f8 = (float)local_a4 * _DAT_0059c038;
        local_f4 = (float)local_a0[0] * _DAT_0059c038;
        local_f0 = (float)local_a0[1] * _DAT_0059c038;
        local_80 = local_f8 - *(float *)(param_1 + 0x104);
        local_7c = local_f4 - *(float *)(param_1 + 0x108);
        local_78 = local_f0 - *(float *)(param_1 + 0x10c);
        fVar2 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
        if (0.0 < fVar2) {
          fVar2 = 1.0 / fVar2;
          local_80 = local_80 * fVar2;
          local_7c = local_7c * fVar2;
          local_78 = local_78 * fVar2;
          local_8c = 0;
          local_88 = 0;
          local_84 = 0x3f800000;
          local_14 = (float)(0xffff - _DAT_01c038f4);
          pfVar4 = (float *)FUN_0044da40(param_1 + 0x110,local_c8,&local_8c);
          if (0.0 < (local_78 * pfVar4[2] + local_80 * *pfVar4 + local_7c * pfVar4[1]) * local_14 *
                    _DAT_0057c7fe) {
            fVar7 = (float10)(1.0 - fVar1) * (float10)_DAT_0057c806;
            FUN_00563a30(DAT_005ae704,1);
            local_1c = (int)ROUND(fVar7);
            FUN_00461000();
            local_18 = 0;
            puVar5 = &DAT_005ae488;
            local_20 = (float *)(param_1 + 0x104);
            do {
              local_14 = (float)local_18;
              fVar1 = (float)local_18 * _DAT_0057c80e * *(float *)(param_1 + 0x100);
              local_110 = *(float *)(param_1 + 0x118);
              local_fc = fVar1 * (float)_DAT_0057c81e;
              local_10c = *(float *)(param_1 + 0x124);
              local_104 = local_110 * local_fc;
              local_100 = local_10c * local_fc;
              local_108 = *(float *)(param_1 + 0x130);
              local_fc = local_108 * local_fc;
              fVar1 = *(float *)(puVar5 + 0x1c) * (float)_DAT_0057c816 *
                      ((fVar1 * (float)_DAT_0057c7ee) / *(float *)(param_1 + 0x138)) *
                      (float)_DAT_0057c7f6;
              local_68 = *local_20 + local_104;
              local_64 = local_20[1] + local_100;
              local_60 = local_20[2] + local_fc;
              if ((float *)(aiStack_e8 + 2) != &local_68) {
                local_e0 = local_68;
                local_dc = local_64;
                local_d8 = local_60;
              }
              FUN_00460a00(DAT_005ae704,aiStack_e8 + 2);
              FUN_00460db0(DAT_005ae704,local_44);
              FUN_00460aa0(DAT_005ae704,local_44,0);
              local_90 = 0.0;
              local_d4 = (int)ROUND(fVar1 * _DAT_0059c030);
              local_d0 = (int)ROUND(fVar1 * _DAT_0059c030);
              local_cc = (int)ROUND(_DAT_0059c030 * 0.0);
              local_98 = fVar1;
              local_94 = fVar1;
              FUN_0053075c(*DAT_005ae704,&local_d4);
              local_98 = -local_98;
              local_5c = (int)ROUND(local_98 * _DAT_0059c030);
              local_58 = (int)ROUND(local_94 * _DAT_0059c030);
              local_54 = (int)ROUND(local_90 * _DAT_0059c030);
              FUN_0053075c(*DAT_005ae704 + 0x30,&local_5c);
              local_94 = -local_94;
              local_50 = (int)ROUND(local_98 * _DAT_0059c030);
              local_4c = (int)ROUND(local_94 * _DAT_0059c030);
              local_48 = (int)ROUND(local_90 * _DAT_0059c030);
              FUN_0053075c(*DAT_005ae704 + 0x60,&local_50);
              local_98 = -local_98;
              local_bc = (int)ROUND(local_98 * _DAT_0059c030);
              local_b8 = (int)ROUND(local_94 * _DAT_0059c030);
              local_b4 = (int)ROUND(local_90 * _DAT_0059c030);
              FUN_0053075c(*DAT_005ae704 + 0x90,&local_bc);
              FUN_00461eb0(DAT_005ae704,puVar5);
              piVar3 = DAT_005ae704;
              local_134 = 4;
              local_124 = 0;
              local_128 = 0;
              local_12c = 0;
              local_130 = 0;
              local_120 = 0;
              *(int *)(*DAT_005ae704 + 0x18) = *(int *)(puVar5 + 0x20) << 0x10;
              *(int *)(*piVar3 + 0x1c) = *(int *)(puVar5 + 0x24) << 0x10;
              *(int *)(*piVar3 + 0x2c) = local_1c;
              *(uint *)(*piVar3 + 0x20) = 0xffff;
              *(uint *)(*piVar3 + 0x24) = 0xffff;
              *(uint *)(*piVar3 + 0x28) = 0xffff;
              local_11c = 1;
              *(int *)(*piVar3 + 0x48) = *(int *)(puVar5 + 0x28) << 0x10;
              *(int *)(*piVar3 + 0x4c) = *(int *)(puVar5 + 0x24) << 0x10;
              *(int *)(*piVar3 + 0x5c) = local_1c;
              *(uint *)(*piVar3 + 0x50) = 0xffff;
              *(uint *)(*piVar3 + 0x54) = 0xffff;
              *(uint *)(*piVar3 + 0x58) = 0xffff;
              local_118 = 2;
              *(int *)(*piVar3 + 0x78) = *(int *)(puVar5 + 0x28) << 0x10;
              *(int *)(*piVar3 + 0x7c) = *(int *)(puVar5 + 0x2c) << 0x10;
              *(int *)(*piVar3 + 0x8c) = local_1c;
              *(uint *)(*piVar3 + 0x80) = 0xffff;
              *(uint *)(*piVar3 + 0x84) = 0xffff;
              *(uint *)(*piVar3 + 0x88) = 0xffff;
              local_114 = 3;
              *(int *)(*piVar3 + 0xa8) = *(int *)(puVar5 + 0x20) << 0x10;
              *(int *)(*piVar3 + 0xac) = *(int *)(puVar5 + 0x2c) << 0x10;
              *(int *)(*piVar3 + 0xbc) = local_1c;
              *(uint *)(*piVar3 + 0xb0) = 0xffff;
              *(uint *)(*piVar3 + 0xb4) = 0xffff;
              *(uint *)(*piVar3 + 0xb8) = 0xffff;
              FUN_004604c0(piVar3,local_138);
              thunk_FUN_004cdbc0(DAT_005ae704);
              local_18 = local_18 + 1;
              puVar5 = puVar5 + 0x30;
            } while (local_18 < 9);
            FUN_00461000(DAT_005ae704,0);
            return;
          }
        }
      }
    }
  }
  return;
}
