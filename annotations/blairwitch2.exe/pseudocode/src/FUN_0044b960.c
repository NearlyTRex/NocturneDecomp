// Name: FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044c15a]]
// Convention: unknown
// Signature: void FUN_0044b960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b960(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int *extraout_EDX;
  byte bVar5;
  float10 fVar6;
  float afStackY_114c [21];
  int aiStackY_10f8 [3];
  float afStackY_10ec [39];
  int aiStackY_1050 [6];
  float afStackY_1038 [933];
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  float local_198;
  float local_194;
  float local_190;
  byte local_18c [4];
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  float local_164;
  float local_160 [4];
  uint local_150;
  uint local_14c;
  float afStack_148 [4];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  int local_110;
  int local_10c [2];
  float local_104;
  float local_100 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float afStack_c4 [4];
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  float afStack_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float afStack_7c [5];
  int local_68;
  int aiStack_64 [4];
  int local_54;
  float local_50;
  float local_4c [5];
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x1cbc) != 0) && (*(int *)(0x01CB6900 + 0xc) == 2)) {
    FUN_0046b5e0(DAT_0060b280);
    local_ec = local_4c[2];
    local_100[(uint)bVar5 * -2 + 6] = local_4c[(uint)bVar5 * -2 + 3];
    local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    local_ec = local_ec - *(float *)(param_1 + 4);
    local_e8 = local_e8 - *(float *)(param_1 + 8);
    local_e4 = local_e4 - *(float *)(param_1 + 0xc);
    FUN_004495a0(param_1 + 0x10,local_100 + 5);
    local_134 = local_c8;
    afStack_148[(uint)bVar5 * -2 + 6] = afStack_c4[(uint)bVar5 * -2];
    afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (local_100 + 5 != afStack_148 + 5) {
      local_ec = local_134;
      local_e8 = local_130;
      local_e4 = local_12c;
    }
    local_30 = local_e8 * local_e8;
    local_28 = ((local_e4 * (float)_DAT_005cf4b7) / *(float *)(param_1 + 0x38)) *
               (float)_DAT_005cf4bf;
    local_24 = local_ec * local_ec + local_30;
    local_2c = local_28 * local_28;
    if (local_24 <= local_2c) {
      local_194 = 1.0 - local_24 / local_2c;
      FUN_0046b5c0(DAT_0060b280);
      local_110 = local_68;
      local_10c[(uint)bVar5 * -2] = aiStack_64[(uint)bVar5 * -2];
      local_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           aiStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      afStack_a0[2] = (float)local_110 * _DAT_005f5058;
      afStack_a0[3] = (float)local_10c[0] * _DAT_005f5058;
      local_90 = (float)local_10c[1] * _DAT_005f5058;
      afStack_c4[2] = (float)local_110 * _DAT_005f5058 - *(float *)(param_1 + 4);
      afStack_c4[3] = (float)local_10c[0] * _DAT_005f5058 - *(float *)(param_1 + 8);
      local_b4 = (float)local_10c[1] * _DAT_005f5058 - *(float *)(param_1 + 0xc);
      local_100[2] = afStack_c4[2];
      local_100[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 3];
      local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      local_198 = SQRT(local_f0 * local_f0 +
                       local_100[2] * local_100[2] + local_100[3] * local_100[3]);
      if (0.0 < local_198) {
        fVar1 = 1.0 / local_198;
        local_100[2] = local_100[2] * fVar1;
        local_100[3] = local_100[3] * fVar1;
        local_f0 = local_f0 * fVar1;
        afStack_7c[4] = 1.0;
        afStack_7c[2] = 0.0;
        afStack_7c[3] = 0.0;
        local_14 = (float)(0xffff - _DAT_01c38aec);
        FUN_00449530(param_1 + 0x10,afStack_7c + 2);
        local_50 = local_80;
        local_4c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (0.0 < (local_f0 * local_4c[1] + local_100[2] * local_50 + local_100[3] * local_4c[0]) *
                  local_14 * _DAT_005cf4c7) {
          FUN_0046b8d0(DAT_0060b280,1);
          local_18 = 0;
          local_1c = (float *)(param_1 + 4);
          do {
            pfVar4 = local_1c;
            local_14 = (float)local_18;
            fVar3 = (float)local_18 * _DAT_005cf4cb * *(float *)(param_1 + 0x140);
            fVar1 = *(float *)(param_1 + 0x38);
            local_190 = fVar3;
            local_11c = *(float *)(param_1 + 0x18);
            afStack_148[2] = *(float *)(param_1 + 0x18) * fVar3;
            local_118 = *(float *)(param_1 + 0x24);
            local_114 = *(float *)(param_1 + 0x30);
            afStack_148[3] = *(float *)(param_1 + 0x24) * fVar3;
            local_138 = *(float *)(param_1 + 0x30) * fVar3;
            local_164 = afStack_148[2];
            local_160[(uint)bVar5 * -2] = afStack_148[(uint)bVar5 * -2 + 3];
            local_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            local_128 = *pfVar4 + local_164;
            local_124 = pfVar4[1] + local_160[0];
            local_120 = pfVar4[2] + local_160[1];
            local_104 = *pfVar4 + local_164;
            local_100[(uint)bVar5 * -2] = afStack_148[(uint)bVar5 * -2 + 9];
            local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
            if (local_160 + 2 != &local_104) {
              local_160[2] = local_104;
              local_160[3] = local_100[0];
              local_150 = local_100[1];
            }
            local_20 = (fVar3 * (float)_DAT_005cf4b7) / fVar1;
            FUN_0046b2b0(DAT_0060b280,local_160 + 2);
            FUN_0046b670(DAT_0060b280);
            uVar9 = 0;
            puVar8 = &local_14c;
            local_14c = local_a4;
            afStack_148[(uint)bVar5 * -2] = afStack_a0[(uint)bVar5 * -2];
            piVar7 = DAT_0060b280;
            afStack_148[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            FUN_0046b350(piVar7,puVar8,uVar9);
            local_84 = 0.0;
            local_8c = local_20;
            local_88 = local_20;
            local_e0 = (int)ROUND(local_20 * _DAT_005f5050);
            local_dc = (int)ROUND(local_20 * _DAT_005f5050);
            local_d8 = (int)ROUND(_DAT_005f5050 * 0.0);
            FUN_0055d723(*DAT_0060b280,&local_e0);
            local_8c = -local_8c;
            local_d4 = (int)ROUND(local_8c * _DAT_005f5050);
            local_d0 = (int)ROUND(local_88 * _DAT_005f5050);
            local_cc = (int)ROUND(local_84 * _DAT_005f5050);
            FUN_0055d723(*DAT_0060b280 + 0x30,&local_d4);
            local_88 = -local_88;
            local_b0 = (int)ROUND(local_8c * _DAT_005f5050);
            local_ac = (int)ROUND(local_88 * _DAT_005f5050);
            local_a8 = (int)ROUND(local_84 * _DAT_005f5050);
            FUN_0055d723(*DAT_0060b280 + 0x60,&local_b0);
            local_8c = -local_8c;
            aiStack_64[2] = (int)ROUND(local_8c * _DAT_005f5050);
            aiStack_64[3] = (int)ROUND(local_88 * _DAT_005f5050);
            local_54 = (int)ROUND(local_84 * _DAT_005f5050);
            FUN_0055d723(*DAT_0060b280 + 0x90,aiStack_64 + 2);
            FUN_0046ca00(DAT_0060b280,&DAT_0060afe0);
            local_188 = 4;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_184 = 0;
            local_174 = 0;
            fVar6 = ((((float10)*(float *)(param_1 + 0x140) - (float10)local_190) *
                     (float10)_DAT_005cf4cf) / (float10)*(float *)(param_1 + 0x140)) *
                    (float10)local_194;
            iVar2 = *DAT_0060b280;
            FUN_005b7ff0();
            local_38 = (int)ROUND(fVar6);
            *(int *)(iVar2 + 0x2c) = local_38;
            *(uint *)(*extraout_EDX + 0x20) = 0xffff;
            *(uint *)(*extraout_EDX + 0x24) = 0xffff;
            *(uint *)(*extraout_EDX + 0x28) = 0xffff;
            local_170 = 1;
            *(int *)(*extraout_EDX + 0x5c) = local_38;
            *(uint *)(*extraout_EDX + 0x50) = 0xffff;
            *(uint *)(*extraout_EDX + 0x54) = 0xffff;
            *(uint *)(*extraout_EDX + 0x58) = 0xffff;
            local_16c = 2;
            *(int *)(*extraout_EDX + 0x8c) = local_38;
            *(uint *)(*extraout_EDX + 0x80) = 0xffff;
            *(uint *)(*extraout_EDX + 0x84) = 0xffff;
            *(uint *)(*extraout_EDX + 0x88) = 0xffff;
            local_168 = 3;
            *(int *)(*extraout_EDX + 0xbc) = local_38;
            *(uint *)(*extraout_EDX + 0xb0) = 0xffff;
            *(uint *)(*extraout_EDX + 0xb4) = 0xffff;
            *(uint *)(*extraout_EDX + 0xb8) = 0xffff;
            *(uint *)(*extraout_EDX + 0x18) = 0xf80000;
            *(uint *)(*extraout_EDX + 0x1c) = 0xf80000;
            *(uint *)(*extraout_EDX + 0x48) = 0x80000;
            *(uint *)(*extraout_EDX + 0x4c) = 0xf80000;
            *(uint *)(*extraout_EDX + 0x78) = 0x80000;
            *(uint *)(*extraout_EDX + 0x7c) = 0x80000;
            *(uint *)(*extraout_EDX + 0xa8) = 0xf80000;
            *(uint *)(*extraout_EDX + 0xac) = 0x80000;
            FUN_0046a930(extraout_EDX,local_18c);
            thunk_FUN_004e9810(DAT_0060b280);
            local_18 = local_18 + 1;
          } while (local_18 < 0x19);
          FUN_0046b8d0(DAT_0060b280,0);
          return;
        }
      }
    }
  }
  return;
}
