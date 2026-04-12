// Name: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
// Address: 005d5de0
// Address Range: [[005d5de0, 005d5e50]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d *poly_verts,uint vert_count,CVector2d *seg_start,CVector2d *seg_end,CVector2d *seg_start2)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d *poly_verts,uint vert_count,CVector2d *seg_start,CVector2d *seg_end,CVector2d *seg_start2)

{
  int iVar1;
  CVector2d *point_a;
  uint uVar2;
  
  iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(poly_verts,vert_count,seg_start);
  if ((iVar1 == 0) &&
     (iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(poly_verts,vert_count,seg_end),
     iVar1 == 0)) {
    uVar2 = 0;
    point_a = poly_verts + (vert_count - 1);
    if (vert_count != 0) {
      do {
        iVar1 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                          (point_a,poly_verts,seg_start,seg_end);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        point_a = poly_verts;
        poly_verts = poly_verts + 1;
      } while (uVar2 < vert_count);
    }
    return 0;
  }
  return 1;
}
