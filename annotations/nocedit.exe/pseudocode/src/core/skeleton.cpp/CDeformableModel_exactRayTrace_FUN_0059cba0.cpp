// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
// Address: 0059cba0
// Address Range: [[0059cba0, 0059ce3e]]
// Convention: __cdecl
// Signature: float core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0(CDeformableModel * this_ptr, int lod_index, CVector3f * ray_origin, CVector3f * ray_direction, CVector3i * skinned_vertices, byte * part_visibility_flags)

#include "nocturne.h"

float __cdecl
core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
          (CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3i *skinned_vertices,byte *part_visibility_flags)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  CDemonTriangle local_6c;
  float local_34;
  float local_30;
  float local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  if ((g_FloatVertexArrayInitialized & 1) == 0) {
    g_FloatVertexArrayInitialized = g_FloatVertexArrayInitialized | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              (g_FloatVertexArray,5000,&g_CVectorTypeInfo);
  }
  if (5000 < this_ptr->vertex_count[lod_index]) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x6d2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::exactRayTrace - too many vertices!");
  }
  pCVar2 = g_FloatVertexArray;
  iVar5 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      pCVar2->x = (float)skinned_vertices->x * 0.00390625f;
      pCVar2->y = (float)skinned_vertices->y * 0.00390625f;
      pCVar2->z = (float)skinned_vertices->z * 0.00390625f;
      iVar5 = iVar5 + 1;
      pCVar2 = pCVar2 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar5 < this_ptr->vertex_count[lod_index]);
  }
  local_18 = 1.01;
  local_1c = 0;
  iVar5 = 0;
  if (0 < this_ptr->num_parts) {
    local_20 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_24 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_28 = part_visibility_flags;
    do {
      iVar3 = *(int *)(local_24 + 0x7164) + local_1c;
      if (((*local_28 & 1) != 0) && (local_1c < iVar3)) {
        iVar6 = local_1c * 0x12;
        iVar4 = local_1c;
        local_1c = iVar3;
        do {
          iVar3 = *(int *)(local_20 + 0x7c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                    (&local_6c,g_FloatVertexArray + *(ushort *)(iVar3 + iVar6),
                     g_FloatVertexArray + *(ushort *)(iVar3 + 2 + iVar6),
                     g_FloatVertexArray + *(ushort *)(iVar3 + 4 + iVar6));
          fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (&local_6c,ray_origin,ray_direction);
          if (((fVar1 < local_18) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
            local_34 = -local_6c.normal.x;
            local_30 = -local_6c.normal.y;
            local_2c = -local_6c.normal.z;
            if ((SLod *)&stack0x00000000 != g_DeformableModelPool[0].lod_info + 3) {
              g_DeformableModelRayHitNormal.x = local_34;
              g_DeformableModelRayHitNormal.y = local_30;
              g_DeformableModelRayHitNormal.z = local_2c;
            }
            g_DeformableModelRayHitLodIndex = lod_index;
            g_DeformableModelRayHitPartIndex = iVar5;
            g_DeformableModelRayHitTriangleIndex = iVar4;
            local_18 = fVar1;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x12;
          iVar3 = local_1c;
        } while (iVar4 < local_1c);
      }
      local_1c = iVar3;
      iVar5 = iVar5 + 1;
      local_28 = local_28 + 4;
      local_24 = local_24 + 0x60;
    } while (iVar5 < this_ptr->num_parts);
  }
  return local_18;
}
