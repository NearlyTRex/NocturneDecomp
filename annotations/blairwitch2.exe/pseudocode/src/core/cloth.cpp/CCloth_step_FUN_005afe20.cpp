// Name: core_cloth.cpp_CCloth_step_FUN_005afe20
// Address: 005afe20
// Address Range: [[005afe20, 005b0c85]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_step_FUN_005afe20(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_step_FUN_005afe20(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  byte *puVar1;
  byte *puVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  CCloth *pCVar6;
  int iVar7;
  int iVar8;
  CCloth *pCVar9;
  CCloth *pCVar10;
  CCloth *pCVar11;
  SClothVertex *pSVar12;
  int *piVar13;
  float *pfVar14;
  int iVar15;
  byte bVar16;
  float afStackY_129c [1004];
  float local_2e0;
  CMatrix3x3f local_2dc;
  float local_2b4;
  float local_2b0 [4];
  float local_2a0;
  float local_29c [3];
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268 [4];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  uint local_1f8;
  float local_1f4;
  float local_1f0 [4];
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
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_164;
  float local_158 [3];
  float local_14c;
  float local_148 [5];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
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
  float local_b8 [5];
  int local_a4;
  byte *local_a0;
  int local_9c;
  CCloth *local_98;
  int local_94;
  CCloth *local_90;
  float local_8c;
  float local_84;
  CCloth *local_80;
  int local_7c;
  CCloth *local_74;
  CCloth *local_70;
  float local_6c;
  CCloth *local_64;
  float local_5c;
  float local_58;
  float local_54;
  CCloth *local_50;
  CCloth *local_4c;
  CCloth *local_48;
  CCloth *local_44;
  CCloth *local_40;
  int local_3c;
  int local_38;
  CCloth *local_34;
  float local_30;
  CCloth *local_2c;
  float local_28;
  int local_24;
  CCloth *local_20;
  float local_18;
  
  bVar16 = 0;
  local_a4 = 0;
  if ((float)_DAT_005f10eb <= floor_y) {
    floor_y = -9999.0;
  }
  if (delta_time < (float)_DAT_005f10f3) {
    delta_time = 0.01;
  }
  *(float *)(this_ptr + 0x3ab00) = 1.0 / delta_time;
  *(float *)(this_ptr + 0x3ab04) = floor_y - position->y;
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    local_94 = 0;
    if (0 < *(int *)(this_ptr + 0x39ce8)) {
      local_a0 = &model_ptr->field_0xe80;
      local_20 = this_ptr + 0x398;
      local_44 = this_ptr;
      do {
        pCVar10 = local_20 + *(int *)(local_44 + 0x39cec) * 0x11c;
        *(float *)(pCVar10 + 8) = 0.0;
        local_7c = 0;
        *(float *)(pCVar10 + 4) = *(float *)(pCVar10 + 8);
        *(float *)pCVar10 = *(float *)(pCVar10 + 4);
        if (0 < (int)*(float *)(pCVar10 + 0xdc)) {
          local_48 = pCVar10 + 0x110;
          local_50 = pCVar10 + 0xec;
          local_4c = pCVar10;
          do {
            core_xform_cpp_FUN_00591530(local_50,local_a0 + (int)*(float *)(local_4c + 0xe0) * 0x30)
            ;
            local_248 = local_194;
            local_268[(uint)bVar16 * -2 + 9] = local_1f0[(uint)bVar16 * -2 + 0x18];
            local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
                 local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
            fVar5 = *(float *)local_48;
            local_ec = local_248 * fVar5;
            local_e8 = local_244 * *(float *)local_48;
            fVar4 = *(float *)local_48;
            iVar8 = local_7c + 1;
            local_48 = local_48 + 4;
            local_e4 = local_240 * fVar4;
            local_bc = local_248 * fVar5;
            local_b8[(uint)bVar16 * -2] = local_148[(uint)bVar16 * -2 + 0x18];
            local_b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
            local_50 = local_50 + 0xc;
            local_4c = local_4c + 4;
            *(float *)pCVar10 = *(float *)pCVar10 + local_bc;
            *(float *)(pCVar10 + 4) = *(float *)(pCVar10 + 4) + local_b8[0];
            *(float *)(pCVar10 + 8) = *(float *)(pCVar10 + 8) + local_b8[1];
            local_7c = iVar8;
          } while (iVar8 < (int)*(float *)(pCVar10 + 0xdc));
        }
        local_44 = local_44 + 4;
        local_94 = local_94 + 1;
      } while (local_94 < *(int *)(this_ptr + 0x39ce8));
    }
    iVar8 = 0;
    if (0 < *(int *)(this_ptr + 0x37b4c)) {
      do {
        core_cloth_cpp_CCloth_computeBoneTransform_FUN_005af3b0(this_ptr,iVar8,model_ptr);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(this_ptr + 0x37b4c));
    }
    iVar8 = core_motion_cpp_FUN_005035c0(model_ptr);
    if (*(int *)(iVar8 + 0x24) == 0) {
      local_a4 = 1;
    }
  }
  iVar8 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    local_80 = this_ptr + 0x37b50;
    local_90 = this_ptr + 0x398;
    local_40 = this_ptr;
    do {
      local_9c = iVar8 * 0x11c;
      if (*(int *)(local_40 + 0x470) != -1) {
        local_98 = local_80 + *(int *)(local_40 + 0x470) * 0xac;
        local_158[2] = *(float *)(local_98 + 0x44);
        local_158[0] = 0.0;
        local_158[1] = 0.0;
        core_dirmat_cpp_FUN_00449530(local_98 + 0x78,local_1f0 + 0x26);
        pCVar10 = local_98;
        local_2b0[2] = local_218;
        local_2b0[(uint)bVar16 * -2 + 3] = local_268[(uint)bVar16 * -2 + 0x15];
        local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
        local_1f0[2] = *(float *)(pCVar10 + 0xa0) + local_2b0[2];
        local_1f0[3] = *(float *)(pCVar10 + 0xa4) + local_2b0[3];
        local_1e0 = *(float *)(pCVar10 + 0xa8) + local_2a0;
        pCVar9 = local_90 + local_9c;
        local_26c = *(float *)(pCVar10 + 0xa0) + local_2b0[2];
        local_268[(uint)bVar16 * -2] = local_1f0[(uint)bVar16 * -2 + 3];
        local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        if (pCVar9 != (CCloth *)&local_26c) {
          *(float *)pCVar9 = local_26c;
          *(float *)(pCVar9 + 4) = local_268[0];
          *(float *)(pCVar9 + 8) = local_268[1];
        }
      }
      iVar8 = iVar8 + 1;
      local_40 = local_40 + 0x11c;
    } while (iVar8 < *(int *)(this_ptr + 0x104));
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_2dc,euler);
  pfVar14 = (float *)((int)g_CDemonSetPtr + (uint)bVar16 * -8 + 0x15ac74);
  local_e0 = *(float *)&g_CDemonSetPtr->field_0x15ac70;
  local_148[(uint)bVar16 * -2 + 0x1b] = *pfVar14;
  local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] = pfVar14[(uint)bVar16 * -2 + 1];
  local_c8 = local_2dc.m[0].z;
  local_c4 = local_2dc.m[1].z;
  local_c0 = local_2dc.m[2].z;
  local_8c = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  if (local_8c <= 0.0) {
    local_dc = 0.0;
    local_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    fVar5 = 1.0 / local_8c;
    local_e0 = local_e0 * fVar5;
    local_dc = local_dc * fVar5;
    local_d8 = local_d8 * fVar5;
  }
  local_2e0 = local_d8 * local_2dc.m[2].z +
              local_e0 * local_2dc.m[0].z + local_dc * local_2dc.m[1].z;
  local_84 = local_2e0;
  if (0.0 < local_2e0) {
    local_2e0 = 0.0;
  }
  local_2e0 = local_2e0 * (float)_DAT_005f10fb;
  local_23c = *(float *)&g_CDemonSetPtr->field_0x15ac70 * local_2e0;
  local_238 = *(float *)&g_CDemonSetPtr->field_0x15ac74 * local_2e0;
  pfVar14 = local_b8 + 2;
  local_234 = *(float *)&g_CDemonSetPtr->field_0x15ac78 * local_2e0;
  local_b8[2] = local_23c;
  local_b8[(uint)bVar16 * -2 + 3] = local_268[(uint)bVar16 * -2 + 0xc];
  local_b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
       local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
  core_dirmat_cpp_FUN_004495a0(&local_2dc,pfVar14);
  local_284 = local_164;
  local_2b0[(uint)bVar16 * -2 + 0xc] = local_1f0[(uint)bVar16 * -2 + 0x24];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
  local_110 = local_284 + *(float *)(this_ptr + 0x3ab24);
  local_10c = local_280 + *(float *)(this_ptr + 0x3ab28);
  local_108 = local_27c + *(float *)(this_ptr + 0x3ab2c);
  local_188 = local_284 + *(float *)(this_ptr + 0x3ab24);
  local_1f0[(uint)bVar16 * -2 + 0x1b] = local_148[(uint)bVar16 * -2 + 0xf];
  local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
  pCVar3 = (CVector3f *)(this_ptr + 0x3ab08);
  *(uint *)(this_ptr + 0x3ab2c) = 0;
  *(uint *)(this_ptr + 0x3ab28) = *(uint *)(this_ptr + 0x3ab2c);
  *(uint *)(this_ptr + 0x3ab24) = *(uint *)(this_ptr + 0x3ab28);
  local_1dc = position->x - pCVar3->x;
  local_1d8 = position->y - *(float *)(this_ptr + 0x3ab0c);
  local_1d4 = position->z - *(float *)(this_ptr + 0x3ab10);
  local_29c[0] = local_1dc;
  local_2b0[(uint)bVar16 * -2 + 6] = local_1f0[(uint)bVar16 * -2 + 6];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
  if (pCVar3 != position) {
    pCVar3->x = position->x;
    *(float *)(this_ptr + 0x3ab0c) = position->y;
    *(float *)(this_ptr + 0x3ab10) = position->z;
  }
  core_dirmat_cpp_FUN_004495a0(&local_2dc,local_2b0 + 5);
  local_278 = local_f8;
  local_2b0[(uint)bVar16 * -2 + 0xf] = local_148[(uint)bVar16 * -2 + 0x15];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
  fVar5 = 1.0 / delta_time;
  local_1a0 = local_278 * fVar5;
  local_19c = local_274 * fVar5;
  local_198 = local_270 * fVar5;
  local_20c = local_278 * fVar5;
  local_268[(uint)bVar16 * -2 + 0x18] = local_1f0[(uint)bVar16 * -2 + 0x15];
  local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
  local_290 = local_20c - local_188;
  local_28c = local_208 - local_184;
  local_288 = local_204 - local_180;
  local_230 = local_20c - local_188;
  local_268[(uint)bVar16 * -2 + 0xf] = local_2b0[(uint)bVar16 * -2 + 9];
  local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
       local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
  local_11c = local_230 * fVar5;
  local_118 = local_22c * fVar5;
  local_114 = local_228 * fVar5;
  local_128 = local_230 * fVar5;
  local_148[(uint)bVar16 * -2 + 9] = local_148[(uint)bVar16 * -2 + 0xc];
  local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
  local_17c = euler->x - *(float *)(this_ptr + 0x3ab14);
  local_178 = euler->y - *(float *)(this_ptr + 0x3ab18);
  local_174 = euler->z - *(float *)(this_ptr + 0x3ab1c);
  local_148[2] = local_17c;
  local_148[(uint)bVar16 * -2 + 3] = local_1f0[(uint)bVar16 * -2 + 0x1e];
  local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f];
  if ((CVector3f *)(this_ptr + 0x3ab14) != euler) {
    ((CVector3f *)(this_ptr + 0x3ab14))->x = euler->x;
    *(float *)(this_ptr + 0x3ab18) = euler->y;
    *(float *)(this_ptr + 0x3ab1c) = euler->z;
  }
  fVar5 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_148[3]);
  local_30 = fVar5 * (1.0 / delta_time) * (1.0 / delta_time);
  iVar8 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    local_34 = this_ptr + 0x398;
    pCVar11 = this_ptr + 0x464;
    pCVar10 = this_ptr + 0x3a4;
    pCVar9 = this_ptr;
    do {
      *(uint *)(pCVar10 + 8) = 0;
      *(uint *)(pCVar10 + 4) = *(uint *)(pCVar10 + 8);
      *(uint *)pCVar10 = *(uint *)(pCVar10 + 8);
      *(uint *)(pCVar9 + 0x450) = 0;
      pCVar6 = local_34 + iVar8 * 0x11c;
      *(uint *)(pCVar9 + 0x454) = 0;
      if (pCVar11 != pCVar6) {
        *(uint *)(pCVar10 + 0xc0) = *(uint *)pCVar6;
        *(uint *)(pCVar10 + 0xc4) = *(uint *)(pCVar6 + 4);
        *(uint *)(pCVar10 + 200) = *(uint *)(pCVar6 + 8);
      }
      pCVar11 = pCVar11 + 0x11c;
      pCVar9 = pCVar9 + 0x11c;
      iVar8 = iVar8 + 1;
      pCVar10 = pCVar10 + 0x11c;
    } while (iVar8 < *(int *)(this_ptr + 0x104));
  }
  local_1fc = -*(float *)(this_ptr + 0x37b18);
  local_200 = 0.0;
  local_1f8 = 0;
  local_18 = local_1fc;
  core_dirmat_cpp_FUN_004495a0(&local_2dc,local_268 + 0x1a);
  local_254 = local_170;
  local_268[(uint)bVar16 * -2 + 6] = local_1f0[(uint)bVar16 * -2 + 0x21];
  local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22];
  local_28 = *(float *)(this_ptr + 0x37b18) / *(float *)(this_ptr + 0x37b1c);
  local_38 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    local_3c = 0;
    local_70 = this_ptr + 0x37b20;
    local_5c = local_128 * local_28;
    local_58 = local_124 * local_28;
    local_2c = this_ptr + 0x37b30;
    local_54 = local_120 * local_28;
    local_6c = local_30 * local_28;
    local_74 = this_ptr + 0x398;
    do {
      pSVar12 = (SClothVertex *)
                (local_74 + *(int *)(*(int *)(this_ptr + 0x3aafc) + local_3c) * 0x11c);
      if (*(int *)&pSVar12->field_0x74 == 0) {
        puVar1 = &pSVar12->field_0x24;
        *(float *)puVar1 = *(float *)local_70 * *(float *)puVar1;
        *(float *)&pSVar12->field_0x28 = *(float *)local_70 * *(float *)&pSVar12->field_0x28;
        *(float *)&pSVar12->field_0x2c = *(float *)local_70 * *(float *)&pSVar12->field_0x2c;
        local_134 = local_5c;
        local_130 = local_58;
        local_12c = local_54;
        local_1ac = local_5c;
        local_1f0[(uint)bVar16 * -2 + 0x12] = local_148[(uint)bVar16 * -2 + 6];
        local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
        local_104 = local_1ac * *(float *)local_2c;
        local_100 = local_1a8 * *(float *)local_2c;
        local_fc = local_1a4 * *(float *)local_2c;
        puVar2 = &pSVar12->field_0xc;
        local_d4 = local_1ac * *(float *)local_2c;
        local_148[(uint)bVar16 * -2 + 0x1e] = local_148[(uint)bVar16 * -2 + 0x12];
        local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
        *(float *)puVar2 = *(float *)puVar2 - local_d4;
        *(float *)&pSVar12->field_0x10 = *(float *)&pSVar12->field_0x10 - local_d0;
        *(float *)&pSVar12->field_0x14 = *(float *)&pSVar12->field_0x14 - local_cc;
        *(float *)puVar2 = *(float *)puVar2 + local_254;
        *(float *)&pSVar12->field_0x10 = *(float *)&pSVar12->field_0x10 + local_250;
        *(float *)&pSVar12->field_0x14 = *(float *)&pSVar12->field_0x14 + local_24c;
        fVar5 = *(float *)&pSVar12->field_0x4 * 0.0;
        local_14c = fVar5 - *(float *)&pSVar12->field_0x8 *
                            local_6c * *(float *)(this_ptr + 0x37b34);
        local_148[0] = *(float *)&pSVar12->field_0x8 * 0.0 - *(float *)pSVar12 * 0.0;
        local_148[1] = *(float *)pSVar12 * local_6c * *(float *)(this_ptr + 0x37b34) - fVar5;
        local_268[2] = local_14c;
        local_268[(uint)bVar16 * -2 + 3] = local_148[(uint)bVar16 * -2];
        local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        *(float *)puVar2 = *(float *)puVar2 + local_268[2];
        *(float *)&pSVar12->field_0x10 = *(float *)&pSVar12->field_0x10 + local_268[3];
        *(float *)&pSVar12->field_0x14 = *(float *)&pSVar12->field_0x14 + local_258;
        if ((local_a4 == 0) ||
           (_DAT_005f1103 <=
            SQRT(*(float *)&pSVar12->field_0x2c * *(float *)&pSVar12->field_0x2c +
                 *(float *)puVar1 * *(float *)puVar1 +
                 *(float *)&pSVar12->field_0x28 * *(float *)&pSVar12->field_0x28))) {
          fVar5 = 1.0 / local_28;
          local_224 = *(float *)&pSVar12->field_0xc * fVar5;
          local_220 = *(float *)&pSVar12->field_0x10 * fVar5;
          local_21c = fVar5 * *(float *)&pSVar12->field_0x14;
          local_2b4 = local_224;
          local_2b0[(uint)bVar16 * -2] = local_268[(uint)bVar16 * -2 + 0x12];
          local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               local_268[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
          if ((float *)&pSVar12->field_0x18 != &local_2b4) {
            *(float *)&pSVar12->field_0x18 = local_2b4;
            *(float *)&pSVar12->field_0x1c = local_2b0[0];
            *(float *)&pSVar12->field_0x20 = local_2b0[1];
          }
          local_1f4 = *(float *)&pSVar12->field_0x18 * delta_time;
          local_1f0[0] = *(float *)&pSVar12->field_0x1c * delta_time;
          puVar1 = &pSVar12->field_0x24;
          local_1f0[1] = *(float *)&pSVar12->field_0x20 * delta_time;
          local_1d0 = local_1f4;
          local_1f0[(uint)bVar16 * -2 + 9] = local_1f0[(uint)bVar16 * -2];
          local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          *(float *)puVar1 = *(float *)puVar1 + local_1d0;
          *(float *)&pSVar12->field_0x28 = *(float *)&pSVar12->field_0x28 + local_1cc;
          *(float *)&pSVar12->field_0x2c = *(float *)&pSVar12->field_0x2c + local_1c8;
          local_1b8 = *(float *)puVar1 * delta_time;
          local_1b4 = *(float *)&pSVar12->field_0x28 * delta_time;
          local_1b0 = delta_time * *(float *)&pSVar12->field_0x2c;
          local_1c4 = *(float *)puVar1 * delta_time;
          local_1f0[(uint)bVar16 * -2 + 0xc] = local_1f0[(uint)bVar16 * -2 + 0xf];
          local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
          *(float *)pSVar12 = *(float *)pSVar12 + local_1c4;
          *(float *)&pSVar12->field_0x4 = *(float *)&pSVar12->field_0x4 + local_1c0;
          *(float *)&pSVar12->field_0x8 = *(float *)&pSVar12->field_0x8 + local_1bc;
        }
        core_cloth_cpp_CCloth_applyConstraints_FUN_005af530(this_ptr,pSVar12);
      }
      local_38 = local_38 + 1;
      local_3c = local_3c + 4;
    } while (local_38 < *(int *)(this_ptr + 0x104));
  }
  local_24 = 0;
  local_64 = this_ptr + 0x398;
  do {
    iVar8 = 0;
    if (0 < *(int *)(this_ptr + 0x104)) {
      iVar15 = 0;
      do {
        pSVar12 = (SClothVertex *)
                  (local_64 + *(int *)(iVar15 + *(int *)(this_ptr + 0x3aafc)) * 0x11c);
        if ((*(int *)&pSVar12->field_0x74 == 0) &&
           ((local_a4 == 0 ||
            (_DAT_005f1103 <=
             SQRT(*(float *)&pSVar12->field_0x2c * *(float *)&pSVar12->field_0x2c +
                  *(float *)&pSVar12->field_0x24 * *(float *)&pSVar12->field_0x24 +
                  *(float *)&pSVar12->field_0x28 * *(float *)&pSVar12->field_0x28))))) {
          core_cloth_cpp_CCloth_applyConstraints_FUN_005af530(this_ptr,pSVar12);
        }
        iVar8 = iVar8 + 1;
        iVar15 = iVar15 + 4;
      } while (iVar8 < *(int *)(this_ptr + 0x104));
    }
    local_24 = local_24 + 1;
  } while (local_24 < 5);
  iVar8 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    pCVar10 = this_ptr + 0x37b2c;
    pCVar9 = this_ptr + 0x37b28;
    iVar15 = 0;
    do {
      iVar7 = *(int *)(iVar15 + *(int *)(this_ptr + 0x3aafc)) * 0x11c;
      if (*(int *)(this_ptr + iVar7 + 0x450) != 0) {
        *(float *)(this_ptr + iVar7 + 0x3bc) =
             *(float *)pCVar9 * *(float *)(this_ptr + iVar7 + 0x3bc);
        *(float *)(this_ptr + iVar7 + 0x3c0) =
             *(float *)pCVar9 * *(float *)(this_ptr + iVar7 + 0x3c0);
        *(float *)(this_ptr + iVar7 + 0x3c4) =
             *(float *)pCVar9 * *(float *)(this_ptr + iVar7 + 0x3c4);
      }
      if (*(int *)(this_ptr + iVar7 + 0x454) != 0) {
        *(float *)(this_ptr + iVar7 + 0x3bc) =
             *(float *)pCVar10 * *(float *)(this_ptr + iVar7 + 0x3bc);
        *(float *)(this_ptr + iVar7 + 0x3c0) =
             *(float *)pCVar10 * *(float *)(this_ptr + iVar7 + 0x3c0);
        *(float *)(this_ptr + iVar7 + 0x3c4) =
             *(float *)pCVar10 * *(float *)(this_ptr + iVar7 + 0x3c4);
      }
      iVar8 = iVar8 + 1;
      iVar15 = iVar15 + 4;
    } while (iVar8 < *(int *)(this_ptr + 0x104));
  }
  iVar8 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    pCVar10 = this_ptr + 0x398;
    iVar15 = 0;
    do {
      piVar13 = (int *)(*(int *)(this_ptr + 0x10c) + iVar15);
      *piVar13 = (int)ROUND(*(float *)pCVar10 * _DAT_006011a0);
      piVar13[1] = (int)ROUND(*(float *)(pCVar10 + 4) * _DAT_006011a0);
      piVar13[2] = (int)ROUND(*(float *)(pCVar10 + 8) * _DAT_006011a0);
      iVar8 = iVar8 + 1;
      pCVar10 = pCVar10 + 0x11c;
      iVar15 = iVar15 + 0xc;
    } while (iVar8 < *(int *)(this_ptr + 0x104));
  }
  return;
}
