// Name: core_cloth.cpp_CCloth_applyConstraints_FUN_0043d9b0
// Address: 0043d9b0
// Address Range: [[0043d9b0, 0043e261]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_0043d9b0(CCloth *this_ptr,SClothVertex *vertex)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_0043d9b0(CCloth *this_ptr,SClothVertex *vertex)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  SClothVertex *pSVar4;
  float *pfVar5;
  byte bVar6;
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
  SClothVertex local_1b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  float local_68;
  float local_64;
  float *local_58;
  float *local_54;
  float local_4c;
  float local_48;
  SClothVertex *local_44;
  SClothBone *local_40;
  int local_3c;
  int local_38;
  SClothVertex *local_34;
  float local_30;
  float local_2c;
  CVector3f *local_28;
  CVector3f *local_24;
  SClothBone *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  if ((vertex->position).y < this_ptr->floor_y) {
    (vertex->secondary_velocity).y = 0.0;
    (vertex->position).y = this_ptr->floor_y;
    vertex->floor_collision = 1;
  }
  local_3c = 0;
  if (0 < vertex->connected_count) {
    local_58 = &this_ptr->body_friction;
    pCVar1 = &vertex->secondary_velocity;
    pfVar5 = &this_ptr->inv_delta_time;
    local_34 = vertex;
    local_44 = this_ptr->vertices;
    do {
      pSVar4 = this_ptr->vertices + local_34->connected_indices[0];
      local_1b0.bone_positions[2].y = (vertex->position).x - (pSVar4->position).x;
      local_1b0.bone_positions[2].z = (vertex->position).y - (pSVar4->position).y;
      local_1b0.bone_weights[0] = (vertex->position).z - (pSVar4->position).z;
      local_1b0.connected_count = (int)local_1b0.bone_positions[2].y;
      local_1b0.connected_indices[0] = (int)local_1b0.bone_positions[2].z;
      local_1b0.connected_indices[1] = (int)local_1b0.bone_weights[0];
      if (&local_1b0.velocity != (CVector3f *)&local_1b0.connected_count) {
        local_1b0.velocity.x = local_1b0.bone_positions[2].y;
        local_1b0.velocity.y = local_1b0.bone_positions[2].z;
        local_1b0.velocity.z = local_1b0.bone_weights[0];
      }
      local_48 = local_1b0.velocity.z * local_1b0.velocity.z +
                 local_1b0.velocity.x * local_1b0.velocity.x +
                 local_1b0.velocity.y * local_1b0.velocity.y;
      local_30 = (float)(((int)local_48 >> 1) + _DAT_01d1a0a4);
      local_4c = local_30;
      local_2c = local_34->rest_lengths[0];
      if (local_2c < local_30) {
        local_1c = local_30 - local_2c;
        local_1b0.rest_lengths[0] = local_1b0.velocity.x * local_1c;
        local_1b0.rest_lengths[1] = local_1b0.velocity.y * local_1c;
        local_1b0.rest_lengths[2] = local_1b0.velocity.z * local_1c;
        local_1b0.rest_lengths[0xf] = local_1b0.rest_lengths[0];
        local_1b0.body_collision = (int)local_1b0.rest_lengths[1];
        local_1b0.floor_collision = (int)local_1b0.rest_lengths[2];
        local_1b0.rest_lengths[0xb] = 1.0 / local_30;
        local_1b0.rest_lengths[9] = local_1b0.rest_lengths[0] * local_1b0.rest_lengths[0xb];
        local_1b0.rest_lengths[10] = local_1b0.rest_lengths[1] * local_1b0.rest_lengths[0xb];
        local_1b0.rest_lengths[0xb] = local_1b0.rest_lengths[2] * local_1b0.rest_lengths[0xb];
        local_90 = local_1b0.rest_lengths[9];
        local_8c = local_1b0.rest_lengths[10];
        local_88 = local_1b0.rest_lengths[0xb];
        (vertex->position).x = (vertex->position).x - local_1b0.rest_lengths[9];
        (vertex->position).y = (vertex->position).y - local_1b0.rest_lengths[10];
        (vertex->position).z = (vertex->position).z - local_1b0.rest_lengths[0xb];
        local_1d4 = local_1b0.rest_lengths[9] * *pfVar5;
        local_1d0 = local_1b0.rest_lengths[10] * *pfVar5;
        local_1cc = local_1b0.rest_lengths[0xb] * *pfVar5;
        local_1c8 = local_1d4;
        local_1c4 = local_1d0;
        local_1c0 = local_1cc;
        pCVar1->x = pCVar1->x - local_1d4;
        (vertex->secondary_velocity).y = (vertex->secondary_velocity).y - local_1d0;
        (vertex->secondary_velocity).z = (vertex->secondary_velocity).z - local_1cc;
      }
      if (local_30 < local_2c) {
        local_14 = local_2c - local_30;
        local_1bc = local_1b0.velocity.x * local_14;
        local_1b8 = local_1b0.velocity.y * local_14;
        local_1b4 = local_1b0.velocity.z * local_14;
        local_1b0.connected_indices[0xe] = (int)local_1bc;
        local_1b0.connected_indices[0xf] = (int)local_1b8;
        local_1b0.locked = (int)local_1b4;
        local_1b0.prev_position.z = 1.0 / local_30;
        local_1b0.prev_position.x = local_1bc * local_1b0.prev_position.z;
        local_1b0.prev_position.y = local_1b8 * local_1b0.prev_position.z;
        local_1b0.prev_position.z = local_1b4 * local_1b0.prev_position.z;
        local_1b0.force.x = local_1b0.prev_position.x;
        local_1b0.force.y = local_1b0.prev_position.y;
        local_1b0.force.z = local_1b0.prev_position.z;
        local_1b0.connected_indices[8] = (int)(local_1b0.prev_position.x * *local_58);
        local_1b0.connected_indices[9] = (int)(local_1b0.prev_position.y * *local_58);
        local_1b0.connected_indices[10] = (int)(local_1b0.prev_position.z * *local_58);
        local_1b0.bone_weights[1] = (float)local_1b0.connected_indices[8];
        local_1b0.bone_weights[2] = (float)local_1b0.connected_indices[9];
        local_94 = (float)local_1b0.connected_indices[10];
        (vertex->position).x = (vertex->position).x + (float)local_1b0.connected_indices[8];
        (vertex->position).y = (vertex->position).y + (float)local_1b0.connected_indices[9];
        (vertex->position).z = (vertex->position).z + (float)local_1b0.connected_indices[10];
        local_1b0.bone_index[1] = (int)((float)local_1b0.connected_indices[8] * *pfVar5);
        local_1b0.bone_index[2] = (int)((float)local_1b0.connected_indices[9] * *pfVar5);
        local_1b0.bone_positions[0].x = (float)local_1b0.connected_indices[10] * *pfVar5;
        local_1b0.rest_lengths[0xc] = (float)local_1b0.bone_index[1];
        local_1b0.rest_lengths[0xd] = (float)local_1b0.bone_index[2];
        local_1b0.rest_lengths[0xe] = local_1b0.bone_positions[0].x;
        pCVar1->x = pCVar1->x + (float)local_1b0.bone_index[1];
        (vertex->secondary_velocity).y =
             (vertex->secondary_velocity).y + (float)local_1b0.bone_index[2];
        (vertex->secondary_velocity).z =
             (vertex->secondary_velocity).z + local_1b0.bone_positions[0].x;
      }
      local_3c = local_3c + 1;
      local_34 = (SClothVertex *)&(local_34->position).y;
    } while (local_3c < vertex->connected_count);
  }
  local_38 = 0;
  if (0 < this_ptr->collide_bone_count) {
    local_54 = &this_ptr->inv_delta_time;
    local_24 = &vertex->secondary_velocity;
    local_40 = this_ptr->collide_bones;
    local_28 = &this_ptr->collide_bones[0].position_offset;
    do {
      local_20 = local_40 + local_38;
      local_1b0.rest_lengths[6] = (vertex->position).x - local_28->x;
      local_1b0.rest_lengths[7] = (vertex->position).y - local_28->y;
      local_1b0.rest_lengths[8] = (vertex->position).z - local_28->z;
      local_1b0.offset_pos.x = local_1b0.rest_lengths[6];
      *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0xc4) =
           *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0x94);
      *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 200) =
           *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x98);
      if ((CVector3f *)((int)(local_1b0.bone_positions + 1) + 4U) != &local_1b0.offset_pos) {
        local_1b0.bone_positions[1].y = local_1b0.offset_pos.x;
        local_1b0.bone_positions[1].z = local_1b0.offset_pos.y;
        local_1b0.bone_positions[2].x = local_1b0.offset_pos.z;
      }
      local_1b0.position.z =
           local_1b0.bone_positions[2].x * (local_20->local_matrix).m[2].z +
           local_1b0.bone_positions[1].y * (local_20->local_matrix).m[0].z +
           local_1b0.bone_positions[1].z * (local_20->local_matrix).m[1].z;
      local_1d8 = local_1b0.position.z;
      if ((0.0 <= local_1b0.position.z) && (local_1b0.position.z <= local_20->child_distance)) {
        local_1e0 = local_1b0.bone_positions[2].x * (local_20->local_matrix).m[2].x +
                    local_1b0.bone_positions[1].y * (local_20->local_matrix).m[0].x +
                    local_1b0.bone_positions[1].z * (local_20->local_matrix).m[1].x;
        fVar2 = local_1e0 * local_20->inv_radius1;
        local_1dc = local_1b0.bone_positions[2].x * (local_20->local_matrix).m[2].y +
                    local_1b0.bone_positions[1].y * (local_20->local_matrix).m[0].y +
                    local_1b0.bone_positions[1].z * (local_20->local_matrix).m[1].y;
        fVar3 = local_1dc * local_20->inv_radius2;
        local_70 = fVar3 * fVar3 + fVar2 * fVar2;
        local_18 = (float)(((int)local_70 >> 1) + _DAT_01d1a0a4);
        if (local_18 < 1.0) {
          local_68 = local_1e0 * local_1e0 + local_1dc * local_1dc;
          local_64 = (float)(_DAT_01d1a0a8 - ((int)local_68 >> 1));
          local_1b0.position.x = local_20->radius1 * (float)_DAT_005b9120 * local_1e0 * local_64;
          local_1b0.position.y = (float)_DAT_005b9120 * local_20->radius2 * local_1dc * local_64;
          core_dirmat_cpp_FUN_0045b800(&local_20->local_matrix,&local_1b0);
          local_84 = local_1b0.bone_positions[0].y;
          local_80[(uint)bVar6 * -2] = *(float *)((int)&local_1b0 + (uint)bVar6 * -8 + 0xf4);
          local_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               *(float *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xf8);
          local_1b0.connected_indices[2] = (int)((local_20->position_offset).x + local_84);
          local_1b0.connected_indices[3] = (int)((local_20->position_offset).y + local_80[0]);
          local_1b0.connected_indices[4] = (int)((local_20->position_offset).z + local_80[1]);
          local_1b0.secondary_velocity.x = (float)local_1b0.connected_indices[2];
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0x28) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0x40);
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x2c) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x44);
          if (&local_1b0 != (SClothVertex *)&local_1b0.secondary_velocity) {
            local_1b0.position.x = local_1b0.secondary_velocity.x;
            local_1b0.position.y = local_1b0.secondary_velocity.y;
            local_1b0.position.z = local_1b0.secondary_velocity.z;
          }
          local_1b0.rest_lengths[3] = local_1b0.position.x - (vertex->position).x;
          local_1b0.rest_lengths[4] = local_1b0.position.y - (vertex->position).y;
          local_1b0.rest_lengths[5] = local_1b0.position.z - (vertex->position).z;
          local_1b0.collide_bone_index = (int)local_1b0.rest_lengths[3];
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0xdc) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0x88);
          pCVar1 = local_24;
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xe0) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x8c);
          if (vertex != &local_1b0) {
            (vertex->position).x = local_1b0.position.x;
            (vertex->position).y = local_1b0.position.y;
            (vertex->position).z = local_1b0.position.z;
          }
          local_1b0.connected_indices[0xb] = (int)((float)local_1b0.collide_bone_index * *local_54);
          local_1b0.connected_indices[0xc] =
               (int)((float)local_1b0.bone_influence_count * *local_54);
          local_1b0.connected_indices[0xd] = (int)((float)local_1b0.bone_index[0] * *local_54);
          local_1b0.connected_indices[5] = (int)((float)local_1b0.collide_bone_index * *local_54);
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 0x4c) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + 100);
          *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x50) =
               *(uint *)((int)&local_1b0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0x68);
          pCVar1->x = pCVar1->x + (float)local_1b0.connected_indices[5];
          pCVar1->y = pCVar1->y + (float)local_1b0.connected_indices[6];
          pCVar1->z = pCVar1->z + (float)local_1b0.connected_indices[7];
          vertex->body_collision = 1;
        }
      }
      local_38 = local_38 + 1;
      local_28 = (CVector3f *)((int)(local_28 + 0xe) + 4);
    } while (local_38 < this_ptr->collide_bone_count);
  }
  return;
}
