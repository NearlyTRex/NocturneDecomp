// Name: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
// Address: 00456a90
// Address Range: [[00456a90, 00456aef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

{
  if (&this_ptr->min_bounds != min_bounds) {
    (this_ptr->min_bounds).x = min_bounds->x;
    (this_ptr->min_bounds).y = min_bounds->y;
    (this_ptr->min_bounds).z = min_bounds->z;
  }
  if (&this_ptr->max_bounds == max_bounds) {
    g_PolygonCount = 0;
    g_VertexCount = 0;
    return;
  }
  (this_ptr->max_bounds).x = max_bounds->x;
  (this_ptr->max_bounds).y = max_bounds->y;
  (this_ptr->max_bounds).z = max_bounds->z;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  return;
}
