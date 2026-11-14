// Name: core_dcube.cpp_CDemonCube_setBounds_FUN_0044ae80
// Address: 0044ae80
// Address Range: [[0044ae80, 0044aecd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_0044ae80(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_setBounds_FUN_0044ae80(CDemonCube *this_ptr,CVector3f *min_bounds,CVector3f *max_bounds)

{
  if (&this_ptr->min_bounds == min_bounds) {
    if (&this_ptr->max_bounds == max_bounds) {
      return;
    }
  }
  else {
    (this_ptr->min_bounds).x = min_bounds->x;
    (this_ptr->min_bounds).y = min_bounds->y;
    (this_ptr->min_bounds).z = min_bounds->z;
    if (&this_ptr->max_bounds == max_bounds) {
      return;
    }
  }
  (this_ptr->max_bounds).x = max_bounds->x;
  (this_ptr->max_bounds).y = max_bounds->y;
  (this_ptr->max_bounds).z = max_bounds->z;
  return;
}
