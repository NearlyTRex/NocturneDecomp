// Name: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
// Address: 00455990
// Address Range: [[00455990, 00455a2d]]
// Convention: __cdecl
// Signature: int core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)

#include "nocturne.h"

int __cdecl
core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990
          (SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end)

{
  float fVar1;
  int iVar2;
  
  cylinder->edge_x1 = segment_start->x;
  cylinder->edge_z1 = segment_start->z;
  cylinder->edge_x2 = segment_end->x;
  cylinder->edge_z2 = segment_end->z;
  iVar2 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
  if (((iVar2 != 0) &&
      (fVar1 = (segment_end->y - segment_start->y) * cylinder->param_clamped + segment_start->y,
      cylinder->top_y < fVar1)) && (fVar1 < cylinder->bottom_y)) {
    cylinder->flags = 0;
    cylinder->max_distance = cylinder->param_t;
    cylinder->push_x =
         (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
    cylinder->push_z =
         (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
    return 1;
  }
  return 0;
}
