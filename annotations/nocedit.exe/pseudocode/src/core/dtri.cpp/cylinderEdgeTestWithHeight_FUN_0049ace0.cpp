// Name: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// Address: 0049ace0
// Address Range: [[0049ace0, 0049ad76]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)

#include "nocturne.h"

void __cdecl core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  cylinder->edge_x1 = vertex1->x;
  cylinder->edge_z1 = vertex1->z;
  cylinder->edge_x2 = vertex2->x;
  cylinder->edge_z2 = vertex2->z;
  iVar5 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
  if (((iVar5 != 0) &&
      (fVar1 = (vertex2->y - vertex1->y) * cylinder->param_clamped + vertex1->y,
      cylinder->top_y < fVar1)) && (fVar1 < cylinder->bottom_y)) {
    (cylinder->push_normal).y = 0.0;
    fVar1 = cylinder->dir_x;
    fVar2 = cylinder->param_t;
    cylinder->closest_t = cylinder->param_t;
    fVar3 = cylinder->center_x;
    fVar4 = cylinder->intersect_x;
    (cylinder->push_normal).z =
         (cylinder->dir_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
    (cylinder->push_normal).x = (fVar1 * fVar2 + fVar3) - fVar4;
    return;
  }
  return;
}
