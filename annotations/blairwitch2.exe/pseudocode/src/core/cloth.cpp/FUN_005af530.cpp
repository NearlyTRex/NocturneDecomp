// Name: core_cloth.cpp_FUN_005af530
// Address: 005af530
// Address Range: [[005af530, 005afde1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_005af530(CCloth *this_ptr,SClothVertex *vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_005af530(CCloth *this_ptr,SClothVertex *vertex)

{
  byte *puVar1;
  float *pfVar2;
  CCloth *pCVar3;
  CCloth *pCVar4;
  byte bVar5;
  float afStackY_1174 [995];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  byte local_1b0 [8];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188 [4];
  float local_178;
  float local_174;
  float local_170 [4];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c [4];
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128 [4];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float local_d8;
  float local_d4 [4];
  float local_c4;
  float local_c0;
  float afStack_bc [4];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  float local_68;
  float local_64;
  CCloth *local_58;
  CCloth *local_54;
  float local_4c;
  float local_48;
  CCloth *local_44;
  CCloth *local_40;
  int local_3c;
  int local_38;
  SClothVertex *local_34;
  float local_30;
  float local_2c;
  CCloth *local_28;
  float *local_24;
  CCloth *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if (*(float *)&vertex->field_0x4 < *(float *)(this_ptr + 0x3ab04)) {
    *(uint *)&vertex->field_0x28 = 0;
    *(uint *)&vertex->field_0x4 = *(uint *)(this_ptr + 0x3ab04);
    *(uint *)&vertex->field_0xbc = 1;
  }
  local_3c = 0;
  if (0 < *(int *)&vertex->field_0x30) {
    local_58 = this_ptr + 0x37b24;
    puVar1 = &vertex->field_0x24;
    pCVar4 = this_ptr + 0x3ab00;
    local_34 = vertex;
    local_44 = this_ptr + 0x398;
    do {
      pCVar3 = this_ptr + 0x398 + *(int *)&local_34->field_0x34 * 0x11c;
      local_a8 = *(float *)vertex - *(float *)pCVar3;
      local_a4 = *(float *)&vertex->field_0x4 - *(float *)(pCVar3 + 4);
      local_a0 = *(float *)&vertex->field_0x8 - *(float *)(pCVar3 + 8);
      local_188[2] = local_a8;
      local_188[3] = local_a4;
      local_178 = local_a0;
      if (&local_198 != local_188 + 2) {
        local_198 = local_a8;
        local_194 = local_a4;
        local_190 = local_a0;
      }
      local_48 = local_190 * local_190 + local_198 * local_198 + local_194 * local_194;
      local_30 = (float)(((int)local_48 >> 1) + _DAT_01caf5b4);
      local_4c = local_30;
      local_2c = *(float *)&local_34->field_0x78;
      if (local_2c < local_30) {
        local_1c = local_30 - local_2c;
        local_138 = local_198 * local_1c;
        local_134 = local_194 * local_1c;
        local_130 = local_190 * local_1c;
        local_fc = local_138;
        local_f8 = local_134;
        local_f4 = local_130;
        local_10c = 1.0 / local_30;
        local_114 = local_138 * local_10c;
        local_110 = local_134 * local_10c;
        local_10c = local_130 * local_10c;
        local_90 = local_114;
        local_8c = local_110;
        local_88 = local_10c;
        *(float *)vertex = *(float *)vertex - local_114;
        *(float *)&vertex->field_0x4 = *(float *)&vertex->field_0x4 - local_110;
        *(float *)&vertex->field_0x8 = *(float *)&vertex->field_0x8 - local_10c;
        local_1d4 = local_114 * *(float *)pCVar4;
        local_1d0 = local_110 * *(float *)pCVar4;
        local_1cc = local_10c * *(float *)pCVar4;
        local_1c8 = local_1d4;
        local_1c4 = local_1d0;
        local_1c0 = local_1cc;
        *(float *)puVar1 = *(float *)puVar1 - local_1d4;
        *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28 - local_1d0;
        *(float *)&vertex->field_0x2c = *(float *)&vertex->field_0x2c - local_1cc;
      }
      if (local_30 < local_2c) {
        local_14 = local_2c - local_30;
        local_1bc = local_198 * local_14;
        local_1b8 = local_194 * local_14;
        local_1b4 = local_190 * local_14;
        local_14c[2] = local_1bc;
        local_14c[3] = local_1b8;
        local_13c = local_1b4;
        local_dc = 1.0 / local_30;
        local_ec[2] = local_1bc * local_dc;
        local_ec[3] = local_1b8 * local_dc;
        local_dc = local_1b4 * local_dc;
        local_1a4 = local_ec[2];
        local_1a0 = local_ec[3];
        local_19c = local_dc;
        local_15c = local_ec[2] * *(float *)local_58;
        local_158 = local_ec[3] * *(float *)local_58;
        local_154 = local_dc * *(float *)local_58;
        local_9c = local_15c;
        local_98 = local_158;
        local_94 = local_154;
        *(float *)vertex = *(float *)vertex + local_15c;
        *(float *)&vertex->field_0x4 = *(float *)&vertex->field_0x4 + local_158;
        *(float *)&vertex->field_0x8 = *(float *)&vertex->field_0x8 + local_154;
        local_d4[2] = local_15c * *(float *)pCVar4;
        local_d4[3] = local_158 * *(float *)pCVar4;
        local_c4 = local_154 * *(float *)pCVar4;
        local_108 = local_d4[2];
        local_104 = local_d4[3];
        local_100 = local_c4;
        *(float *)puVar1 = *(float *)puVar1 + local_d4[2];
        *(float *)&vertex->field_0x28 = *(float *)&vertex->field_0x28 + local_d4[3];
        *(float *)&vertex->field_0x2c = *(float *)&vertex->field_0x2c + local_c4;
      }
      local_3c = local_3c + 1;
      local_34 = (SClothVertex *)&local_34->field_0x4;
    } while (local_3c < *(int *)&vertex->field_0x30);
  }
  local_38 = 0;
  if (0 < *(int *)(this_ptr + 0x37b4c)) {
    local_54 = this_ptr + 0x3ab00;
    local_24 = (float *)&vertex->field_0x24;
    local_40 = this_ptr + 0x37b50;
    local_28 = this_ptr + 0x37bf0;
    do {
      local_20 = local_40 + local_38 * 0xac;
      local_128[2] = *(float *)vertex - *(float *)local_28;
      local_128[3] = *(float *)&vertex->field_0x4 - *(float *)(local_28 + 4);
      local_118 = *(float *)&vertex->field_0x8 - *(float *)(local_28 + 8);
      local_f0 = *(float *)vertex - *(float *)local_28;
      local_ec[(uint)bVar5 * -2] = local_128[(uint)bVar5 * -2 + 3];
      local_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           local_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (afStack_bc + 2 != &local_f0) {
        afStack_bc[2] = local_f0;
        afStack_bc[3] = local_ec[0];
        local_ac = local_ec[1];
      }
      local_1a8 = local_ac * *(float *)(local_20 + 0x98) +
                  afStack_bc[2] * *(float *)(local_20 + 0x80) +
                  afStack_bc[3] * *(float *)(local_20 + 0x8c);
      local_1d8 = local_1a8;
      if ((0.0 <= local_1a8) && (local_1a8 <= *(float *)(local_20 + 0x44))) {
        local_1e0 = local_ac * *(float *)(local_20 + 0x90) +
                    afStack_bc[2] * *(float *)(local_20 + 0x78) +
                    afStack_bc[3] * *(float *)(local_20 + 0x84);
        local_1dc = local_ac * *(float *)(local_20 + 0x94) +
                    afStack_bc[2] * *(float *)(local_20 + 0x7c) +
                    afStack_bc[3] * *(float *)(local_20 + 0x88);
        local_70 = local_1dc * *(float *)(local_20 + 0x3c) * local_1dc * *(float *)(local_20 + 0x3c)
                   + local_1e0 * *(float *)(local_20 + 0x38) *
                     local_1e0 * *(float *)(local_20 + 0x38);
        local_18 = (float)(((int)local_70 >> 1) + _DAT_01caf5b4);
        if (local_18 < 1.0) {
          local_68 = local_1e0 * local_1e0 + local_1dc * local_1dc;
          local_64 = (float)(_DAT_01caf5b8 - ((int)local_68 >> 1));
          local_1b0._0_4_ =
               *(float *)(local_20 + 0x14) * (float)_DAT_005f10e3 * local_1e0 * local_64;
          local_1b0._4_4_ =
               (float)_DAT_005f10e3 * *(float *)(local_20 + 0x18) * local_1dc * local_64;
          core_dirmat_cpp_FUN_00449530(local_20 + 0x78,local_1b0);
          local_84 = local_c0;
          local_80[(uint)bVar5 * -2] = afStack_bc[(uint)bVar5 * -2];
          local_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          local_174 = *(float *)(local_20 + 0xa0) + local_84;
          local_170[0] = *(float *)(local_20 + 0xa4) + local_80[0];
          local_170[1] = *(float *)(local_20 + 0xa8) + local_80[1];
          local_18c = *(float *)(local_20 + 0xa0) + local_84;
          local_188[(uint)bVar5 * -2] = local_170[(uint)bVar5 * -2];
          local_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               local_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if ((float *)local_1b0 != &local_18c) {
            local_1b0._0_4_ = local_18c;
            local_1b0._4_4_ = local_188[0];
            local_1a8 = local_188[1];
          }
          local_128[0] = (float)local_1b0._4_4_ - *(float *)&vertex->field_0x4;
          local_128[1] = local_1a8 - *(float *)&vertex->field_0x8;
          local_12c = (float)local_1b0._0_4_ - *(float *)vertex;
          local_d8 = (float)local_1b0._0_4_ - *(float *)vertex;
          local_d4[(uint)bVar5 * -2] = local_128[(uint)bVar5 * -2];
          pfVar2 = local_24;
          local_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               local_128[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (vertex != (SClothVertex *)local_1b0) {
            *(uint *)vertex = local_1b0._0_4_;
            *(uint *)&vertex->field_0x4 = local_1b0._4_4_;
            *(float *)&vertex->field_0x8 = local_1a8;
          }
          local_150 = local_d8 * *(float *)local_54;
          local_14c[0] = local_d4[0] * *(float *)local_54;
          local_14c[1] = local_d4[1] * *(float *)local_54;
          local_170[2] = local_d8 * *(float *)local_54;
          local_170[(uint)bVar5 * -2 + 3] = local_14c[(uint)bVar5 * -2];
          local_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               local_14c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          *pfVar2 = *pfVar2 + local_170[2];
          pfVar2[1] = pfVar2[1] + local_170[3];
          pfVar2[2] = pfVar2[2] + local_160;
          *(uint *)&vertex->field_0xb8 = 1;
        }
      }
      local_38 = local_38 + 1;
      local_28 = local_28 + 0xac;
    } while (local_38 < *(int *)(this_ptr + 0x37b4c));
  }
  return;
}
