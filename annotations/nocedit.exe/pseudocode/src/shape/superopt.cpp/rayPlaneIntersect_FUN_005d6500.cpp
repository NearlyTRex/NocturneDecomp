// Name: shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
// Address: 005d6500
// Address Range: [[005d6500, 005d663c]]
// Convention: __cdecl
// Signature: double shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500(CVector3d * ray_origin, CVector3d * ray_dir, CVector3d * plane_point, CVector3d * plane_normal)

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500
          (CVector3d *ray_origin,CVector3d *ray_dir,CVector3d *plane_point,CVector3d *plane_normal)

{
  double dVar1;
  double *in_stack_00000004;
  double dStack_6c;
  
  dVar1 = plane_point->z * ray_origin->z +
          plane_point->x * ray_origin->x + plane_point->y * ray_origin->y;
  dStack_6c = dVar1;
  if (dVar1 < 0.0) {
    dStack_6c = -dVar1;
  }
  if (1e-08 <= dStack_6c) {
    return -((plane_point->z * in_stack_00000004[2] +
              plane_point->x * *in_stack_00000004 + plane_point->y * in_stack_00000004[1] +
             -(plane_point->z * ray_dir->z +
              plane_point->x * ray_dir->x + plane_point->y * ray_dir->y)) / dVar1);
  }
  return -1.0;
}
