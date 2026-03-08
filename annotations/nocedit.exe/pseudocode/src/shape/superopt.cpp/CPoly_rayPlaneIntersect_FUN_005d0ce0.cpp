// Name: shape_superopt.cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0
// Address: 005d0ce0
// Address Range: [[005d0ce0, 005d0d2d]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0(CPoly *this_ptr,CVec *ray_origin,CVec *ray_dir)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0(CPoly *this_ptr,CVec *ray_origin,CVec *ray_dir)

{
  double dVar1;
  
  dVar1 = shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500
                    (&ray_origin->impl,&ray_dir->impl,
                     &this_ptr->parent_obj->vertex_data[this_ptr->vertex_idx_0].position,
                     &(this_ptr->normal).impl);
  return dVar1;
}
