// Name: core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
// Address: 00495aa0
// Address Range: [[00495aa0, 00495b6d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace *this_ptr,CVector3f *output_point,CVector3f *ray_start,CVector3f *ray_end)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                    (this_ptr,ray_start,ray_end,(CVector3f *)0x0,(int *)0x0);
  if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
    fVar1 = ray_end->y;
    fVar2 = ray_start->y;
    fVar3 = ray_end->z;
    fVar4 = ray_start->z;
    output_point->x = ray_start->x + (ray_end->x - ray_start->x) * fVar5;
    output_point->y = ray_start->y + (fVar1 - fVar2) * fVar5;
    output_point->z = ray_start->z + (fVar3 - fVar4) * fVar5;
    return output_point;
  }
  output_point->x = ray_end->x;
  output_point->y = ray_end->y;
  output_point->z = ray_end->z;
  return output_point;
}
