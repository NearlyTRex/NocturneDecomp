// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
// MANUAL RECONSTRUCTION
// Address Range: [[0059cec0, 0059d454]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0(CDeformableModel *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int lod_index,CVector3i *skinned_vertices,int *part_visibility_flags,int *texture_set_indices)

{
  ushort uVar1;
  int iVar2;
  CVector3f *pCVar3;
  int iVar3;
  CVector3f *pCVar4;
  ushort *puVar5;
  ushort *puVar4;
  int iVar6;
  CVector3f *pCVar7;
  int iVar11;
  CMatrix3x3f local_e0;
  STriangleVertices local_b8;
  CVector3i local_94;
  CVector3i local_88;
  CVector3f local_7c;
  CVector3f local_70;
  int *local_58;
  byte *local_4c;
  byte *local_48;
  int local_44;
  int local_3c;
  ushort uVar2;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_e0,orientation_vector);
  if ((g_ShatterVertexArrayInitialized & 1) == 0) {
    g_ShatterVertexArrayInitialized = g_ShatterVertexArrayInitialized | 1;
    __arrinit(g_ShatterVertexArray,3000,&g_CVectorTypeInfo);
  }
  if (3000 < this_ptr->vertex_count[lod_index]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 1864;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::shatter - too many vertices!");
  }
  pCVar7 = g_ShatterVertexArray;
  iVar6 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      pCVar7->x = (float)skinned_vertices->x * 0.00390625f;
      pCVar7->y = (float)skinned_vertices->y * 0.00390625f;
      pCVar7->z = (float)skinned_vertices->z * 0.00390625f;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_e0,&local_70,pCVar7);
      local_7c.x = center_position->x + pCVar3->x;
      local_7c.y = center_position->y + pCVar3->y;
      local_7c.z = center_position->z + pCVar3->z;
      if (pCVar7 != &local_7c) {
        *pCVar7 = local_7c;
      }
      pCVar7 = pCVar7 + 1;
      iVar6 = iVar6 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar6 < this_ptr->vertex_count[lod_index]);
  }
  __arrinit(&local_b8,3,&g_CVectorTypeInfo);
  iVar3 = 0;
  local_44 = 0;
  if (0 < this_ptr->num_parts) {
    local_4c = (byte *)part_visibility_flags;
    local_58 = texture_set_indices;
    iVar11 = iVar3;
    do {
      iVar3 = this_ptr->parts[local_44].tri_counts[lod_index] + iVar11;
      iVar2 = *local_58;
      if (((*local_4c & 1) != 0) && (iVar11 < iVar3)) {
        do {
          puVar5 = &this_ptr->tri_data_ptr[lod_index][iVar11].vertex_indices.vertex_index_0;
          pCVar4 = local_b8.vertices;
          uVar2 = puVar5[0];
          if (pCVar4 != g_ShatterVertexArray + uVar2) {
            *pCVar4 = g_ShatterVertexArray[uVar2];
          }
          local_94.x = (int)puVar5[3];
          local_88.x = (int)puVar5[6];
          uVar2 = puVar5[1];
          if (pCVar4 + 1 != g_ShatterVertexArray + uVar2) {
            pCVar4[1] = g_ShatterVertexArray[uVar2];
          }
          local_94.y = (int)puVar5[4];
          local_88.y = (int)puVar5[7];
          uVar2 = puVar5[2];
          if (pCVar4 + 2 != g_ShatterVertexArray + uVar2) {
            pCVar4[2] = g_ShatterVertexArray[uVar2];
          }
          local_94.z = (int)puVar5[5];
          local_88.z = (int)puVar5[8];
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                    (g_CFireEffectPtr,&local_b8,&local_94,&local_88,
                     this_ptr->texture_sets[iVar2].textures
                     [this_ptr->index_data_ptr[lod_index][iVar11]].textures,0xffff);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar3);
      }
      local_4c = local_4c + 4;
      local_44 = local_44 + 1;
      local_58 = local_58 + 1;
      iVar11 = iVar3;
    } while (local_44 < this_ptr->num_parts);
  }
  local_3c = 0;
  if (0 < this_ptr->num_parts) {
    local_48 = (byte *)part_visibility_flags;
    do {
      iVar11 = this_ptr->parts[local_3c].cap_tri_counts[lod_index] + iVar3;
      if (((*local_48 & 1) != 0) && (iVar2 = texture_set_indices[local_3c], iVar3 < iVar11)) {
        do {
          puVar4 = &this_ptr->tri_data_ptr[lod_index][iVar3].vertex_indices.vertex_index_0;
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index][iVar3 - this_ptr->tri_count[lod_index]])
              & 1) == 0) {
            pCVar4 = local_b8.vertices;
            uVar1 = puVar4[0];
            if (pCVar4 != g_ShatterVertexArray + uVar1) {
              *pCVar4 = g_ShatterVertexArray[uVar1];
            }
            local_94.x = (int)puVar4[3] << 8;
            local_88.x = (int)puVar4[6] << 8;
            uVar1 = puVar4[1];
            if (pCVar4 + 1 != g_ShatterVertexArray + uVar1) {
              pCVar4[1] = g_ShatterVertexArray[uVar1];
            }
            local_94.y = (int)puVar4[4] << 8;
            local_88.y = (int)puVar4[7] << 8;
            uVar1 = puVar4[2];
            if (pCVar4 + 2 != g_ShatterVertexArray + uVar1) {
              pCVar4[2] = g_ShatterVertexArray[uVar1];
            }
            local_94.z = (int)puVar4[5] << 8;
            local_88.z = (int)puVar4[8] << 8;
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                      (g_CFireEffectPtr,&local_b8,&local_94,&local_88,
                       this_ptr->texture_sets[iVar2].textures
                       [this_ptr->index_data_ptr[lod_index][iVar3]].textures,
                       0xffff);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar11);
      }
      local_48 = local_48 + 4;
      local_3c = local_3c + 1;
      iVar3 = iVar11;
    } while (local_3c < this_ptr->num_parts);
  }
  return;
}
