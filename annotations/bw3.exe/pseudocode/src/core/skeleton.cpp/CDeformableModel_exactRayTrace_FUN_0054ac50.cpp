// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0054ac50
// Address: 0054ac50
// Address Range: [[0054ac50, 0054af05]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0054ac50(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0054ac50(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

{
  ushort *puVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1034 [997];
  CDemonTriangle local_84;
  float local_4c;
  float local_48 [4];
  float local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if ((g_UCHAR_0272229c & 1) == 0) {
    g_UCHAR_0272229c = g_UCHAR_0272229c | 1;
    __arrinit(g_CVector3f_ARRAY_0271383c,5000,&g_CVectorTypeInfo);
  }
  if (5000 < this_ptr->vertex_count[lod_index]) {
    g_CHAR_PTR_01d71de0 = "..\\core\\skeleton.cpp";
    g_INT_01d71de4 = 0x6e2;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDeformableModel::exactRayTrace - too many vertices!");
  }
  pCVar2 = g_CVector3f_ARRAY_0271383c;
  iVar4 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      pCVar2->x = (float)skinned_vertices->x * 0.00390625f;
      pCVar2->y = (float)skinned_vertices->y * 0.00390625f;
      pCVar2->z = (float)skinned_vertices->z * 0.00390625f;
      iVar4 = iVar4 + 1;
      pCVar2 = pCVar2 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar4 < this_ptr->vertex_count[lod_index]);
  }
  local_20 = 1.01;
  local_28 = 0;
  local_24 = 0;
  if (0 < this_ptr->num_parts) {
    local_2c = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_34 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_30 = part_visibility_flags;
    do {
      iVar4 = *(int *)(local_34 + 0xc24) + local_28;
      if (((*local_30 & 1) != 0) && (local_28 < iVar4)) {
        local_1c = local_28 * 0x12;
        iVar3 = local_28;
        local_28 = iVar4;
        do {
          puVar1 = (ushort *)(*(int *)(local_2c + 0x7c) + local_1c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                    (&local_84,g_CVector3f_ARRAY_0271383c + *puVar1,
                     g_CVector3f_ARRAY_0271383c + puVar1[1],g_CVector3f_ARRAY_0271383c + puVar1[2]);
          local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                               (&local_84,ray_origin,ray_direction);
          if (((local_18 < local_20) && (0.0 <= local_18)) && (local_18 <= 1.0)) {
            local_4c = -local_84.normal.x;
            local_48[0] = -local_84.normal.y;
            local_48[1] = -local_84.normal.z;
            local_20 = local_18;
            local_48[2] = -local_84.normal.x;
            local_48[(uint)bVar5 * -2 + 3] = local_48[(uint)bVar5 * -2];
            local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            if ((int *)&stack0x00000000 != g_DeformableModelPool[0].vertex_count) {
              g_CVector3f_0272af48.x = local_48[2];
              g_CVector3f_0272af48.y = local_48[3];
              g_CVector3f_0272af48.z = local_38;
            }
            g_INT_0272af44 = local_24;
            g_INT_0272af54 = lod_index;
            g_INT_0272af58 = iVar3;
          }
          local_1c = local_1c + 0x12;
          iVar3 = iVar3 + 1;
          iVar4 = local_28;
        } while (iVar3 < local_28);
      }
      local_28 = iVar4;
      local_30 = local_30 + 4;
      local_34 = local_34 + 0x60;
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->num_parts);
  }
  return local_20;
}
