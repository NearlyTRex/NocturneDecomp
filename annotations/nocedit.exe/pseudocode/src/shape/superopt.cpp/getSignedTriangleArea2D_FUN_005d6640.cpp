// Name: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
// Address: 005d6640
// Address Range: [[005d6640, 005d66d6]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d *p1,CVector2d *p2,CVector2d *p3)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d *p1,CVector2d *p2,CVector2d *p3)

{
  double dVar1;
  double local_20;
  
  dVar1 = (p2->x - p1->x) * (p3->y - p1->y) - (p3->x - p1->x) * (p2->y - p1->y);
  local_20 = dVar1;
  if (dVar1 < 0.0) {
    local_20 = -dVar1;
  }
  if (1e-10 <= local_20) {
    return dVar1;
  }
  return 0.0;
}
