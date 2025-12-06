// Name: core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
// Address: 0049ace0
// Address Range: [[0049ace0, 0049ad76]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_cylinderEdgeTestWithHeight_FUN_0049ace0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2)

#include "nocturne.h"

void __cdecl
core_dtri_cpp_cylinderEdgeTestWithHeight_FUN_0049ace0
          (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2)

{
  float fVar1;
  int iVar2;
  
  cylinder->edge_x1 = vertex1->x;
  cylinder->edge_z1 = vertex1->z;
  cylinder->edge_x2 = vertex2->x;
  cylinder->edge_z2 = vertex2->z;
  iVar2 = core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(cylinder);
  if (((iVar2 != 0) &&
      (fVar1 = (vertex2->y - vertex1->y) * cylinder->param_clamped + vertex1->y,
      cylinder->top_y < fVar1)) && (fVar1 < cylinder->bottom_y)) {
    cylinder->flags = 0;
    cylinder->max_distance = cylinder->param_t;
    cylinder->push_x =
         (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
    cylinder->push_z =
         (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
    return;
  }
  return;
}
