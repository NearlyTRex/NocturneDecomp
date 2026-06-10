// Name: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// Address: 005d5e60
// MANUAL RECONSTRUCTION
// Address Range: [[005d5e60, 005d6019] [006051bd, 0060522b]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(CVector2d *vertices,uint vertex_count,CVector2d *test_point)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(CVector2d *vertices,uint vertex_count,CVector2d *test_point)

{
  CVector2d a;
  CVector2d b;
  double dx;
  double dy;
  double slope;
  uint crossings;
  uint i;
  CVector2d *prev;
  CVector2d *cur;

  crossings = 0;
  prev = vertices + (vertex_count - 1);
  if (vertex_count != 0) {
    cur = vertices;
    i = 0;
    do {
      a = *prev;
      b = *cur;
      if (b.y < a.y) {
        a = *cur;
        b = *prev;
      }
      if (((a.y <= test_point->y) && (test_point->y <= b.y)) &&
          ((test_point->y != a.y) || (test_point->y != b.y))) {
        if ((test_point->x < a.x) || (test_point->x < b.x)) {
          dx = b.x - a.x;
          dy = b.y - a.y;
          slope = 0.0;
          if ((dx != 0.0) && (dy != 0.0)) {
            slope = dx / dy;
          }
          if ((test_point->y - a.y) * slope + a.x < test_point->x) {
            crossings = crossings + 1;
          }
        }
        else {
          crossings = crossings + 1;
        }
      }
      prev = cur;
      cur = cur + 1;
      i = i + 1;
    } while (i < vertex_count);
  }
  return crossings & 1;
}
