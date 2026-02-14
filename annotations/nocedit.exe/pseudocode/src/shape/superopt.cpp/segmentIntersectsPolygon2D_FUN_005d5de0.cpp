// Name: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
// Address: 005d5de0
// Address Range: [[005d5de0, 005d5e50]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d *polyVerts,uint vertCount,CVector2d *segStart,CVector2d *segEnd,CVector2d *segStart2)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d *polyVerts,uint vertCount,CVector2d *segStart,CVector2d *segEnd,CVector2d *segStart2)

{
  int iVar1;
  CVector2d *point_a;
  uint uVar2;
  
  iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(polyVerts,vertCount,segStart);
  if ((iVar1 == 0) &&
     (iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(polyVerts,vertCount,segEnd),
     iVar1 == 0)) {
    uVar2 = 0;
    point_a = polyVerts + (vertCount - 1);
    if (vertCount != 0) {
      do {
        iVar1 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                          (point_a,polyVerts,segStart,segEnd);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        point_a = polyVerts;
        polyVerts = polyVerts + 1;
      } while (uVar2 < vertCount);
    }
    return 0;
  }
  return 1;
}
