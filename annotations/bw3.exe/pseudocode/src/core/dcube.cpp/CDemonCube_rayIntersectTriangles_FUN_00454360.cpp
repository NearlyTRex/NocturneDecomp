// Name: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_00454360
// Address: 00454360
// Address Range: [[00454360, 00454510]]
// Convention: __cdecl
// Signature: float __cdecl core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00454360(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00454360(CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal,uint *hit_material)

{
  CDemonCubeTriangle *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_101c [1012];
  CVector3f local_34;
  float local_28;
  float local_24 [2];
  int local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  iVar3 = 0;
  local_1c = -1;
  local_18 = 1.0001;
  if (0 < this_ptr->triangle_count) {
    iVar4 = 0;
    do {
      local_14 = (float)core_dcube_cpp_FUN_00452240
                                  ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar4,
                                   ray_origin,ray_direction);
      if (((0.0 <= local_14) && (local_14 < local_18)) && (local_14 <= 1.0)) {
        local_1c = iVar3;
        local_18 = local_14;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  if (-1 < local_1c) {
    pCVar1 = this_ptr->triangle_buffer;
    local_28 = -pCVar1[local_1c].triangle.normal.x;
    local_24[0] = -pCVar1[local_1c].triangle.normal.y;
    local_24[1] = -pCVar1[local_1c].triangle.normal.z;
    local_34.x = local_28;
    *(float *)((int)&local_34 + (uint)bVar5 * -8 + 4) = local_24[(uint)bVar5 * -2];
    *(float *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         local_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&local_34 != hit_normal) {
      hit_normal->x = local_34.x;
      hit_normal->y = local_34.y;
      hit_normal->z = local_34.z;
    }
    *hit_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + local_1c);
    pCVar2 = this_ptr->triangle_buffer[local_1c].triangle.vertices[0];
    if (pCVar2 != (CVector3f *)&DAT_01548b58) {
      _DAT_01548b58 = pCVar2->x;
      _DAT_01548b60 = pCVar2->z;
      _DAT_01548b5c = pCVar2->y;
    }
    pCVar2 = this_ptr->triangle_buffer[local_1c].triangle.vertices[1];
    if (pCVar2 != (CVector3f *)&DAT_01548b64) {
      _DAT_01548b64 = pCVar2->x;
      _DAT_01548b6c = pCVar2->z;
      _DAT_01548b68 = pCVar2->y;
    }
    pCVar2 = this_ptr->triangle_buffer[local_1c].triangle.vertices[2];
    if (pCVar2 != (CVector3f *)&DAT_01548b70) {
      _DAT_01548b74 = pCVar2->y;
      _DAT_01548b78 = pCVar2->z;
      _DAT_01548b70 = pCVar2->x;
      return local_18;
    }
  }
  return local_18;
}
