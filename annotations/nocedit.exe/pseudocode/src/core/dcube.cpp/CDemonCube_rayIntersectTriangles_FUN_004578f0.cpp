// Name: core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
// Address: 004578f0
// Address Range: [[004578f0, 00457a8b]]
// Convention: __cdecl
// Signature: float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, uint * hit_material)

#include "nocturne.h"

float __cdecl
core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
          (CDemonCube *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *hit_normal
          ,uint *hit_material)

{
  float fVar1;
  float fVar2;
  CDemonCubeTriangle *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CVector3f local_2c;
  int local_20;
  float local_1c;
  float local_18;
  
  iVar5 = 0;
  local_20 = -1;
  local_1c = 1.0001;
  if (0 < this_ptr->triangle_count) {
    iVar6 = 0;
    do {
      local_18 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                           ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar6)
                            ,ray_origin,ray_direction);
      if (((0.0 <= local_18) && (local_18 < local_1c)) && (local_18 <= 1.0)) {
        local_20 = iVar5;
        local_1c = local_18;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < this_ptr->triangle_count);
  }
  if (-1 < local_20) {
    pCVar3 = this_ptr->triangle_buffer;
    fVar1 = pCVar3[local_20].normal.y;
    fVar2 = pCVar3[local_20].normal.z;
    if (&local_2c != hit_normal) {
      hit_normal->x = -pCVar3[local_20].normal.x;
      hit_normal->y = -fVar1;
      hit_normal->z = -fVar2;
    }
    *hit_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + local_20);
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[0];
    if (pCVar4 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar4->x;
      g_TempNormal0.z = pCVar4->z;
      g_TempNormal0.y = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[1];
    if (pCVar4 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar4->x;
      g_TempNormal1.z = pCVar4->z;
      g_TempNormal1.y = pCVar4->y;
    }
    pCVar4 = this_ptr->triangle_buffer[local_20].vertices[2];
    if (pCVar4 != &g_TempNormal2) {
      g_TempNormal2.y = pCVar4->y;
      g_TempNormal2.z = pCVar4->z;
      g_TempNormal2.x = pCVar4->x;
      return local_1c;
    }
  }
  return local_1c;
}
