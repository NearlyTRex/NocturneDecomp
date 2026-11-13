// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_00543a40
// Address: 00543a40
// Address Range: [[00543a40, 00543cf5]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_00543a40(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_00543a40(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)

{
  ushort *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1034 [997];
  CDemonTriangle local_84;
  float local_4c;
  float local_48 [4];
  uint local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if ((DAT_020c4334 & 1) == 0) {
    DAT_020c4334 = DAT_020c4334 | 1;
    __arrinit(&DAT_020b58d4,5000,&g_CVectorTypeInfo);
  }
  if (5000 < this_ptr->vertex_count[lod_index]) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x6e1;
    core_main_c_FUN_004e4500();
  }
  pfVar2 = (float *)&DAT_020b58d4;
  iVar4 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      *pfVar2 = (float)skinned_vertices->x * _DAT_005fb9a0;
      pfVar2[1] = (float)skinned_vertices->y * _DAT_005fb9a0;
      pfVar2[2] = (float)skinned_vertices->z * _DAT_005fb9a0;
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 3;
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
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                    (&local_84,(CVector3f *)(&DAT_020b58d4 + (uint)*puVar1 * 0xc),
                     (CVector3f *)(&DAT_020b58d4 + (uint)puVar1[1] * 0xc),
                     (CVector3f *)(&DAT_020b58d4 + (uint)puVar1[2] * 0xc));
          local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
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
              _DAT_020ccfe0 = local_48[2];
              _DAT_020ccfe4 = local_48[3];
              _DAT_020ccfe8 = local_38;
            }
            _DAT_020ccfdc = local_24;
            _DAT_020ccfec = lod_index;
            _DAT_020ccff0 = iVar3;
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
