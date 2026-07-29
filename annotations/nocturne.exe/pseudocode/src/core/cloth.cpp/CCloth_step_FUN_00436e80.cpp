// Name: core_cloth.cpp_CCloth_step_FUN_00436e80
// Address: 00436e80
// Address Range: [[00436e80, 00437a59]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_step_FUN_00436e80(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_step_FUN_00436e80(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr)

{
  float *pfVar1;
  float *pfVar2;
  SMRGLTextureLod *pSVar3;
  CVector3f *pCVar4;
  float fVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  SClothVertex *vertex;
  int iVar10;
  int *piVar11;
  CCloth *pCVar12;
  int *piVar13;
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
  int *local_74;
  int *local_6c;
  float local_68;
  int local_64;
  float *local_5c;
  int local_58;
  CVector3f *local_54;
  int local_50;
  char *local_4c;
  CCloth *local_48;
  int local_44;
  int local_40;
  float local_3c;
  CMatrix3x4f *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  CVector3f *local_28;
  float *local_24;
  int *local_20;
  int *local_1c;
  float local_18;
  float local_14;
  
  if ((float)9999 <= floor_y) {
    floor_y = -9999.0;
  }
  if (delta_time < (float)0.01) {
    delta_time = 0.01;
  }
  this_ptr->vertices[0x300].secondary_velocity.y = 1.0 / delta_time;
  this_ptr->vertices[0x300].secondary_velocity.z = floor_y - position->y;
  if (model_ptr != (CDeformableModelInstance *)0x0) {
    local_40 = 0;
    if (0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]) {
      local_38 = (model_ptr->bone_transform).bone_world_matrices;
      local_1c = &(this_ptr->model).texture_list[8].textures[2].base.count;
      local_48 = this_ptr;
      do {
        piVar13 = local_1c + (int)local_48->vertices[0x2f3].rest_lengths[2] * 0x47;
        piVar13[2] = 0;
        local_2c = 0;
        piVar13[1] = piVar13[2];
        *piVar13 = piVar13[1];
        if (0 < piVar13[0x37]) {
          pfVar9 = (float *)(piVar13 + 0x44);
          local_28 = (CVector3f *)(piVar13 + 0x3b);
          local_30 = piVar13;
          do {
            pCVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                               (&local_9c,local_28,local_38 + local_30[0x38]);
            local_174 = pCVar4->x * *pfVar9;
            local_170 = pCVar4->y * *pfVar9;
            local_16c = pCVar4->z * *pfVar9;
            pfVar9 = pfVar9 + 1;
            local_28 = local_28 + 1;
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            *piVar13 = (int)((float)*piVar13 + local_174);
            piVar13[1] = (int)((float)piVar13[1] + local_170);
            piVar13[2] = (int)((float)piVar13[2] + local_16c);
          } while (local_2c < piVar13[0x37]);
        }
        local_48 = (CCloth *)((local_48->model).model_filename + 4);
        local_40 = local_40 + 1;
      } while (local_40 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    iVar8 = 0;
    if (0 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y) {
      do {
        core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(this_ptr,iVar8,model_ptr);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y);
    }
  }
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_24 = &this_ptr->vertices[0x2d5].secondary_velocity.z;
    local_20 = &(this_ptr->model).texture_list[8].textures[2].base.count;
    local_84 = this_ptr;
    do {
      pfVar9 = local_24;
      local_64 = iVar8 * 0x11c;
      iVar10 = (local_84->model).texture_list[0xb].textures[2].base.count;
      if (iVar10 != -1) {
        local_168.z = local_24[iVar10 * 0x2b + 0x11];
        local_168.x = 0.0;
        local_168.y = 0.0;
        local_80 = local_168.z;
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           ((CMatrix3x3f *)(local_24 + iVar10 * 0x2b + 0x1e),&local_cc,&local_168);
        local_18c = pfVar9[iVar10 * 0x2b + 0x28] + pCVar4->x;
        local_188 = pfVar9[iVar10 * 0x2b + 0x29] + pCVar4->y;
        local_184 = pfVar9[iVar10 * 0x2b + 0x2a] + pCVar4->z;
        pfVar9 = (float *)((int)local_20 + local_64);
        if (pfVar9 != &local_18c) {
          *pfVar9 = local_18c;
          pfVar9[1] = local_188;
          pfVar9[2] = local_184;
        }
      }
      iVar8 = iVar8 + 1;
      local_84 = (CCloth *)&(local_84->model).env_map_opac_list;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_1d8,euler);
  local_114 = local_1d8.m[0].z;
  local_110 = local_1d8.m[1].z;
  local_10c = local_1d8.m[2].z;
  local_90 = *(float *)(0x01E57284 + 0x15a878);
  local_8c = *(float *)(0x01E57284 + 0x15a87c);
  local_88 = *(float *)(0x01E57284 + 0x15a880);
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
  local_d8.z = local_1e0 * (float)_DAT_0057ae35;
  local_d8.x = *(float *)(0x01E57284 + 0x15a878) * local_d8.z;
  local_d8.y = *(float *)(0x01E57284 + 0x15a87c) * local_d8.z;
  local_d8.z = *(float *)(0x01E57284 + 0x15a880) * local_d8.z;
  piVar13 = this_ptr->vertices[0x300].connected_indices + 6;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                     (&local_1d8,&local_a8,&local_d8);
  local_198 = pCVar4->x + (float)*piVar13;
  local_194 = pCVar4->y + (float)this_ptr->vertices[0x300].connected_indices[7];
  local_190 = pCVar4->z + (float)this_ptr->vertices[0x300].connected_indices[8];
  this_ptr->vertices[0x300].connected_indices[8] = 0;
  piVar11 = &this_ptr->vertices[0x300].connected_count;
  this_ptr->vertices[0x300].connected_indices[7] = this_ptr->vertices[0x300].connected_indices[8];
  *piVar13 = this_ptr->vertices[0x300].connected_indices[7];
  local_150.x = position->x - (float)*piVar11;
  local_150.y = position->y - (float)this_ptr->vertices[0x300].connected_indices[0];
  local_150.z = position->z - (float)this_ptr->vertices[0x300].connected_indices[1];
  if ((CVector3f *)piVar11 != position) {
    *piVar11 = (int)position->x;
    this_ptr->vertices[0x300].connected_indices[0] = (int)position->y;
    this_ptr->vertices[0x300].connected_indices[1] = (int)position->z;
  }
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
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
  pCVar4 = (CVector3f *)(this_ptr->vertices[0x300].connected_indices + 2);
  local_e4 = euler->x - pCVar4->x;
  local_e0 = euler->y - (float)this_ptr->vertices[0x300].connected_indices[3];
  local_dc = euler->z - (float)this_ptr->vertices[0x300].connected_indices[4];
  if (pCVar4 != euler) {
    pCVar4->x = euler->x;
    this_ptr->vertices[0x300].connected_indices[3] = (int)euler->y;
    this_ptr->vertices[0x300].connected_indices[4] = (int)euler->z;
  }
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_e0);
  local_78 = fVar5 * (1.0 / delta_time) * (1.0 / delta_time);
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_6c = &(this_ptr->model).texture_list[8].textures[2].base.count;
    local_4c = (this_ptr->model).texture_list[0xb].textures[1].texture_name + 8;
    pcVar6 = (this_ptr->model).texture_list[8].textures[2].texture_name + 8;
    pCVar12 = this_ptr;
    do {
      *(uint *)(pcVar6 + 8) = 0;
      *(uint *)(pcVar6 + 4) = *(uint *)(pcVar6 + 8);
      *(uint *)pcVar6 = *(uint *)(pcVar6 + 8);
      pSVar3 = (pCVar12->model).texture_list + 0xb;
      pSVar3->textures[0].texture_name[0xc] = '\0';
      pSVar3->textures[0].texture_name[0xd] = '\0';
      pSVar3->textures[0].texture_name[0xe] = '\0';
      pSVar3->textures[0].texture_name[0xf] = '\0';
      piVar13 = local_6c + iVar8 * 0x47;
      (pCVar12->model).texture_list[0xb].textures[1].base.type = 0;
      if (piVar13 != (int *)local_4c) {
        *(int *)(pcVar6 + 0xc0) = *piVar13;
        *(int *)(pcVar6 + 0xc4) = piVar13[1];
        *(int *)(pcVar6 + 200) = piVar13[2];
      }
      pCVar12 = (CCloth *)&(pCVar12->model).env_map_opac_list;
      pcVar6 = pcVar6 + 0x11c;
      iVar8 = iVar8 + 1;
      local_4c = local_4c + 0x11c;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  local_138.y = -this_ptr->vertices[0x2d4].bone_weights[0];
  local_138.x = 0.0;
  local_138.z = 0.0;
  local_14 = local_138.y;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
            (&local_1d8,&local_144,&local_138);
  local_3c = this_ptr->vertices[0x2d4].bone_weights[0] / this_ptr->vertices[0x2d4].bone_weights[1];
  local_44 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    local_5c = this_ptr->vertices[0x2d4].bone_weights + 2;
    local_68 = local_78 * local_3c;
    local_54 = &this_ptr->vertices[0x2d5].force;
    local_58 = 0;
    local_74 = &(this_ptr->model).texture_list[8].textures[2].base.count;
    do {
      vertex = (SClothVertex *)
               (local_74 +
               *(int *)((int)this_ptr->vertices[0x300].secondary_velocity.x + local_58) * 0x47);
      iVar8 = vertex->locked;
      if (iVar8 == 0) {
        (vertex->secondary_velocity).x = *local_5c * (vertex->secondary_velocity).x;
        (vertex->secondary_velocity).y = *local_5c * (vertex->secondary_velocity).y;
        (vertex->secondary_velocity).z = *local_5c * (vertex->secondary_velocity).z;
        local_c0 = local_108 * local_3c;
        local_bc = local_104 * local_3c;
        local_b8 = local_100 * local_3c;
        local_1b0 = local_c0 * local_54->x;
        local_1ac = local_bc * local_54->x;
        local_1a8 = local_b8 * local_54->x;
        pCVar4 = &vertex->force;
        pCVar4->x = pCVar4->x - local_1b0;
        (vertex->force).y = (vertex->force).y - local_1ac;
        (vertex->force).z = (vertex->force).z - local_1a8;
        pCVar4->x = pCVar4->x + local_144.x;
        (vertex->force).y = (vertex->force).y + local_144.y;
        (vertex->force).z = (vertex->force).z + local_144.z;
        local_1a0 = local_68 * this_ptr->vertices[0x2d5].force.y;
        local_124 = 1.0 / local_3c;
        local_f0 = (vertex->position).y * 0.0 - (vertex->position).z * local_1a0;
        local_ec = (vertex->position).z * 0.0 - (vertex->position).x * 0.0;
        local_e8 = (vertex->position).x * local_1a0 - (vertex->position).y * 0.0;
        pCVar4->x = pCVar4->x + local_f0;
        (vertex->force).y = (vertex->force).y + local_ec;
        local_12c = pCVar4->x * local_124;
        (vertex->force).z = (vertex->force).z + local_e8;
        local_128 = (vertex->force).y * local_124;
        local_124 = local_124 * (vertex->force).z;
        if (&vertex->velocity != (CVector3f *)&local_12c) {
          (vertex->velocity).x = local_12c;
          (vertex->velocity).y = local_128;
          (vertex->velocity).z = local_124;
        }
        local_fc = (vertex->velocity).x * delta_time;
        local_f8 = (vertex->velocity).y * delta_time;
        local_f4 = (vertex->velocity).z * delta_time;
        pCVar4 = &vertex->secondary_velocity;
        pCVar4->x = pCVar4->x + local_fc;
        (vertex->secondary_velocity).y = (vertex->secondary_velocity).y + local_f8;
        local_120 = pCVar4->x * delta_time;
        (vertex->secondary_velocity).z = (vertex->secondary_velocity).z + local_f4;
        local_11c = (vertex->secondary_velocity).y * delta_time;
        local_118 = delta_time * (vertex->secondary_velocity).z;
        (vertex->position).x = (vertex->position).x + local_120;
        (vertex->position).y = (vertex->position).y + local_11c;
        (vertex->position).z = (vertex->position).z + local_118;
        local_1a4 = iVar8;
        local_19c = iVar8;
        local_7c = local_1a0;
        core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0(this_ptr,vertex);
      }
      local_58 = local_58 + 4;
      local_44 = local_44 + 1;
    } while (local_44 < (this_ptr->model).vertex_count);
  }
  local_34 = &(this_ptr->model).texture_list[8].textures[2].base.count;
  local_50 = 0;
  do {
    iVar8 = 0;
    if (0 < (this_ptr->model).vertex_count) {
      iVar10 = 0;
      do {
        if (((SClothVertex *)
            (local_34 +
            *(int *)(iVar10 + (int)this_ptr->vertices[0x300].secondary_velocity.x) * 0x47))->locked
            == 0) {
          core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0
                    (this_ptr,(SClothVertex *)
                              (local_34 +
                              *(int *)(iVar10 + (int)this_ptr->vertices[0x300].secondary_velocity.x)
                              * 0x47));
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar8 < (this_ptr->model).vertex_count);
    }
    local_50 = local_50 + 1;
  } while (local_50 < 5);
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    pfVar9 = &this_ptr->vertices[0x2d5].position.z;
    pfVar2 = &this_ptr->vertices[0x2d5].position.y;
    iVar10 = 0;
    do {
      iVar7 = *(int *)(iVar10 + (int)this_ptr->vertices[0x300].secondary_velocity.x) * 0x11c;
      if (*(int *)((int)(this_ptr->model).texture_list + iVar7 + 0x32c) != 0) {
        pfVar1 = (float *)((int)(this_ptr->model).texture_list + iVar7 + 0x298);
        *pfVar1 = *pfVar2 * *pfVar1;
        *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x29c) =
             *pfVar2 * *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x29c);
        *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x2a0) =
             *pfVar2 * *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x2a0);
      }
      if (*(int *)((int)(this_ptr->model).texture_list + iVar7 + 0x330) != 0) {
        pfVar1 = (float *)((int)(this_ptr->model).texture_list + iVar7 + 0x298);
        *pfVar1 = *pfVar9 * *pfVar1;
        *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x29c) =
             *pfVar9 * *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x29c);
        *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x2a0) =
             *pfVar9 * *(float *)((int)(this_ptr->model).texture_list + iVar7 + 0x2a0);
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  iVar8 = 0;
  if (0 < (this_ptr->model).vertex_count) {
    piVar13 = &(this_ptr->model).texture_list[8].textures[2].base.count;
    iVar10 = 0;
    do {
      piVar11 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar10);
      iVar8 = iVar8 + 1;
      *piVar11 = (int)ROUND((float)*piVar13 * _DAT_0059b360);
      piVar11[1] = (int)ROUND((float)piVar13[1] * _DAT_0059b360);
      piVar11[2] = (int)ROUND((float)piVar13[2] * _DAT_0059b360);
      piVar13 = piVar13 + 0x47;
      iVar10 = iVar10 + 0xc;
    } while (iVar8 < (this_ptr->model).vertex_count);
  }
  return;
}
