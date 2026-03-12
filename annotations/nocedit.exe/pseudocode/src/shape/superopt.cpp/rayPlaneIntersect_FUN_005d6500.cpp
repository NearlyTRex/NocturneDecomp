// Name: shape_superopt.cpp_rayPlaneIntersect_FUN_005d6500
// Address: 005d6500
// Address Range: [[005d6500, 005d663c]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500(CVector3d *ray_origin,CVector3d *ray_dir,CVector3d *plane_point,CVector3d *plane_normal)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500(CVector3d *ray_origin,CVector3d *ray_dir,CVector3d *plane_point,CVector3d *plane_normal)

{
  double local_70;
  double dVar1;
  
  dVar1 = plane_normal->z * ray_dir->z + plane_normal->x * ray_dir->x + plane_normal->y * ray_dir->y
  ;
  local_70 = dVar1;
  if (dVar1 < 0.0) {
    local_70 = -dVar1;
  }
  if (1e-08 <= local_70) {
    return -((plane_normal->z * ray_origin->z +
              plane_normal->x * ray_origin->x + plane_normal->y * ray_origin->y +
             -(plane_normal->z * plane_point->z +
              plane_normal->x * plane_point->x + plane_normal->y * plane_point->y)) / dVar1);
  }
  return -1.0;
}
