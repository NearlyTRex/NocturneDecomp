// Name: shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
// Address: 005d5bb0
// Address Range: [[005d5bb0, 005d5ddc]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d *point_a,CVector2d *point_b,CVector2d *point_c,CVector2d *point_d)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d *point_a,CVector2d *point_b,CVector2d *point_c,CVector2d *point_d)

{
  double dVar5;
  double local_48;
  double local_40;
  double local_38;
  double dVar2;
  double dVar1;
  double dVar4;
  double dVar3;
  
  if (((((((point_c->x <= point_a->x) || (point_c->x <= point_b->x)) || (point_d->x <= point_a->x))
        || (point_d->x <= point_b->x)) &&
       (((point_a->x <= point_c->x || (point_b->x <= point_c->x)) ||
        ((point_a->x <= point_d->x || (point_b->x <= point_d->x)))))) &&
      (((point_c->y <= point_a->y || (point_c->y <= point_b->y)) ||
       ((point_d->y <= point_a->y || (point_d->y <= point_b->y)))))) &&
     ((((point_a->y <= point_c->y || (point_b->y <= point_c->y)) || (point_a->y <= point_d->y)) ||
      (point_b->y <= point_d->y)))) {
    dVar1 = (point_b->x - point_a->x) * (point_d->y - point_c->y) -
            (point_d->x - point_c->x) * (point_b->y - point_a->y);
    local_38 = dVar1;
    if (dVar1 < 0.0) {
      local_38 = -dVar1;
    }
    if (1e-10 <= local_38) {
      dVar2 = point_a->y - point_c->y;
      dVar4 = point_a->x - point_c->x;
      dVar3 = ((point_d->x - point_c->x) * dVar2 - (point_d->y - point_c->y) * dVar4) *
              (1.0 / dVar1);
      dVar5 = ((point_b->x - point_a->x) * dVar2 - (point_b->y - point_a->y) * dVar4) *
              (1.0 / dVar1);
      local_40 = dVar3;
      if (dVar3 < 0.0) {
        local_40 = -dVar3;
      }
      if (1e-10 <= local_40) {
        local_48 = dVar5;
        if (dVar5 < 0.0) {
          local_48 = -dVar5;
        }
        if (((1e-10 <= local_48) && (0.0 <= dVar3)) &&
           ((0.0 <= dVar5 && ((dVar3 <= 0.99999999989999999 && (dVar5 <= 0.99999999989999999)))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}
