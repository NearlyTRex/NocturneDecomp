// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
// Address: 0051a470
// Address Range: [[0051a470, 0051a6f4]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonTriangle local_6c;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  if ((DAT_02684230 & 1) == 0) {
    DAT_02684230 = DAT_02684230 | 1;
    __arrinit(g_CVector3f_ARRAY_026757d0,5000,&g_CVectorTypeInfo_005993b0)
    ;
  }
  if (5000 < this_ptr->vertex_count[lod_index]) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0x6d2;
    core_main_c_FUN_004c8440();
  }
  pCVar1 = g_CVector3f_ARRAY_026757d0;
  iVar5 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      pCVar1->x = (float)skinned_vertices->x * _DAT_005a1eb0;
      pCVar1->y = (float)skinned_vertices->y * _DAT_005a1eb0;
      pCVar1->z = (float)skinned_vertices->z * _DAT_005a1eb0;
      iVar5 = iVar5 + 1;
      pCVar1 = pCVar1 + 1;
      skinned_vertices = skinned_vertices + 1;
    } while (iVar5 < this_ptr->vertex_count[lod_index]);
  }
  local_18 = 1.01;
  local_28 = 0;
  iVar5 = 0;
  if (0 < this_ptr->num_parts) {
    local_1c = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_20 = (int)this_ptr->lod_info + lod_index * 4 + -4;
    local_24 = part_visibility_flags;
    do {
      iVar2 = *(int *)(local_20 + 0xc24) + local_28;
      if (((*local_24 & 1) != 0) && (local_28 < iVar2)) {
        iVar4 = local_28 * 0x12;
        iVar3 = local_28;
        local_28 = iVar2;
        do {
          iVar2 = *(int *)(local_1c + 0x7c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                    (&local_6c,g_CVector3f_ARRAY_026757d0 + *(ushort *)(iVar4 + iVar2),
                     g_CVector3f_ARRAY_026757d0 + *(ushort *)(iVar4 + 2 + iVar2),
                     g_CVector3f_ARRAY_026757d0 + *(ushort *)(iVar4 + 4 + iVar2));
          local_14 = core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                               (&local_6c,ray_origin,ray_direction);
          if (((local_14 < local_18) && (0.0 <= local_14)) && (local_14 <= 1.0)) {
            local_34 = -local_6c.normal.x;
            local_30 = -local_6c.normal.y;
            local_2c = -local_6c.normal.z;
            if ((SLod *)&stack0x00000000 != g_CDeformableModel_ARRAY_0268cef4[0].lod_info + 3) {
              _DAT_0268cedc = local_34;
              _DAT_0268cee0 = local_30;
              _DAT_0268cee4 = local_2c;
            }
            _DAT_0268cee8 = lod_index;
            _DAT_0268ced8 = iVar5;
            _DAT_0268ceec = iVar3;
            local_18 = local_14;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x12;
          iVar2 = local_28;
        } while (iVar3 < local_28);
      }
      local_28 = iVar2;
      iVar5 = iVar5 + 1;
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x60;
    } while (iVar5 < this_ptr->num_parts);
  }
  return local_18;
}
