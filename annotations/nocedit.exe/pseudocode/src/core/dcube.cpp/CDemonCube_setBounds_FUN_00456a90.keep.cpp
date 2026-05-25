// Name: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
// Address: 00456a90
// MANUAL RECONSTRUCTION
// Address Range: [[00456a90, 00456aef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

{
  if (&this_ptr->min_bounds != min_bounds) {
    this_ptr->min_bounds = *min_bounds;
  }
  if (&this_ptr->max_bounds == max_bounds) {
    g_PolygonCount = 0;
    g_VertexCount = 0;
    return;
  }
  this_ptr->max_bounds = *max_bounds;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  return;
}
