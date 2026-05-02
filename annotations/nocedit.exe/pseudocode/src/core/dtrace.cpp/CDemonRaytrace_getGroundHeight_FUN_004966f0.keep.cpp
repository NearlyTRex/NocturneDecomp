// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// MANUAL RECONSTRUCTION
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CDemonCube *this_ptr_00;
  float fVar8;
  int grid_y;
  CVector3f local_5c;
  CVector3f local_44;
  CVector3f local_38;
  float fVar1;
  
  local_5c.x = pos->x;
  local_5c.z = pos->z;
  local_5c.y = pos->y + 2.0f;
  fVar7 = pos->y + -10.0f;
  fVar5 = local_5c.x - (this_ptr->bbox_min).x;
  fVar2 = (this_ptr->cell_size).x;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  fVar6 = local_5c.z - (this_ptr->bbox_min).z;
  fVar3 = (this_ptr->cell_size).z;
  fVar4 = (this_ptr->bbox_min).y;
  local_38.x = pos->x - local_5c.x;
  local_38.z = pos->z - local_5c.z;
  local_38.y = fVar7 - local_5c.y;
  grid_y = (int)ROUND(ROUND((local_5c.y - (this_ptr->bbox_min).y) * fVar1));
  while( true ) {
    if (grid_y < (int)ROUND(ROUND((fVar7 - fVar4) * fVar1))) {
      if (hit_flag != (int *)0x0) {
        *hit_flag = 1;
      }
      if (normal_out != (CVector3f *)0x0) {
        normal_out->y = 1.0;
        normal_out->z = 0.0;
        normal_out->x = 0.0;
      }
      g_TempNormal2.y = g_ZeroVector.f.y;
      g_TempNormal2.z = g_ZeroVector.f.z;
      g_TempNormal2.x = g_ZeroVector.f.x;
      g_TempNormal1.y = g_ZeroVector.f.y;
      g_TempNormal1.z = g_ZeroVector.f.z;
      g_TempNormal1.x = g_ZeroVector.f.x;
      g_TempNormal0.y = g_ZeroVector.f.y;
      g_TempNormal0.z = g_ZeroVector.f.z;
      g_TempNormal0.x = g_ZeroVector.f.x;
      return fVar7;
    }
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,(int)ROUND(ROUND(fVar5 / fVar2)),grid_y,
                             (int)ROUND(ROUND(fVar6 / fVar3)));
    if ((this_ptr_00 != (CDemonCube *)0x0) &&
       (fVar8 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                          (this_ptr_00,&local_5c,&local_38,&local_44,(uint *)hit_flag), fVar8 <= 1.0
       )) break;
    grid_y = grid_y + -1;
  }
  if ((normal_out != (CVector3f *)0x0) && (normal_out != &local_44)) {
    normal_out->x = local_44.x;
    normal_out->y = local_44.y;
    normal_out->z = local_44.z;
  }
  return fVar8 * local_38.y + local_5c.y;
}
