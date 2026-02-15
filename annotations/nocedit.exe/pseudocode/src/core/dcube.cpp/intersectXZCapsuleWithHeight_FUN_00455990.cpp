// Name: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
// Address: 00455990
// Address Range: [[00455990, 00455a2d]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end)

#include "nocturne.h"

int __cdecl core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  cylinder->edge_x1 = segment_start->x;
  cylinder->edge_z1 = segment_start->z;
  cylinder->edge_x2 = segment_end->x;
  cylinder->edge_z2 = segment_end->z;
  iVar7 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
  if (((iVar7 != 0) &&
      (fVar1 = (segment_end->y - segment_start->y) * cylinder->param_clamped + segment_start->y,
      cylinder->top_y < fVar1)) && (fVar1 < cylinder->bottom_y)) {
    fVar1 = cylinder->dir_x;
    fVar2 = cylinder->param_t;
    fVar3 = cylinder->dir_z;
    fVar4 = cylinder->param_t;
    fVar5 = cylinder->param_t;
    (cylinder->push_normal).y = 0.0;
    cylinder->closest_t = fVar5;
    fVar5 = cylinder->center_x;
    fVar6 = cylinder->intersect_x;
    (cylinder->push_normal).z = (fVar3 * fVar4 + cylinder->center_z) - cylinder->intersect_z;
    (cylinder->push_normal).x = (fVar1 * fVar2 + fVar5) - fVar6;
    return 1;
  }
  return 0;
}
