// Name: FUN_0045ed70
// Address: 0045ed70
// Address Range: [[0045ed70, 0045f482]]
// Convention: unknown
// Signature: void FUN_0045ed70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ed70(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  float afStackY_1140 [1002];
  uint uVar12;
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
  int local_164;
  int local_160;
  int local_15c;
  uint local_158;
  float afStack_154 [4];
  float local_144;
  float local_140;
  float afStack_13c [2];
  int local_134;
  int local_130;
  int local_12c;
  float local_128;
  float local_124 [4];
  float local_114;
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  float afStack_100 [8];
  int local_e0;
  int local_dc;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [2];
  int local_bc;
  float afStack_b8 [4];
  float local_a8;
  int local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float afStack_94 [7];
  int local_78;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (((*(int *)(param_1 + 0x1cbc) != 0) &&
      ((float)_DAT_005bb544 <= *(float *)(0x01ED78C8 + 0x15ac80))) &&
     (*(int *)(0x01D2130C + 0xc) != 0)) {
    FUN_0046d1a0(DAT_005f2afc);
    local_a4 = local_bc;
    (&local_a0)[(uint)bVar5 * -2] = afStack_b8[(uint)bVar5 * -2];
    (&local_a0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_154[2] = (float)local_a4 * _DAT_005de4f8;
    afStack_154[3] = (float)(int)local_a0 * _DAT_005de4f8;
    local_144 = (float)local_9c * _DAT_005de4f8;
    afStack_b8[2] = (float)local_a4 * _DAT_005de4f8 - *(float *)(param_1 + 4);
    afStack_b8[3] = (float)(int)local_a0 * _DAT_005de4f8 - *(float *)(param_1 + 8);
    local_a8 = (float)local_9c * _DAT_005de4f8 - *(float *)(param_1 + 0xc);
    local_c8 = afStack_b8[2];
    local_c4[(uint)bVar5 * -2] = afStack_b8[(uint)bVar5 * -2 + 3];
    local_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (0.0 < SQRT(local_c4[1] * local_c4[1] + local_c8 * local_c8 + local_c4[0] * local_c4[0])) {
      afStack_100[4] = 1.0;
      afStack_100[2] = 0.0;
      local_18 = param_1 + 0x10;
      afStack_100[3] = 0.0;
      FUN_0045b800(local_18,afStack_100 + 2);
      FUN_0046d1c0(DAT_005f2afc);
      local_124[2] = local_140;
      local_124[(uint)bVar5 * -2 + 3] = afStack_13c[(uint)bVar5 * -2];
      local_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      local_124[2] = local_124[2] - *(float *)(param_1 + 4);
      local_124[3] = local_124[3] - *(float *)(param_1 + 8);
      local_114 = local_114 - *(float *)(param_1 + 0xc);
      FUN_0045b870(local_18,local_124 + 2);
      local_128 = local_98;
      local_124[(uint)bVar5 * -2] = afStack_94[(uint)bVar5 * -2];
      local_124[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_94[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (local_124 + 2 != &local_128) {
        local_124[2] = local_128;
        local_124[3] = local_124[0];
        local_114 = local_124[1];
      }
      fVar1 = ((local_114 * (float)_DAT_005bb54c) / *(float *)(param_1 + 0x38)) *
              (float)_DAT_005bb554;
      fVar2 = local_124[2] * local_124[2] + local_124[3] * local_124[3];
      fVar1 = fVar1 * fVar1;
      local_5c = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_5c <= (float)_DAT_005bb55c)) {
        FUN_0046ce90(DAT_005f2afc,param_1 + 4);
        FUN_0045b9b0(param_1 + 0x10);
        uVar12 = 0;
        local_104 = local_158;
        afStack_100[(uint)bVar5 * -2] = afStack_154[(uint)bVar5 * -2];
        afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        FUN_0046cf30(DAT_005f2afc,&local_104,uVar12);
        local_58 = 1;
        do {
          fVar6 = (float10)local_58 * ((float10)_DAT_005bb54c / (float10)*(float *)(param_1 + 0x38))
                  * (float10)_DAT_005bb564;
          local_54 = (float)fVar6;
          Var10 = fpatan(fVar6,(float10)1);
          fVar7 = (float10)fcos(Var10);
          local_50 = 0;
          local_48 = (float)((float10)1 - fVar6);
          local_4c = (float)fVar7;
          do {
            fVar6 = (float10)local_50 * (float10)_DAT_005bb56c * (float10)_DAT_005bb570 *
                    (float10)_DAT_005bb554;
            fVar7 = (float10)fsin(fVar6);
            fVar11 = (float10)(local_50 + 1) * (float10)_DAT_005bb56c * (float10)_DAT_005bb570 *
                     (float10)_DAT_005bb554;
            fVar8 = (float10)fsin(fVar11);
            fVar6 = (float10)fcos(fVar6);
            fVar11 = (float10)fcos(fVar11);
            local_18 = *(int *)(param_1 + 0x1cc0) - (*(int *)(param_1 + 0x1cc0) >> 0x1f) >> 1;
            local_14 = *(int *)(param_1 + 0x1cc4) - (*(int *)(param_1 + 0x1cc4) >> 0x1f) >> 1;
            fVar9 = (float10)local_54;
            local_3c = (float)(fVar6 * fVar9);
            fVar6 = (float10)local_14 - (float10)local_14 * (float10)local_3c;
            FUN_005a3120();
            local_78 = (int)ROUND(fVar6);
            local_38 = (float)(fVar7 * fVar9);
            fVar6 = (float10)local_18 * (float10)local_38 + (float10)local_18;
            fVar8 = fVar8 * fVar9;
            iVar4 = FUN_005a3120();
            local_1c = (int)ROUND(fVar6);
            local_34 = (float)*(ushort *)((iVar4 + local_1c) * 2 + *(int *)(param_1 + 0x2f94)) *
                       (float)_DAT_005bb574;
            local_2c = 0;
            local_40 = (float)fVar8;
            local_44 = (float)(fVar9 * fVar11);
            local_30 = local_34;
            do {
              local_70 = *(float *)(param_1 + 0x140);
              local_24 = (float)local_2c * local_4c * local_70 * _DAT_005bb57c;
              local_14 = local_2c + 1;
              local_28 = (float)local_14 * local_4c * local_70 * _DAT_005bb57c;
              local_64 = *(float *)(param_1 + 0x2fa8) *
                         (local_70 - local_24) * (1.0 / local_70) * (float)_DAT_005bb584 * local_48;
              local_60 = local_48 * (local_70 - local_28) * (1.0 / local_70) * (float)_DAT_005bb584
                         * *(float *)(param_1 + 0x2fa8);
              local_6c = (int)ROUND(local_64);
              local_68 = (int)ROUND(local_60);
              local_cc = local_30;
              if (local_24 < local_30) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_e0 = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_dc = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_d8 = (int)ROUND(local_cc * _DAT_005de4f0);
              FUN_005632a3(*DAT_005f2afc,&local_e0);
              local_cc = local_34;
              if (local_24 < local_34) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_164 = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_160 = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_15c = (int)ROUND(local_cc * _DAT_005de4f0);
              FUN_005632a3(*DAT_005f2afc + 0x30,&local_164);
              local_cc = local_34;
              if (local_28 < local_34) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_134 = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_130 = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_12c = (int)ROUND(local_cc * _DAT_005de4f0);
              FUN_005632a3(*DAT_005f2afc + 0x60,afStack_13c + 2);
              local_cc = local_30;
              if (local_28 < local_30) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_110 = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_10c = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_108 = (int)ROUND(local_cc * _DAT_005de4f0);
              FUN_005632a3(*DAT_005f2afc + 0x90,&local_110);
              piVar3 = DAT_005f2afc;
              *(int *)(*DAT_005f2afc + 0x20) = local_6c;
              *(int *)(*piVar3 + 0x50) = local_6c;
              *(int *)(*piVar3 + 0x80) = local_68;
              *(int *)(*piVar3 + 0xb0) = local_68;
              local_188 = 4;
              local_16c = 1;
              local_178 = 0;
              local_17c = 0;
              local_180 = 0;
              local_184 = 0;
              iVar4 = local_2c + 1;
              local_170 = 2;
              local_168 = 0;
              local_174 = 3;
              local_2c = iVar4;
              FUN_0046d330(piVar3,local_18c,&LAB_0044d180);
            } while (iVar4 < 4);
            local_50 = local_50 + 1;
          } while (local_50 < 0x10);
          local_58 = local_58 + 1;
        } while (local_58 < 0x10);
        thunk_FUN_004e5ef0(DAT_005f2afc);
        return;
      }
    }
  }
  return;
}
