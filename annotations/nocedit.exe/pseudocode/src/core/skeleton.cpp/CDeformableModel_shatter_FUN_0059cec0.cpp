// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
// Address: 0059cec0
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
  int iVar5;
  int iVar7;
  int iVar10;
  int iVar6;
  CVector3f *pCVar7;
  int iVar11;
  int iVar8;
  int iVar9;
  CMatrix3x3f local_e0;
  STriangleVertices local_b8;
  CVector3i local_94;
  CVector3i local_88;
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
  ushort uVar2;
  ushort *puVar1;
  
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
        pCVar7->x = local_7c.x;
        pCVar7->y = local_7c.y;
        pCVar7->z = local_7c.z;
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
    local_54 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_4c = (byte *)part_visibility_flags;
    local_58 = texture_set_indices;
    iVar11 = iVar3;
    do {
      iVar3 = *(int *)(local_54 + 0x7164) + iVar11;
      iVar2 = *local_58;
      if (((*local_4c & 1) != 0) && (iVar11 < iVar3)) {
        iVar8 = iVar11 * 0x12;
        iVar11 = iVar11 * 4;
        do {
          puVar5 = (ushort *)
                   ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 + iVar8
                   );
          pCVar4 = local_b8.vertices;
          iVar7 = 0;
          do {
            uVar2 = *puVar5;
            if (pCVar4 != g_ShatterVertexArray + uVar2) {
              pCVar4->x = g_ShatterVertexArray[uVar2].x;
              pCVar4->y = g_ShatterVertexArray[uVar2].y;
              pCVar4->z = g_ShatterVertexArray[uVar2].z;
            }
            pCVar4 = pCVar4 + 1;
            *(uint *)((int)&local_94.x + iVar7) = (uint)puVar5[3];
            iVar5 = iVar7 + 4;
            puVar1 = puVar5 + 6;
            puVar5 = puVar5 + 1;
            *(uint *)((int)&local_88.x + iVar7) = (uint)*puVar1;
            iVar7 = iVar5;
          } while (iVar5 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                    (g_CFireEffectPtr,&local_b8,&local_94,&local_88,
                     this_ptr->texture_sets[iVar2].textures
                     [*(int *)(iVar11 + (int)this_ptr->index_data_ptr[lod_index])].textures,0xffff);
          iVar11 = iVar11 + 4;
          iVar8 = iVar8 + 0x12;
        } while (iVar11 < iVar3 * 4);
      }
      local_4c = local_4c + 4;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_58 = local_58 + 1;
      iVar11 = iVar3;
    } while (local_44 < this_ptr->num_parts);
  }
  local_3c = 0;
  if (0 < this_ptr->num_parts) {
    local_50 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_48 = (byte *)part_visibility_flags;
    do {
      iVar11 = *(int *)(local_50 + 0x7178) + iVar3;
      if (((*local_48 & 1) != 0) && (iVar2 = texture_set_indices[local_3c], iVar3 < iVar11)) {
        iVar9 = iVar3 * 0x12;
        local_14 = iVar3 << 2;
        do {
          puVar4 = (ushort *)
                   ((int)&(this_ptr->tri_data_ptr[lod_index]->vertex_indices).vertex_index_0 + iVar9
                   );
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index][iVar3 - this_ptr->tri_count[lod_index]])
              & 1) == 0) {
            pCVar4 = local_b8.vertices;
            iVar7 = 0;
            do {
              uVar1 = *puVar4;
              if (pCVar4 != g_ShatterVertexArray + uVar1) {
                pCVar4->x = g_ShatterVertexArray[uVar1].x;
                pCVar4->y = g_ShatterVertexArray[uVar1].y;
                pCVar4->z = g_ShatterVertexArray[uVar1].z;
              }
              *(uint *)((int)&local_94.x + iVar7) = (uint)puVar4[3] << 8;
              pCVar4 = pCVar4 + 1;
              puVar5 = puVar4 + 6;
              iVar10 = iVar7 + 4;
              puVar4 = puVar4 + 1;
              *(uint *)((int)&local_88.x + iVar7) = (uint)*puVar5 << 8;
              iVar7 = iVar10;
            } while (iVar10 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
                      (g_CFireEffectPtr,&local_b8,&local_94,&local_88,
                       this_ptr->texture_sets[iVar2].textures
                       [*(int *)((int)this_ptr->index_data_ptr[lod_index] + local_14)].textures,
                       0xffff);
          }
          iVar9 = iVar9 + 0x12;
          local_14 = local_14 + 4;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar11);
      }
      local_50 = local_50 + 0x60;
      local_48 = local_48 + 4;
      local_3c = local_3c + 1;
      iVar3 = iVar11;
    } while (local_3c < this_ptr->num_parts);
  }
  return;
}
