// Name: core_cloth.cpp_CCloth_step_FUN_0043e2a0
// Address: 0043e2a0
// Address Range: [[0043e2a0, 0043f105]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_step_FUN_0043e2a0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_step_FUN_0043e2a0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SClothBone *pSVar5;
  SMotion *pSVar6;
  float fVar7;
  int iVar8;
  CCloth *pCVar9;
  SClothVertex *pSVar10;
  int iVar11;
  CVector3f *pCVar12;
  int *piVar13;
  float *pfVar14;
  CVector3f *pCVar15;
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
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
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
  CMatrix3x4f *local_a0;
  int local_9c;
  SClothBone *local_98;
  int local_94;
  SClothVertex *local_90;
  float local_8c;
  float local_84;
  SClothBone *local_80;
  int local_7c;
  SClothVertex *local_74;
  float *local_70;
  float local_6c;
  SClothVertex *local_64;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f *local_50;
  SClothVertex *local_4c;
  float *local_48;
  CCloth *local_44;
  CCloth *local_40;
  int local_3c;
  int local_38;
  SClothVertex *local_34;
  float local_30;
  float *local_2c;
  float local_28;
  int local_24;
  SClothVertex *local_20;
  float local_18;
  
  bVar16 = 0;
  local_a4 = 0;
  if ((float)_DAT_005b9128 <= floor_y) {
    floor_y = -9999.0;
  }
  if (delta_time < (float)_DAT_005b9130) {
    delta_time = 0.01;
  }
  this_ptr->inv_delta_time = 1.0 / delta_time;
  this_ptr->floor_y = floor_y - position->y;
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    local_94 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_a0 = (model_ptr->bone_transform).bone_model_matrices;
      local_20 = this_ptr->vertices;
      local_44 = this_ptr;
      do {
        pSVar10 = local_20 + local_44->locked_vertex_indices[0];
        (pSVar10->position).z = 0.0;
        local_7c = 0;
        iVar11 = pSVar10->bone_influence_count;
        (pSVar10->position).y = (pSVar10->position).z;
        (pSVar10->position).x = (pSVar10->position).y;
        if (0 < iVar11) {
          local_48 = pSVar10->bone_weights;
          local_50 = pSVar10->bone_positions;
          local_4c = pSVar10;
          do {
            core_xform_cpp_FUN_00583260(local_50,local_a0 + local_4c->bone_index[0]);
            local_248 = local_194;
            local_2b0[(uint)bVar16 * -2 + 0x1b] = local_1f0[(uint)bVar16 * -2 + 0x18];
            local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
                 local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
            fVar7 = *local_48;
            local_ec = local_248 * fVar7;
            local_e8 = local_244 * *local_48;
            fVar2 = *local_48;
            iVar8 = local_7c + 1;
            local_48 = local_48 + 1;
            local_e4 = local_240 * fVar2;
            local_bc = local_248 * fVar7;
            local_b8[(uint)bVar16 * -2] = local_148[(uint)bVar16 * -2 + 0x18];
            local_b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
            iVar11 = pSVar10->bone_influence_count;
            local_50 = local_50 + 1;
            local_4c = (SClothVertex *)&(local_4c->position).y;
            (pSVar10->position).x = (pSVar10->position).x + local_bc;
            (pSVar10->position).y = (pSVar10->position).y + local_b8[0];
            (pSVar10->position).z = (pSVar10->position).z + local_b8[1];
            local_7c = iVar8;
          } while (iVar8 < iVar11);
        }
        local_44 = (CCloth *)((local_44->model).model_filename + 4);
        local_94 = local_94 + 1;
      } while (local_94 < this_ptr->locked_vertex_count);
    }
    iVar11 = 0;
    if (0 < this_ptr->collide_bone_count) {
      do {
        core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043d830(this_ptr,iVar11,model_ptr);
        iVar11 = iVar11 + 1;
      } while (iVar11 < this_ptr->collide_bone_count);
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&model_ptr->base);
    if (pSVar6->state_index == 0) {
      local_a4 = 1;
    }
  }
  iVar11 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_80 = this_ptr->collide_bones;
    local_90 = this_ptr->vertices;
    local_40 = this_ptr;
    do {
      local_9c = iVar11 * 0x11c;
      iVar8 = local_40->vertices[0].collide_bone_index;
      if (iVar8 != -1) {
        local_98 = local_80 + iVar8;
        local_158[2] = local_98->child_distance;
        local_158[0] = 0.0;
        local_158[1] = 0.0;
        core_dirmat_cpp_FUN_0045b800(&local_98->local_matrix,local_1f0 + 0x26);
        pSVar5 = local_98;
        local_2b0[2] = local_218;
        local_2b0[(uint)bVar16 * -2 + 3] = local_2b0[(uint)bVar16 * -2 + 0x27];
        local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x28];
        local_1f0[2] = (pSVar5->position_offset).x + local_2b0[2];
        local_1f0[3] = (pSVar5->position_offset).y + local_2b0[3];
        local_1e0 = (pSVar5->position_offset).z + local_2a0;
        pfVar14 = (float *)((int)local_90->connected_indices + local_9c + -0x34);
        local_26c = local_1f0[2];
        local_2b0[(uint)bVar16 * -2 + 0x12] = local_1f0[(uint)bVar16 * -2 + 3];
        local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
             local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        if (pfVar14 != local_2b0 + 0x11) {
          *pfVar14 = local_26c;
          pfVar14[1] = local_268;
          pfVar14[2] = local_264;
        }
      }
      iVar11 = iVar11 + 1;
      local_40 = (CCloth *)&(local_40->model).env_map_opac_list;
    } while (iVar11 < (this_ptr->model).vertex_count);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_2dc,euler);
  pfVar14 = (float *)((int)g_CDemonSetPtr + (uint)bVar16 * -8 + 0x15ac74);
  local_e0 = (g_CDemonSetPtr->active_fog).scroll.x;
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
    fVar7 = 1.0 / local_8c;
    local_e0 = local_e0 * fVar7;
    local_dc = local_dc * fVar7;
    local_d8 = local_d8 * fVar7;
  }
  local_2e0 = local_d8 * local_2dc.m[2].z +
              local_e0 * local_2dc.m[0].z + local_dc * local_2dc.m[1].z;
  local_84 = local_2e0;
  if (0.0 < local_2e0) {
    local_2e0 = 0.0;
  }
  local_2e0 = local_2e0 * (float)_DAT_005b9138;
  local_23c = (g_CDemonSetPtr->active_fog).scroll.x * local_2e0;
  local_238 = (g_CDemonSetPtr->active_fog).scroll.y * local_2e0;
  pfVar14 = local_b8 + 2;
  local_234 = (g_CDemonSetPtr->active_fog).scroll.z * local_2e0;
  local_b8[2] = local_23c;
  local_b8[(uint)bVar16 * -2 + 3] = local_2b0[(uint)bVar16 * -2 + 0x1e];
  local_b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
       local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f];
  core_dirmat_cpp_FUN_0045b870(&local_2dc,pfVar14);
  local_284 = local_164;
  local_2b0[(uint)bVar16 * -2 + 0xc] = local_1f0[(uint)bVar16 * -2 + 0x24];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
  local_110 = local_284 + (this_ptr->wind_velocity).x;
  local_10c = local_280 + (this_ptr->wind_velocity).y;
  local_108 = local_27c + (this_ptr->wind_velocity).z;
  local_188 = local_110;
  local_1f0[(uint)bVar16 * -2 + 0x1b] = local_148[(uint)bVar16 * -2 + 0xf];
  local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
  pCVar15 = &this_ptr->last_position;
  (this_ptr->wind_velocity).z = 0.0;
  (this_ptr->wind_velocity).y = (this_ptr->wind_velocity).z;
  (this_ptr->wind_velocity).x = (this_ptr->wind_velocity).y;
  local_1dc = position->x - pCVar15->x;
  local_1d8 = position->y - (this_ptr->last_position).y;
  local_1d4 = position->z - (this_ptr->last_position).z;
  local_29c[0] = local_1dc;
  local_2b0[(uint)bVar16 * -2 + 6] = local_1f0[(uint)bVar16 * -2 + 6];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
  if (pCVar15 != position) {
    pCVar15->x = position->x;
    (this_ptr->last_position).y = position->y;
    (this_ptr->last_position).z = position->z;
  }
  core_dirmat_cpp_FUN_0045b870(&local_2dc,local_2b0 + 5);
  local_278 = local_f8;
  local_2b0[(uint)bVar16 * -2 + 0xf] = local_148[(uint)bVar16 * -2 + 0x15];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
  fVar7 = 1.0 / delta_time;
  local_1a0 = local_278 * fVar7;
  local_19c = local_274 * fVar7;
  local_198 = local_270 * fVar7;
  local_20c = local_278 * fVar7;
  local_2b0[(uint)bVar16 * -2 + 0x2a] = local_1f0[(uint)bVar16 * -2 + 0x15];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x2b] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
  local_290 = local_20c - local_188;
  local_28c = local_208 - local_184;
  local_288 = local_204 - local_180;
  local_230 = local_20c - local_188;
  local_2b0[(uint)bVar16 * -2 + 0x21] = local_2b0[(uint)bVar16 * -2 + 9];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22] =
       local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
  local_11c = local_230 * fVar7;
  local_118 = local_22c * fVar7;
  local_114 = local_228 * fVar7;
  local_128 = local_230 * fVar7;
  local_148[(uint)bVar16 * -2 + 9] = local_148[(uint)bVar16 * -2 + 0xc];
  local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
       local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
  local_17c = euler->x - (this_ptr->last_euler).x;
  local_178 = euler->y - (this_ptr->last_euler).y;
  local_174 = euler->z - (this_ptr->last_euler).z;
  local_148[2] = local_17c;
  local_148[(uint)bVar16 * -2 + 3] = local_1f0[(uint)bVar16 * -2 + 0x1e];
  local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f];
  if (&this_ptr->last_euler != euler) {
    (this_ptr->last_euler).x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_148[3]);
  local_30 = fVar7 * (1.0 / delta_time) * (1.0 / delta_time);
  iVar11 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_34 = this_ptr->vertices;
    pCVar12 = &this_ptr->vertices[0].prev_position;
    pCVar15 = &this_ptr->vertices[0].force;
    pCVar9 = this_ptr;
    do {
      pCVar15->z = 0.0;
      pCVar15->y = pCVar15->z;
      pCVar15->x = pCVar15->z;
      pCVar9->vertices[0].body_collision = 0;
      pSVar10 = local_34 + iVar11;
      pCVar9->vertices[0].floor_collision = 0;
      if ((SClothVertex *)pCVar12 != pSVar10) {
        pCVar15[0x10].x = (pSVar10->position).x;
        pCVar15[0x10].y = (pSVar10->position).y;
        pCVar15[0x10].z = (pSVar10->position).z;
      }
      pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);
      pCVar9 = (CCloth *)&(pCVar9->model).env_map_opac_list;
      iVar11 = iVar11 + 1;
      pCVar15 = (CVector3f *)((int)(pCVar15 + 0x17) + 8);
    } while (iVar11 < (this_ptr->model).vertex_count);
  }
  local_1fc = -this_ptr->gravity;
  local_200 = 0.0;
  local_1f8 = 0;
  local_18 = local_1fc;
  core_dirmat_cpp_FUN_0045b870(&local_2dc,local_2b0 + 0x2c);
  local_254 = local_170;
  local_2b0[(uint)bVar16 * -2 + 0x18] = local_1f0[(uint)bVar16 * -2 + 0x21];
  local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
       local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22];
  local_28 = this_ptr->gravity / this_ptr->dampen;
  local_38 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_3c = 0;
    local_70 = &this_ptr->spring;
    local_5c = local_128 * local_28;
    local_58 = local_124 * local_28;
    local_2c = &this_ptr->mom_inert;
    local_54 = local_120 * local_28;
    local_6c = local_30 * local_28;
    local_74 = this_ptr->vertices;
    do {
      pSVar10 = local_74 + *(int *)((int)this_ptr->vertex_sort_buffer + local_3c);
      if (pSVar10->locked == 0) {
        pCVar15 = &pSVar10->secondary_velocity;
        pCVar15->x = *local_70 * pCVar15->x;
        (pSVar10->secondary_velocity).y = *local_70 * (pSVar10->secondary_velocity).y;
        (pSVar10->secondary_velocity).z = *local_70 * (pSVar10->secondary_velocity).z;
        local_134 = local_5c;
        local_130 = local_58;
        local_12c = local_54;
        local_1ac = local_5c;
        local_1f0[(uint)bVar16 * -2 + 0x12] = local_148[(uint)bVar16 * -2 + 6];
        local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
        local_104 = local_1ac * *local_2c;
        local_100 = local_1a8 * *local_2c;
        local_fc = local_1a4 * *local_2c;
        pCVar12 = &pSVar10->force;
        local_d4 = local_1ac * *local_2c;
        local_148[(uint)bVar16 * -2 + 0x1e] = local_148[(uint)bVar16 * -2 + 0x12];
        local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
        pCVar12->x = pCVar12->x - local_d4;
        (pSVar10->force).y = (pSVar10->force).y - local_d0;
        (pSVar10->force).z = (pSVar10->force).z - local_cc;
        pCVar12->x = pCVar12->x + local_254;
        (pSVar10->force).y = (pSVar10->force).y + local_250;
        (pSVar10->force).z = (pSVar10->force).z + local_24c;
        fVar7 = local_6c * *(float *)this_ptr->dead;
        fVar2 = (pSVar10->position).y * 0.0;
        local_14c = fVar2 - (pSVar10->position).z * fVar7;
        local_148[0] = (pSVar10->position).z * 0.0 - (pSVar10->position).x * 0.0;
        local_148[1] = (pSVar10->position).x * fVar7 - fVar2;
        local_260 = local_14c;
        local_2b0[(uint)bVar16 * -2 + 0x15] = local_148[(uint)bVar16 * -2];
        local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
             local_148[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        pCVar12->x = pCVar12->x + local_260;
        (pSVar10->force).y = (pSVar10->force).y + local_25c;
        (pSVar10->force).z = (pSVar10->force).z + local_258;
        if ((local_a4 == 0) ||
           (fVar7 = (pSVar10->secondary_velocity).y, fVar2 = (pSVar10->secondary_velocity).z,
           _DAT_005b9140 <= SQRT(fVar2 * fVar2 + pCVar15->x * pCVar15->x + fVar7 * fVar7))) {
          fVar7 = 1.0 / local_28;
          local_224 = (pSVar10->force).x * fVar7;
          local_220 = (pSVar10->force).y * fVar7;
          local_21c = fVar7 * (pSVar10->force).z;
          local_2b4 = local_224;
          local_2b0[(uint)bVar16 * -2] = local_2b0[(uint)bVar16 * -2 + 0x24];
          local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               local_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
          if (&pSVar10->velocity != (CVector3f *)&local_2b4) {
            (pSVar10->velocity).x = local_2b4;
            (pSVar10->velocity).y = local_2b0[0];
            (pSVar10->velocity).z = local_2b0[1];
          }
          local_1f4 = (pSVar10->velocity).x * delta_time;
          local_1f0[0] = (pSVar10->velocity).y * delta_time;
          pCVar15 = &pSVar10->secondary_velocity;
          local_1f0[1] = (pSVar10->velocity).z * delta_time;
          local_1d0 = local_1f4;
          local_1f0[(uint)bVar16 * -2 + 9] = local_1f0[(uint)bVar16 * -2];
          local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          pCVar15->x = pCVar15->x + local_1d0;
          (pSVar10->secondary_velocity).y = (pSVar10->secondary_velocity).y + local_1cc;
          local_1b8 = pCVar15->x * delta_time;
          (pSVar10->secondary_velocity).z = (pSVar10->secondary_velocity).z + local_1c8;
          local_1b4 = (pSVar10->secondary_velocity).y * delta_time;
          local_1b0 = delta_time * (pSVar10->secondary_velocity).z;
          local_1c4 = local_1b8;
          local_1f0[(uint)bVar16 * -2 + 0xc] = local_1f0[(uint)bVar16 * -2 + 0xf];
          local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
               local_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
          (pSVar10->position).x = (pSVar10->position).x + local_1c4;
          (pSVar10->position).y = (pSVar10->position).y + local_1c0;
          (pSVar10->position).z = (pSVar10->position).z + local_1bc;
        }
        core_cloth_cpp_CCloth_applyConstraints_FUN_0043d9b0(this_ptr,pSVar10);
      }
      local_38 = local_38 + 1;
      local_3c = local_3c + 4;
    } while (local_38 < (this_ptr->model).vertex_count);
  }
  local_24 = 0;
  local_64 = this_ptr->vertices;
  do {
    iVar11 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      iVar8 = 0;
      do {
        pSVar10 = local_64 + *(int *)(iVar8 + (int)this_ptr->vertex_sort_buffer);
        if ((pSVar10->locked == 0) &&
           ((local_a4 == 0 ||
            (fVar7 = (pSVar10->secondary_velocity).y, fVar2 = (pSVar10->secondary_velocity).x,
            fVar3 = (pSVar10->secondary_velocity).z,
            _DAT_005b9140 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar7 * fVar7))))) {
          core_cloth_cpp_CCloth_applyConstraints_FUN_0043d9b0(this_ptr,pSVar10);
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar11 < (this_ptr->model).vertex_count);
    }
    local_24 = local_24 + 1;
  } while (local_24 < 5);
  iVar11 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pfVar14 = &this_ptr->wind_area;
    pfVar1 = &this_ptr->floor_friction;
    iVar8 = 0;
    do {
      iVar4 = *(int *)(iVar8 + (int)this_ptr->vertex_sort_buffer);
      if (this_ptr->vertices[iVar4].body_collision != 0) {
        pCVar15 = &this_ptr->vertices[iVar4].secondary_velocity;
        pCVar15->x = *pfVar1 * pCVar15->x;
        this_ptr->vertices[iVar4].secondary_velocity.y =
             *pfVar1 * this_ptr->vertices[iVar4].secondary_velocity.y;
        this_ptr->vertices[iVar4].secondary_velocity.z =
             *pfVar1 * this_ptr->vertices[iVar4].secondary_velocity.z;
      }
      if (this_ptr->vertices[iVar4].floor_collision != 0) {
        pCVar15 = &this_ptr->vertices[iVar4].secondary_velocity;
        pCVar15->x = *pfVar14 * pCVar15->x;
        this_ptr->vertices[iVar4].secondary_velocity.y =
             *pfVar14 * this_ptr->vertices[iVar4].secondary_velocity.y;
        this_ptr->vertices[iVar4].secondary_velocity.z =
             *pfVar14 * this_ptr->vertices[iVar4].secondary_velocity.z;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar11 < (this_ptr->model).vertex_count);
  }
  iVar11 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pSVar10 = this_ptr->vertices;
    iVar8 = 0;
    do {
      piVar13 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar8);
      *piVar13 = (int)ROUND((pSVar10->position).x * _DAT_005dd3b0);
      piVar13[1] = (int)ROUND((pSVar10->position).y * _DAT_005dd3b0);
      piVar13[2] = (int)ROUND((pSVar10->position).z * _DAT_005dd3b0);
      iVar11 = iVar11 + 1;
      pSVar10 = pSVar10 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar11 < (this_ptr->model).vertex_count);
  }
  return;
}
