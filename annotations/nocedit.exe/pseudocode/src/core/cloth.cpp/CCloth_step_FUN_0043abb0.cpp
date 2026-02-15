// Name: core_cloth.cpp_CCloth_step_FUN_0043abb0
// Address: 0043abb0
// Address Range: [[0043abb0, 0043b789]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_step_FUN_0043abb0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_step_FUN_0043abb0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  float *pfVar1;
  int iVar2;
  SClothBone *pSVar3;
  CVector3f *pCVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  CCloth *pCVar10;
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
      local_38 = (model_ptr->bone_transform).bone_world_matrices;
      local_1c = this_ptr->vertices;
      local_48 = this_ptr;
      do {
        pSVar11 = local_1c + local_48->locked_vertex_indices[0];
        (pSVar11->position).z = 0.0;
        local_2c = 0;
        iVar6 = pSVar11->bone_influence_count;
        (pSVar11->position).y = (pSVar11->position).z;
        (pSVar11->position).x = (pSVar11->position).y;
        if (0 < iVar6) {
          pfVar9 = pSVar11->bone_weights;
          local_28 = pSVar11->bone_positions;
          local_30 = pSVar11;
          do {
            pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               (&local_9c,local_28,local_38 + local_30->primary_bone_index);
            local_174 = pCVar4->x * *pfVar9;
            local_170 = pCVar4->y * *pfVar9;
            local_16c = pCVar4->z * *pfVar9;
            pfVar9 = pfVar9 + 1;
            local_28 = local_28 + 1;
            local_30 = (SClothVertex *)&(local_30->position).y;
            local_2c = local_2c + 1;
            (pSVar11->position).x = (pSVar11->position).x + local_174;
            (pSVar11->position).y = (pSVar11->position).y + local_170;
            iVar6 = pSVar11->bone_influence_count;
            (pSVar11->position).z = (pSVar11->position).z + local_16c;
          } while (local_2c < iVar6);
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
  iVar6 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_24 = this_ptr->collide_bones;
    local_20 = this_ptr->vertices;
    local_84 = this_ptr;
    do {
      pSVar3 = local_24;
      local_64 = iVar6 * 0x11c;
      iVar7 = *(int *)local_84->vertices[0].bone_indices;
      if (iVar7 != -1) {
        local_168.z = local_24[iVar7].child_distance;
        local_168.x = 0.0;
        local_168.y = 0.0;
        local_80 = local_168.z;
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (&local_24[iVar7].local_matrix,&local_cc,&local_168);
        local_18c = pSVar3[iVar7].position_offset.x + pCVar4->x;
        local_188 = pSVar3[iVar7].position_offset.y + pCVar4->y;
        local_184 = pSVar3[iVar7].position_offset.z + pCVar4->z;
        pfVar9 = (float *)((int)local_20->connected_indices + local_64 + -0x34);
        if (pfVar9 != &local_18c) {
          *pfVar9 = local_18c;
          pfVar9[1] = local_188;
          pfVar9[2] = local_184;
        }
      }
      iVar6 = iVar6 + 1;
      local_84 = (CCloth *)&(local_84->model).env_map_opac_list;
    } while (iVar6 < (this_ptr->model).vertex_count);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1d8,euler);
  local_114 = local_1d8.m[0].z;
  local_110 = local_1d8.m[1].z;
  local_10c = local_1d8.m[2].z;
  local_90 = (g_CDemonSetPtr->active_fog).scroll.x;
  local_8c = (g_CDemonSetPtr->active_fog).scroll.y;
  local_88 = (g_CDemonSetPtr->active_fog).scroll.z;
  fVar5 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  if (fVar5 <= 0.0) {
    local_8c = 0.0;
    local_90 = 0.0;
    local_88 = 0.0;
  }
  else {
    fVar5 = 1.0 / fVar5;
    local_90 = local_90 * fVar5;
    local_8c = local_8c * fVar5;
    local_88 = local_88 * fVar5;
  }
  local_18 = local_88 * local_1d8.m[2].z + local_90 * local_1d8.m[0].z + local_8c * local_1d8.m[1].z
  ;
  local_1e0 = local_18;
  if (0.0 < local_18) {
    local_1e0 = 0.0;
  }
  local_d8.z = local_1e0 * (float)-1;
  local_d8.x = (g_CDemonSetPtr->active_fog).scroll.x * local_d8.z;
  local_d8.y = (g_CDemonSetPtr->active_fog).scroll.y * local_d8.z;
  local_d8.z = (g_CDemonSetPtr->active_fog).scroll.z * local_d8.z;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (&local_1d8,&local_a8,&local_d8);
  local_198 = pCVar4->x + *(float *)this_ptr[1].model.model_filename;
  local_194 = pCVar4->y + *(float *)(this_ptr[1].model.model_filename + 4);
  local_190 = pCVar4->z + *(float *)(this_ptr[1].model.model_filename + 8);
  pCVar10 = this_ptr + 1;
  (pCVar10->model).model_filename[8] = '\0';
  (pCVar10->model).model_filename[9] = '\0';
  (pCVar10->model).model_filename[10] = '\0';
  (pCVar10->model).model_filename[0xb] = '\0';
  pCVar4 = &this_ptr->last_position;
  *(uint *)(this_ptr[1].model.model_filename + 4) =
       *(uint *)(this_ptr[1].model.model_filename + 8);
  *(uint *)this_ptr[1].model.model_filename =
       *(uint *)(this_ptr[1].model.model_filename + 4);
  local_150.x = position->x - pCVar4->x;
  local_150.y = position->y - (this_ptr->last_position).y;
  local_150.z = position->z - (this_ptr->last_position).z;
  if (pCVar4 != position) {
    pCVar4->x = position->x;
    (this_ptr->last_position).y = position->y;
    (this_ptr->last_position).z = position->z;
  }
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_15c,&local_150);
  local_100 = 1.0 / delta_time;
  local_b4 = local_15c.x * local_100;
  local_b0 = local_15c.y * local_100;
  local_180 = local_b4 - local_198;
  local_ac = local_15c.z * local_100;
  local_108 = local_180 * local_100;
  local_17c = local_b0 - local_194;
  local_178 = local_ac - local_190;
  local_104 = local_17c * local_100;
  local_100 = local_178 * local_100;
  pCVar4 = &this_ptr->last_euler;
  local_e4 = euler->x - pCVar4->x;
  local_e0 = euler->y - (this_ptr->last_euler).y;
  local_dc = euler->z - (this_ptr->last_euler).z;
  if (pCVar4 != euler) {
    pCVar4->x = euler->x;
    (this_ptr->last_euler).y = euler->y;
    (this_ptr->last_euler).z = euler->z;
  }
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_e0);
  local_78 = fVar5 * (1.0 / delta_time) * (1.0 / delta_time);
  iVar6 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_6c = this_ptr->vertices;
    local_4c = &this_ptr->vertices[0].prev_position;
    pCVar4 = &this_ptr->vertices[0].force;
    pCVar10 = this_ptr;
    do {
      pCVar4->z = 0.0;
      pCVar4->y = pCVar4->z;
      pCVar4->x = pCVar4->z;
      pCVar10->vertices[0].body_collision = 0;
      pSVar11 = local_6c + iVar6;
      pCVar10->vertices[0].floor_collision = 0;
      if (pSVar11 != (SClothVertex *)local_4c) {
        pCVar4[0x10].x = (pSVar11->position).x;
        pCVar4[0x10].y = (pSVar11->position).y;
        pCVar4[0x10].z = (pSVar11->position).z;
      }
      pCVar10 = (CCloth *)&(pCVar10->model).env_map_opac_list;
      pCVar4 = (CVector3f *)((int)(pCVar4 + 0x17) + 8);
      iVar6 = iVar6 + 1;
      local_4c = (CVector3f *)((int)(local_4c + 0x17) + 8);
    } while (iVar6 < (this_ptr->model).vertex_count);
  }
  local_138.y = -this_ptr->weight;
  local_138.x = 0.0;
  local_138.z = 0.0;
  local_14 = local_138.y;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_144,&local_138);
  local_3c = this_ptr->weight / this_ptr->gravity;
  local_44 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_5c = &this_ptr->dampen;
    local_68 = local_78 * local_3c;
    local_54 = &this_ptr->wind_area;
    local_58 = 0;
    local_74 = this_ptr->vertices;
    do {
      pSVar11 = local_74 + *(int *)((int)this_ptr->vertex_sort_buffer + local_58);
      iVar6 = pSVar11->locked;
      if (iVar6 == 0) {
        (pSVar11->secondary_velocity).x = *local_5c * (pSVar11->secondary_velocity).x;
        (pSVar11->secondary_velocity).y = *local_5c * (pSVar11->secondary_velocity).y;
        (pSVar11->secondary_velocity).z = *local_5c * (pSVar11->secondary_velocity).z;
        local_c0 = local_108 * local_3c;
        local_bc = local_104 * local_3c;
        local_b8 = local_100 * local_3c;
        local_1b0 = local_c0 * *local_54;
        local_1ac = local_bc * *local_54;
        local_1a8 = local_b8 * *local_54;
        pCVar4 = &pSVar11->force;
        pCVar4->x = pCVar4->x - local_1b0;
        (pSVar11->force).y = (pSVar11->force).y - local_1ac;
        (pSVar11->force).z = (pSVar11->force).z - local_1a8;
        pCVar4->x = pCVar4->x + local_144.x;
        (pSVar11->force).y = (pSVar11->force).y + local_144.y;
        (pSVar11->force).z = (pSVar11->force).z + local_144.z;
        local_1a0 = local_68 * this_ptr->mom_inert;
        local_124 = 1.0 / local_3c;
        local_f0 = (pSVar11->position).y * 0.0 - (pSVar11->position).z * local_1a0;
        local_ec = (pSVar11->position).z * 0.0 - (pSVar11->position).x * 0.0;
        local_e8 = (pSVar11->position).x * local_1a0 - (pSVar11->position).y * 0.0;
        pCVar4->x = pCVar4->x + local_f0;
        (pSVar11->force).y = (pSVar11->force).y + local_ec;
        local_12c = pCVar4->x * local_124;
        (pSVar11->force).z = (pSVar11->force).z + local_e8;
        local_128 = (pSVar11->force).y * local_124;
        local_124 = local_124 * (pSVar11->force).z;
        if (&pSVar11->velocity != (CVector3f *)&local_12c) {
          (pSVar11->velocity).x = local_12c;
          (pSVar11->velocity).y = local_128;
          (pSVar11->velocity).z = local_124;
        }
        local_fc = (pSVar11->velocity).x * delta_time;
        local_f8 = (pSVar11->velocity).y * delta_time;
        local_f4 = (pSVar11->velocity).z * delta_time;
        pCVar4 = &pSVar11->secondary_velocity;
        pCVar4->x = pCVar4->x + local_fc;
        (pSVar11->secondary_velocity).y = (pSVar11->secondary_velocity).y + local_f8;
        local_120 = pCVar4->x * delta_time;
        (pSVar11->secondary_velocity).z = (pSVar11->secondary_velocity).z + local_f4;
        local_11c = (pSVar11->secondary_velocity).y * delta_time;
        local_118 = delta_time * (pSVar11->secondary_velocity).z;
        (pSVar11->position).x = (pSVar11->position).x + local_120;
        (pSVar11->position).y = (pSVar11->position).y + local_11c;
        (pSVar11->position).z = (pSVar11->position).z + local_118;
        local_1a4 = iVar6;
        local_19c = iVar6;
        local_7c = local_1a0;
        core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420(this_ptr,pSVar11);
      }
      local_58 = local_58 + 4;
      local_44 = local_44 + 1;
    } while (local_44 < (this_ptr->model).vertex_count);
  }
  local_34 = this_ptr->vertices;
  local_50 = 0;
  do {
    iVar6 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      iVar7 = 0;
      do {
        if (local_34[*(int *)(iVar7 + (int)this_ptr->vertex_sort_buffer)].locked == 0) {
          core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420
                    (this_ptr,local_34 + *(int *)(iVar7 + (int)this_ptr->vertex_sort_buffer));
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < (this_ptr->model).vertex_count);
    }
    local_50 = local_50 + 1;
  } while (local_50 < 5);
  iVar6 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pfVar9 = &this_ptr->floor_friction;
    pfVar1 = &this_ptr->body_friction;
    iVar7 = 0;
    do {
      iVar2 = *(int *)(iVar7 + (int)this_ptr->vertex_sort_buffer);
      if (this_ptr->vertices[iVar2].body_collision != 0) {
        pCVar4 = &this_ptr->vertices[iVar2].secondary_velocity;
        pCVar4->x = *pfVar1 * pCVar4->x;
        this_ptr->vertices[iVar2].secondary_velocity.y =
             *pfVar1 * this_ptr->vertices[iVar2].secondary_velocity.y;
        this_ptr->vertices[iVar2].secondary_velocity.z =
             *pfVar1 * this_ptr->vertices[iVar2].secondary_velocity.z;
      }
      if (this_ptr->vertices[iVar2].floor_collision != 0) {
        pCVar4 = &this_ptr->vertices[iVar2].secondary_velocity;
        pCVar4->x = *pfVar9 * pCVar4->x;
        this_ptr->vertices[iVar2].secondary_velocity.y =
             *pfVar9 * this_ptr->vertices[iVar2].secondary_velocity.y;
        this_ptr->vertices[iVar2].secondary_velocity.z =
             *pfVar9 * this_ptr->vertices[iVar2].secondary_velocity.z;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (this_ptr->model).vertex_count);
  }
  iVar6 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pSVar11 = this_ptr->vertices;
    iVar7 = 0;
    do {
      piVar8 = (int *)((int)(this_ptr->model).vertex_list + iVar7);
      iVar6 = iVar6 + 1;
      *piVar8 = (int)ROUND((pSVar11->position).x * 256.0f);
      piVar8[1] = (int)ROUND((pSVar11->position).y * 256.0f);
      piVar8[2] = (int)ROUND((pSVar11->position).z * 256.0f);
      pSVar11 = pSVar11 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar6 < (this_ptr->model).vertex_count);
  }
  return;
}
