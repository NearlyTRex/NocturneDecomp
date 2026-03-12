// Name: core_cloth.cpp_CCloth_step_FUN_0043abb0
// Address: 0043abb0
// Address Range: [[0043abb0, 0043b789]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_step_FUN_0043abb0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_step_FUN_0043abb0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CVector3f *pCVar4;
  CVector3f *pCVar12;
  float fVar5;
  SClothVertex *pSVar13;
  int iVar6;
  CVector3f *pCVar14;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar15;
  CCloth *pCVar10;
  int iVar16;
  SClothVertex *pSVar11;
  float local_1e0;
  CMatrix3x3f local_1d8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  int local_1a4;
  float local_1a0;
  int local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  CVector3f local_138;
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
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  CVector3f local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  CVector3f local_a8;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  CCloth *local_84;
  float local_80;
  float local_7c;
  float local_78;
  SClothVertex *local_74;
  SClothVertex *local_6c;
  float local_68;
  int local_64;
  float *local_5c;
  int local_58;
  float *local_54;
  int local_50;
  CVector3f *local_4c;
  CCloth *local_48;
  int local_44;
  int local_40;
  float local_3c;
  CMatrix3x4f *local_38;
  SClothVertex *local_34;
  SClothVertex *local_30;
  int local_2c;
  CVector3f *local_28;
  SClothBone *local_24;
  SClothVertex *local_20;
  SClothVertex *local_1c;
  float local_18;
  float local_14;
  int iVar2;
  float *pfVar1;
  SClothBone *pSVar3;
  
  if ((float)9999 <= floor_y) {
    floor_y = -9999.0;
  }
  if (delta_time < (float)0.01) {
    delta_time = 0.01;
  }
  this_ptr->inv_delta_time = 1.0 / delta_time;
  this_ptr->floor_y = floor_y - position->y;
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    local_40 = 0;
    if (0 < this_ptr->locked_vertex_count) {
      local_48 = this_ptr;
      do {
        pSVar13 = this_ptr->vertices + local_48->locked_vertex_indices[0];
        (pSVar13->position).z = 0.0;
        local_2c = 0;
        iVar15 = pSVar13->bone_influence_count;
        (pSVar13->position).y = (pSVar13->position).z;
        (pSVar13->position).x = (pSVar13->position).y;
        if (0 < iVar15) {
          pfVar9 = pSVar13->bone_weights;
          local_28 = pSVar13->bone_positions;
          local_30 = pSVar13;
          do {
            pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               (&local_9c,local_28,
                                (model_ptr->bone_transform).bone_world_matrices +
                                local_30->bone_index[0]);
            local_174 = pCVar4->x * *pfVar9;
            local_170 = pCVar4->y * *pfVar9;
            local_16c = pCVar4->z * *pfVar9;
            pfVar9 = pfVar9 + 1;
            local_28 = local_28 + 1;
            local_30 = (SClothVertex *)&(local_30->position).y;
            local_2c = local_2c + 1;
            (pSVar13->position).x = (pSVar13->position).x + local_174;
            (pSVar13->position).y = (pSVar13->position).y + local_170;
            iVar15 = pSVar13->bone_influence_count;
            (pSVar13->position).z = (pSVar13->position).z + local_16c;
          } while (local_2c < iVar15);
        }
        local_48 = (CCloth *)((local_48->model).model_filename + 4);
        local_40 = local_40 + 1;
      } while (local_40 < this_ptr->locked_vertex_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->collide_bone_count) {
      do {
        core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0(this_ptr,iVar6,model_ptr);
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->collide_bone_count);
    }
  }
  iVar15 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_84 = this_ptr;
    do {
      iVar16 = local_84->vertices[0].collide_bone_index;
      if (iVar16 != -1) {
        local_168.z = this_ptr->collide_bones[iVar16].child_distance;
        local_168.x = 0.0;
        local_168.y = 0.0;
        pCVar12 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                            (&this_ptr->collide_bones[iVar16].local_matrix,&local_cc,&local_168);
        local_18c = this_ptr->collide_bones[iVar16].position_offset.x + pCVar12->x;
        local_188 = this_ptr->collide_bones[iVar16].position_offset.y + pCVar12->y;
        local_184 = this_ptr->collide_bones[iVar16].position_offset.z + pCVar12->z;
        pSVar13 = this_ptr->vertices + iVar15;
        if (pSVar13 != (SClothVertex *)&local_18c) {
          (pSVar13->position).x = local_18c;
          (pSVar13->position).y = local_188;
          (pSVar13->position).z = local_184;
        }
      }
      iVar15 = iVar15 + 1;
      local_84 = (CCloth *)&(local_84->model).env_map_opac_list;
    } while (iVar15 < (this_ptr->model).vertex_count);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1d8,euler);
  local_114 = local_1d8.m[0].z;
  local_110 = local_1d8.m[1].z;
  local_10c = local_1d8.m[2].z;
  fVar8 = (g_CDemonSetPtr->active_fog).scroll.x;
  fVar9 = (g_CDemonSetPtr->active_fog).scroll.y;
  fVar10 = (g_CDemonSetPtr->active_fog).scroll.z;
  fVar4 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar4 <= 0.0) {
    local_8c = 0.0;
    local_90 = 0.0;
    local_88 = 0.0;
  }
  else {
    fVar4 = 1.0 / fVar4;
    local_90 = fVar8 * fVar4;
    local_8c = fVar9 * fVar4;
    local_88 = fVar10 * fVar4;
  }
  local_1e0 = local_88 * local_1d8.m[2].z +
              local_90 * local_1d8.m[0].z + local_8c * local_1d8.m[1].z;
  if (0.0 < local_1e0) {
    local_1e0 = 0.0;
  }
  fVar8 = local_1e0 * (float)-1;
  local_d8.x = (g_CDemonSetPtr->active_fog).scroll.x * fVar8;
  local_d8.y = (g_CDemonSetPtr->active_fog).scroll.y * fVar8;
  local_d8.z = (g_CDemonSetPtr->active_fog).scroll.z * fVar8;
  pCVar12 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                      (&local_1d8,&local_a8,&local_d8);
  fVar8 = pCVar12->x;
  fVar9 = (this_ptr->wind_velocity).x;
  fVar10 = pCVar12->y;
  fVar4 = (this_ptr->wind_velocity).y;
  fVar6 = pCVar12->z;
  fVar7 = (this_ptr->wind_velocity).z;
  (this_ptr->wind_velocity).z = 0.0;
  pCVar12 = &this_ptr->last_position;
  (this_ptr->wind_velocity).y = (this_ptr->wind_velocity).z;
  (this_ptr->wind_velocity).x = (this_ptr->wind_velocity).y;
  local_150.x = position->x - pCVar12->x;
  local_150.y = position->y - (this_ptr->last_position).y;
  local_150.z = position->z - (this_ptr->last_position).z;
  if (pCVar12 != position) {
    pCVar12->x = position->x;
    (this_ptr->last_position).y = position->y;
    (this_ptr->last_position).z = position->z;
  }
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_15c,&local_150);
  fVar11 = 1.0 / delta_time;
  local_180 = local_15c.x * fVar11 - (fVar8 + fVar9);
  local_108 = local_180 * fVar11;
  local_17c = local_15c.y * fVar11 - (fVar10 + fVar4);
  local_178 = local_15c.z * fVar11 - (fVar6 + fVar7);
  local_104 = local_17c * fVar11;
  local_100 = local_178 * fVar11;
  pCVar12 = &this_ptr->last_euler;
  local_e4 = euler->x - pCVar12->x;
  local_e0 = euler->y - (this_ptr->last_euler).y;
  local_dc = euler->z - (this_ptr->last_euler).z;
  if (pCVar12 != euler) {
    pCVar12->x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_e0);
  iVar15 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_4c = &this_ptr->vertices[0].prev_position;
    pCVar12 = &this_ptr->vertices[0].force;
    pCVar10 = this_ptr;
    do {
      pCVar12->z = 0.0;
      pCVar12->y = pCVar12->z;
      pCVar12->x = pCVar12->z;
      pCVar10->vertices[0].body_collision = 0;
      pCVar14 = &this_ptr->vertices[iVar15].position;
      pCVar10->vertices[0].floor_collision = 0;
      if (pCVar14 != local_4c) {
        pCVar12[0x10].x = ((CVector3f *)&pCVar14->x)->x;
        pCVar12[0x10].y = pCVar14->y;
        pCVar12[0x10].z = pCVar14->z;
      }
      pCVar10 = (CCloth *)&(pCVar10->model).env_map_opac_list;
      pCVar12 = (CVector3f *)((int)(pCVar12 + 0x17) + 8);
      iVar15 = iVar15 + 1;
      local_4c = (CVector3f *)&local_4c[0x17].z;
    } while (iVar15 < (this_ptr->model).vertex_count);
  }
  local_138.y = -this_ptr->weight;
  local_138.x = 0.0;
  local_138.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_144,&local_138);
  fVar8 = this_ptr->weight / this_ptr->gravity;
  local_44 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pfVar2 = &this_ptr->dampen;
    pfVar3 = &this_ptr->wind_area;
    local_58 = 0;
    do {
      pSVar13 = this_ptr->vertices + *(int *)((int)this_ptr->vertex_sort_buffer + local_58);
      if (pSVar13->locked == 0) {
        (pSVar13->secondary_velocity).x = *pfVar2 * (pSVar13->secondary_velocity).x;
        (pSVar13->secondary_velocity).y = *pfVar2 * (pSVar13->secondary_velocity).y;
        (pSVar13->secondary_velocity).z = *pfVar2 * (pSVar13->secondary_velocity).z;
        fVar9 = *pfVar3;
        fVar10 = *pfVar3;
        pCVar12 = &pSVar13->force;
        pCVar12->x = pCVar12->x - local_108 * fVar8 * *pfVar3;
        (pSVar13->force).y = (pSVar13->force).y - local_104 * fVar8 * fVar9;
        (pSVar13->force).z = (pSVar13->force).z - local_100 * fVar8 * fVar10;
        pCVar12->x = pCVar12->x + local_144.x;
        (pSVar13->force).y = (pSVar13->force).y + local_144.y;
        (pSVar13->force).z = (pSVar13->force).z + local_144.z;
        fVar10 = fVar5 * (1.0 / delta_time) * (1.0 / delta_time) * fVar8 * this_ptr->mom_inert;
        fVar9 = 1.0 / fVar8;
        local_f0 = (pSVar13->position).y * 0.0 - (pSVar13->position).z * fVar10;
        local_ec = (pSVar13->position).z * 0.0 - (pSVar13->position).x * 0.0;
        local_e8 = (pSVar13->position).x * fVar10 - (pSVar13->position).y * 0.0;
        pCVar12->x = pCVar12->x + local_f0;
        (pSVar13->force).y = (pSVar13->force).y + local_ec;
        local_12c = pCVar12->x * fVar9;
        (pSVar13->force).z = (pSVar13->force).z + local_e8;
        local_128 = (pSVar13->force).y * fVar9;
        local_124 = fVar9 * (pSVar13->force).z;
        if (&pSVar13->velocity != (CVector3f *)&local_12c) {
          (pSVar13->velocity).x = local_12c;
          (pSVar13->velocity).y = local_128;
          (pSVar13->velocity).z = local_124;
        }
        local_fc = (pSVar13->velocity).x * delta_time;
        local_f8 = (pSVar13->velocity).y * delta_time;
        local_f4 = (pSVar13->velocity).z * delta_time;
        pCVar12 = &pSVar13->secondary_velocity;
        pCVar12->x = pCVar12->x + local_fc;
        (pSVar13->secondary_velocity).y = (pSVar13->secondary_velocity).y + local_f8;
        local_120 = pCVar12->x * delta_time;
        (pSVar13->secondary_velocity).z = (pSVar13->secondary_velocity).z + local_f4;
        local_11c = (pSVar13->secondary_velocity).y * delta_time;
        local_118 = delta_time * (pSVar13->secondary_velocity).z;
        (pSVar13->position).x = (pSVar13->position).x + local_120;
        (pSVar13->position).y = (pSVar13->position).y + local_11c;
        (pSVar13->position).z = (pSVar13->position).z + local_118;
        core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420(this_ptr,pSVar13);
      }
      local_58 = local_58 + 4;
      local_44 = local_44 + 1;
    } while (local_44 < (this_ptr->model).vertex_count);
  }
  local_50 = 0;
  do {
    iVar15 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      iVar7 = 0;
      do {
        if (this_ptr->vertices[*(int *)(iVar7 + (int)this_ptr->vertex_sort_buffer)].locked == 0) {
          core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420
                    (this_ptr,this_ptr->vertices +
                              *(int *)(iVar7 + (int)this_ptr->vertex_sort_buffer));
        }
        iVar15 = iVar15 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar15 < (this_ptr->model).vertex_count);
    }
    local_50 = local_50 + 1;
  } while (local_50 < 5);
  iVar15 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pfVar2 = &this_ptr->floor_friction;
    pfVar1 = &this_ptr->body_friction;
    iVar16 = 0;
    do {
      iVar2 = *(int *)(iVar16 + (int)this_ptr->vertex_sort_buffer);
      if (this_ptr->vertices[iVar2].body_collision != 0) {
        pCVar12 = &this_ptr->vertices[iVar2].secondary_velocity;
        pCVar12->x = *pfVar1 * pCVar12->x;
        this_ptr->vertices[iVar2].secondary_velocity.y =
             *pfVar1 * this_ptr->vertices[iVar2].secondary_velocity.y;
        this_ptr->vertices[iVar2].secondary_velocity.z =
             *pfVar1 * this_ptr->vertices[iVar2].secondary_velocity.z;
      }
      if (this_ptr->vertices[iVar2].floor_collision != 0) {
        pCVar12 = &this_ptr->vertices[iVar2].secondary_velocity;
        pCVar12->x = *pfVar2 * pCVar12->x;
        this_ptr->vertices[iVar2].secondary_velocity.y =
             *pfVar2 * this_ptr->vertices[iVar2].secondary_velocity.y;
        this_ptr->vertices[iVar2].secondary_velocity.z =
             *pfVar2 * this_ptr->vertices[iVar2].secondary_velocity.z;
      }
      iVar15 = iVar15 + 1;
      iVar16 = iVar16 + 4;
    } while (iVar15 < (this_ptr->model).vertex_count);
  }
  iVar15 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pSVar11 = this_ptr->vertices;
    iVar16 = 0;
    do {
      piVar8 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar16);
      iVar15 = iVar15 + 1;
      *piVar8 = (int)ROUND((pSVar11->position).x * 256.0f);
      piVar8[1] = (int)ROUND((pSVar11->position).y * 256.0f);
      piVar8[2] = (int)ROUND((pSVar11->position).z * 256.0f);
      pSVar11 = pSVar11 + 1;
      iVar16 = iVar16 + 0xc;
    } while (iVar15 < (this_ptr->model).vertex_count);
  }
  return;
}
