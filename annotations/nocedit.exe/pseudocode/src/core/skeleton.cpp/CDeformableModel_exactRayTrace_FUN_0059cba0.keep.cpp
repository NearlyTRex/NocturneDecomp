// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
// Address: 0059cba0
// MANUAL RECONSTRUCTION
// Address Range: [[0059cba0, 0059ce3e]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

{
  SInputFace *pSVar1;
  float fVar2;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CDemonTriangle local_6c;
  byte *local_28;
  int local_24;
  float local_18;
  
  if ((g_FloatVertexArrayInitialized & 1) == 0) {
    g_FloatVertexArrayInitialized = g_FloatVertexArrayInitialized | 1;
    __arrinit(g_FloatVertexArray,5000,&g_CVectorTypeInfo);
  }
  if (5000 < this_ptr->vertex_count[lod_index]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x6d2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::exactRayTrace - too many vertices!");
  }
  pCVar1 = g_FloatVertexArray;
  iVar4 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      pCVar1->x = (float)skinned_vertices->x * 0.00390625f;
      pCVar1->y = (float)skinned_vertices->y * 0.00390625f;
      pCVar1->z = (float)skinned_vertices->z * 0.00390625f;
      iVar4 = iVar4 + 1;
      pCVar1 = pCVar1 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar4 < this_ptr->vertex_count[lod_index]);
  }
  local_18 = 1.01;
  iVar6 = 0;
  if (0 < this_ptr->num_parts) {
    local_24 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_28 = part_visibility_flags;
    iVar3 = 0;
    do {
      iVar2 = *(int *)(local_24 + 0x7164) + iVar3;
      if (((*local_28 & 1) != 0) && (iVar3 < iVar2)) {
        iVar5 = iVar3 * 0x12;
        do {
          pSVar1 = this_ptr->tri_data_ptr[lod_index];
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                    (&local_6c,
                     g_FloatVertexArray +
                     *(ushort *)((int)&(pSVar1->vertex_indices).vertex_index_0 + iVar5),
                     g_FloatVertexArray +
                     *(ushort *)((int)&(pSVar1->vertex_indices).vertex_index_1 + iVar5),
                     g_FloatVertexArray +
                     *(ushort *)((int)&(pSVar1->vertex_indices).vertex_index_2 + iVar5));
          fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (&local_6c,ray_origin,ray_direction);
          if (((fVar2 < local_18) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) {
            g_DeformableModelRayHitNormal.x = -local_6c.normal.x;
            g_DeformableModelRayHitNormal.y = -local_6c.normal.y;
            g_DeformableModelRayHitNormal.z = -local_6c.normal.z;
            g_DeformableModelRayHitLodIndex = lod_index;
            g_DeformableModelRayHitPartIndex = iVar6;
            g_DeformableModelRayHitTriangleIndex = iVar3;
            local_18 = fVar2;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x12;
        } while (iVar3 < iVar2);
      }
      iVar6 = iVar6 + 1;
      local_28 = local_28 + 4;
      local_24 = local_24 + 0x60;
      iVar3 = iVar2;
    } while (iVar6 < this_ptr->num_parts);
  }
  return local_18;
}
