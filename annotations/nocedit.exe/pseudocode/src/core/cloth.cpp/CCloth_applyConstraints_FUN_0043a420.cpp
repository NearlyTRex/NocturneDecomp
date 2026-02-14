// Name: core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420
// Address: 0043a420
// Address Range: [[0043a420, 0043ab73]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420(CCloth *this_ptr,SClothVertex *vertex)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_0043a420(CCloth *this_ptr,SClothVertex *vertex)

{
  float fVar1;
  float fVar2;
  SClothBone *pSVar3;
  SClothVertex *pSVar4;
  CVector3f *pCVar5;
  int iVar6;
  float *pfVar7;
  SClothVertex *pSVar8;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  CVector3f local_10c;
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
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  byte *local_40;
  SClothVertex *local_3c;
  SClothBone *local_38;
  float *local_34;
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  CVector3f *local_14;
  
  if ((vertex->position).y < this_ptr->floor_y) {
    (vertex->secondary_velocity).y = 0.0;
    (vertex->position).y = this_ptr->floor_y;
    vertex->floor_collision = 1;
  }
  iVar6 = 0;
  if (0 < vertex->connected_count) {
    local_34 = &this_ptr->spring;
    pCVar5 = &vertex->secondary_velocity;
    pfVar7 = &this_ptr->inv_delta_time;
    local_3c = this_ptr->vertices;
    pSVar8 = vertex;
    do {
      pSVar4 = local_3c + pSVar8->connected_indices[0];
      local_130 = (vertex->position).x - (pSVar4->position).x;
      local_12c = (vertex->position).y - (pSVar4->position).y;
      local_128 = (vertex->position).z - (pSVar4->position).z;
      if (&local_7c != &local_130) {
        local_7c = local_130;
        local_78 = local_12c;
        local_74 = local_128;
      }
      local_5c = local_74 * local_74 + local_7c * local_7c + local_78 * local_78;
      local_24 = (float)(((int)local_5c >> 1) + INT_02d7a7b8);
      local_1c = pSVar8->rest_lengths[0];
      if (local_1c < local_24) {
        local_2c = local_24 - local_1c;
        local_e8 = local_7c * local_2c;
        local_e4 = local_78 * local_2c;
        local_e0 = local_74 * local_2c;
        local_d4 = 1.0 / local_24;
        local_dc = local_e8 * local_d4;
        local_d8 = local_e4 * local_d4;
        local_d4 = local_e0 * local_d4;
        (vertex->position).x = (vertex->position).x - local_dc;
        (vertex->position).y = (vertex->position).y - local_d8;
        (vertex->position).z = (vertex->position).z - local_d4;
        local_100 = local_dc * *pfVar7;
        local_fc = local_d8 * *pfVar7;
        local_f8 = local_d4 * *pfVar7;
        pCVar5->x = pCVar5->x - local_100;
        (vertex->secondary_velocity).y = (vertex->secondary_velocity).y - local_fc;
        (vertex->secondary_velocity).z = (vertex->secondary_velocity).z - local_f8;
      }
      if (local_24 < local_1c) {
        local_28 = local_1c - local_24;
        local_118 = local_7c * local_28;
        local_114 = local_78 * local_28;
        local_110 = local_74 * local_28;
        local_8c = 1.0 / local_24;
        local_94 = local_118 * local_8c;
        local_90 = local_114 * local_8c;
        local_8c = local_110 * local_8c;
        local_f4 = local_94 * *local_34;
        local_f0 = local_90 * *local_34;
        local_ec = local_8c * *local_34;
        (vertex->position).x = (vertex->position).x + local_f4;
        (vertex->position).y = (vertex->position).y + local_f0;
        (vertex->position).z = (vertex->position).z + local_ec;
        local_c4 = local_f4 * *pfVar7;
        local_c0 = local_f0 * *pfVar7;
        local_bc = local_ec * *pfVar7;
        pCVar5->x = pCVar5->x + local_c4;
        (vertex->secondary_velocity).y = (vertex->secondary_velocity).y + local_c0;
        (vertex->secondary_velocity).z = (vertex->secondary_velocity).z + local_bc;
      }
      iVar6 = iVar6 + 1;
      pSVar8 = (SClothVertex *)&(pSVar8->position).y;
      local_40 = (byte *)&local_130;
      local_18 = local_24;
    } while (iVar6 < vertex->connected_count);
  }
  local_20 = 0;
  if (0 < this_ptr->collide_bone_count) {
    local_30 = &this_ptr->inv_delta_time;
    local_38 = this_ptr->collide_bones;
    local_14 = &this_ptr->collide_bones[0].position_offset;
    do {
      iVar6 = local_20;
      pSVar3 = local_38;
      local_70 = (vertex->position).x - local_14->x;
      local_6c = (vertex->position).y - local_14->y;
      local_68 = (vertex->position).z - local_14->z;
      if (&local_b8 != &local_70) {
        local_b8 = local_70;
        local_b4 = local_6c;
        local_b0 = local_68;
      }
      local_a4 = local_b0 * local_38[local_20].local_matrix.m[2].z +
                 local_b8 * local_38[local_20].local_matrix.m[0].z +
                 local_b4 * local_38[local_20].local_matrix.m[1].z;
      if ((0.0 <= local_a4) && (local_a4 <= local_38[local_20].child_distance)) {
        local_ac = local_b0 * local_38[local_20].local_matrix.m[2].x +
                   local_b8 * local_38[local_20].local_matrix.m[0].x +
                   local_b4 * local_38[local_20].local_matrix.m[1].x;
        local_a8 = local_b0 * local_38[local_20].local_matrix.m[2].y +
                   local_b8 * local_38[local_20].local_matrix.m[0].y +
                   local_b4 * local_38[local_20].local_matrix.m[1].y;
        fVar1 = local_ac * local_38[local_20].inv_radius1;
        fVar2 = local_a8 * local_38[local_20].inv_radius2;
        local_58 = fVar2 * fVar2 + fVar1 * fVar1;
        local_54 = (float)(((int)local_58 >> 1) + INT_02d7a7b8);
        if (local_54 < 1.0) {
          local_48 = local_ac * local_ac + local_a8 * local_a8;
          local_44 = (float)(g_LightAttenuationMax - ((int)local_48 >> 1));
          local_88.x = local_38[local_20].radius1 * (float)1.05 * local_ac * local_44;
          local_88.y = (float)1.05 * local_38[local_20].radius2 * local_a8 * local_44;
          local_88.z = local_a4;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&local_38[local_20].local_matrix,&local_10c,&local_88);
          local_a0.x = pSVar3[iVar6].position_offset.x + pCVar5->x;
          local_a0.y = pSVar3[iVar6].position_offset.y + pCVar5->y;
          local_a0.z = pSVar3[iVar6].position_offset.z + pCVar5->z;
          if (&local_88 != &local_a0) {
            local_88.x = local_a0.x;
            local_88.y = local_a0.y;
            local_88.z = local_a0.z;
          }
          local_d0 = local_88.x - (vertex->position).x;
          local_cc = local_88.y - (vertex->position).y;
          local_c8 = local_88.z - (vertex->position).z;
          if (vertex != (SClothVertex *)&local_88) {
            (vertex->position).x = local_88.x;
            (vertex->position).y = local_88.y;
            (vertex->position).z = local_88.z;
          }
          local_124 = local_d0 * *local_30;
          local_120 = local_cc * *local_30;
          local_11c = local_c8 * *local_30;
          (vertex->secondary_velocity).x = (vertex->secondary_velocity).x + local_124;
          (vertex->secondary_velocity).y = (vertex->secondary_velocity).y + local_120;
          (vertex->secondary_velocity).z = (vertex->secondary_velocity).z + local_11c;
          vertex->body_collision = 1;
        }
      }
      local_14 = (CVector3f *)((int)(local_14 + 0xe) + 4);
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->collide_bone_count);
  }
  return;
}
