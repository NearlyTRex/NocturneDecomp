// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
// Address Range: [[0059cec0, 0059d454]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices,int particle_lifetime)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices,int particle_lifetime)

{
  ushort *puVar1;
  ushort uVar2;
  CVector3f *pCVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar9;
  CMatrix3x3f local_e0;
  char local_b8;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  STextureSet *local_64;
  STextureSet *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  STextureSet *local_2c;
  STextureSet *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_e0,orientation_vector);
  if ((g_ShatterVertexArrayInitialized & 1) == 0) {
    g_ShatterVertexArrayInitialized = g_ShatterVertexArrayInitialized | 1;
    __arrinit(g_ShatterVertexArray,3000,&g_CVectorTypeInfo);
  }
  if (3000 < this_ptr->vertex_count[lod_index]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x748;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::shatter - too many vertices!");
  }
  pCVar7 = g_ShatterVertexArray;
  local_5c = (int)this_ptr->lod_info + lod_index * 4 + -4;
  iVar6 = 0;
  if (0 < *(int *)(local_5c + 0x2c)) {
    do {
      pCVar7->x = (float)skinned_vertices->x * 0.00390625f;
      pCVar7->y = (float)skinned_vertices->y * 0.00390625f;
      pCVar7->z = (float)skinned_vertices->z * 0.00390625f;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_e0,&local_70,pCVar7);
      local_7c.x = center_position->x + pCVar3->x;
      local_7c.y = center_position->y + pCVar3->y;
      local_7c.z = center_position->z + pCVar3->z;
      if (pCVar7 != &local_7c) {
        pCVar7->x = local_7c.x;
        pCVar7->y = local_7c.y;
        pCVar7->z = local_7c.z;
      }
      pCVar7 = pCVar7 + 1;
      iVar6 = iVar6 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar6 < *(int *)(local_5c + 0x2c));
  }
  __arrinit(&local_b8,3,&g_CVectorTypeInfo);
  local_24 = 0;
  local_44 = 0;
  if (0 < this_ptr->num_parts) {
    local_38 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_60 = this_ptr->texture_sets;
    local_54 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_4c = (byte *)part_visibility_flags;
    local_58 = texture_set_indices;
    local_34 = local_38;
    do {
      local_40 = *(int *)(local_54 + 0x7164) + local_24;
      local_2c = local_60 + *local_58;
      if (((*local_4c & 1) != 0) && (local_24 < local_40)) {
        iVar8 = local_24 * 0x12;
        iVar6 = local_24 * 4;
        local_20 = local_40 * 4;
        do {
          puVar4 = (ushort *)(*(int *)(local_38 + 0x7c) + iVar8);
          pCVar7 = (CVector3f *)&local_b8;
          iVar9 = 0;
          do {
            uVar2 = *puVar4;
            if (pCVar7 != g_ShatterVertexArray + uVar2) {
              pCVar7->x = g_ShatterVertexArray[uVar2].x;
              pCVar7->y = g_ShatterVertexArray[uVar2].y;
              pCVar7->z = g_ShatterVertexArray[uVar2].z;
            }
            pCVar7 = pCVar7 + 1;
            *(uint *)((int)&local_94.x + iVar9) = (uint)puVar4[3];
            iVar5 = iVar9 + 4;
            puVar1 = puVar4 + 6;
            puVar4 = puVar4 + 1;
            *(uint *)((int)&local_88.x + iVar9) = (uint)*puVar1;
            iVar9 = iVar5;
          } while (iVar5 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                    (g_CFireEffectPtr,(STriangleVertices *)&local_b8,&local_94,&local_88,
                     local_2c->textures[*(int *)(iVar6 + *(int *)(local_34 + 0x90))].textures,
                     local_1c);
          iVar6 = iVar6 + 4;
          iVar8 = iVar8 + 0x12;
        } while (iVar6 < local_20);
      }
      local_4c = local_4c + 4;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_58 = local_58 + 1;
      local_24 = local_40;
    } while (local_44 < this_ptr->num_parts);
  }
  local_3c = 0;
  if (0 < this_ptr->num_parts) {
    local_30 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_64 = this_ptr->texture_sets;
    local_50 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_48 = (byte *)part_visibility_flags;
    local_18 = local_30;
    do {
      iVar6 = *(int *)(local_50 + 0x7178) + local_24;
      if (((*local_48 & 1) != 0) &&
         (local_28 = local_64 + texture_set_indices[local_3c], local_24 < iVar6)) {
        iVar9 = local_24 * 0x12;
        local_14 = local_24 << 2;
        iVar8 = local_24;
        local_24 = iVar6;
        do {
          puVar4 = (ushort *)(*(int *)(local_18 + 0x7c) + iVar9);
          if ((*(byte *)(part_visibility_flags +
                        *(int *)(*(int *)(local_18 + 0xa4) + (iVar8 - *(int *)(local_18 + 0x54)) * 4
                                )) & 1) == 0) {
            pCVar7 = (CVector3f *)&local_b8;
            iVar6 = 0;
            do {
              uVar2 = *puVar4;
              if (pCVar7 != g_ShatterVertexArray + uVar2) {
                pCVar7->x = g_ShatterVertexArray[uVar2].x;
                pCVar7->y = g_ShatterVertexArray[uVar2].y;
                pCVar7->z = g_ShatterVertexArray[uVar2].z;
              }
              *(uint *)((int)&local_94.x + iVar6) = (uint)puVar4[3] << 8;
              pCVar7 = pCVar7 + 1;
              puVar1 = puVar4 + 6;
              iVar5 = iVar6 + 4;
              puVar4 = puVar4 + 1;
              *(uint *)((int)&local_88.x + iVar6) = (uint)*puVar1 << 8;
              iVar6 = iVar5;
            } while (iVar5 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                      (g_CFireEffectPtr,(STriangleVertices *)&local_b8,&local_94,&local_88,
                       local_28->textures[*(int *)(*(int *)(local_30 + 0x90) + local_14)].textures,
                       local_1c);
          }
          iVar9 = iVar9 + 0x12;
          local_14 = local_14 + 4;
          iVar8 = iVar8 + 1;
          iVar6 = local_24;
        } while (iVar8 < local_24);
      }
      local_24 = iVar6;
      local_50 = local_50 + 0x60;
      local_48 = local_48 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->num_parts);
  }
  return;
}
