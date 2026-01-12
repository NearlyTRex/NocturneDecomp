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
  CDemonCubeTriangle *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CVector3f local_28;
  int local_1c;
  float local_18;
  
  iVar5 = 0;
  local_1c = -1;
  local_18 = 1.0001;
  if (0 < this_ptr->triangle_count) {
    iVar6 = 0;
    do {
      fVar4 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                        ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar6),
                         ray_origin,ray_direction);
      if (((0.0 <= fVar4) && (fVar4 < local_18)) && (fVar4 <= 1.0)) {
        local_1c = iVar5;
        local_18 = fVar4;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < this_ptr->triangle_count);
  }
  if (-1 < local_1c) {
    pCVar2 = this_ptr->triangle_buffer;
    fVar4 = pCVar2[local_1c].normal.y;
    fVar1 = pCVar2[local_1c].normal.z;
    if (&local_28 != hit_normal) {
      hit_normal->x = -pCVar2[local_1c].normal.x;
      hit_normal->y = -fVar4;
      hit_normal->z = -fVar1;
    }
    *hit_material = (uint)*(byte *)((int)this_ptr->ground_type_memory + local_1c);
    pCVar3 = this_ptr->triangle_buffer[local_1c].vertices[0];
    if (pCVar3 != &g_TempNormal0) {
      g_TempNormal0.x = pCVar3->x;
      g_TempNormal0.z = pCVar3->z;
      g_TempNormal0.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[local_1c].vertices[1];
    if (pCVar3 != &g_TempNormal1) {
      g_TempNormal1.x = pCVar3->x;
      g_TempNormal1.z = pCVar3->z;
      g_TempNormal1.y = pCVar3->y;
    }
    pCVar3 = this_ptr->triangle_buffer[local_1c].vertices[2];
    if (pCVar3 != &g_TempNormal2) {
      g_TempNormal2.y = pCVar3->y;
      g_TempNormal2.z = pCVar3->z;
      g_TempNormal2.x = pCVar3->x;
      return local_18;
    }
  }
  return local_18;
}
