// Name: shape_superopt.cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
// Address: 005c9aa0
// MANUAL RECONSTRUCTION
// Address Range: [[005c9aa0, 005ca58d] [00608ab4, 00608b26]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0(CComplexPolygon *this_ptr,CVector3d *plane_normal,CVector3d *plane_point,SExpandedEdge *buf_a,SExpandedEdge *buf_b,int *count_a,int *count_b)

{
  double dist_start;
  double dist_end;
  double plane_d;
  double t;
  int sign_start;
  int sign_end;
  SExpandedEdge *src;
  SExpandedEdge *dst;
  CVector3d split_pos;
  double split_uv[2];
  uint local_28;

  local_28 = 0;
  if (this_ptr->expanded_edge_count != 0) {
    do {
      src = this_ptr->expanded_edges + local_28;
      plane_d = -(plane_normal->x * plane_point->x +
                  plane_normal->y * plane_point->y +
                  plane_normal->z * plane_point->z);
      dist_start = plane_normal->x * src->start_pos.x +
                   plane_normal->y * src->start_pos.y +
                   plane_normal->z * src->start_pos.z + plane_d;
      dist_end = plane_normal->x * src->end_pos.x +
                 plane_normal->y * src->end_pos.y +
                 plane_normal->z * src->end_pos.z + plane_d;
      if ((dist_start < 1e-10) && (-1e-10 < dist_start)) {
        dist_start = 0.0;
      }
      if ((dist_end < 1e-10) && (-1e-10 < dist_end)) {
        dist_end = 0.0;
      }
      if (dist_start != 0.0 || dist_end != 0.0) {
        if (dist_start == 0.0) {
          sign_start = 0;
        }
        else if (0.0 <= dist_start) {
          sign_start = 1;
        }
        else {
          sign_start = -1;
        }
        if (dist_end == 0.0) {
          sign_end = 0;
        }
        else if (0.0 <= dist_end) {
          sign_end = 1;
        }
        else {
          sign_end = -1;
        }
        t = dist_start / (dist_end - dist_start);
        CVector3d delta_pos;
        delta_pos.x = src->start_pos.x - src->end_pos.x;
        delta_pos.y = src->start_pos.y - src->end_pos.y;
        delta_pos.z = src->start_pos.z - src->end_pos.z;
        split_pos.x = src->start_pos.x + delta_pos.x * t;
        split_pos.y = src->start_pos.y + delta_pos.y * t;
        split_pos.z = src->start_pos.z + delta_pos.z * t;
        double delta_uv0 = src->start_uv[0] - src->end_uv[0];
        double delta_uv1 = src->start_uv[1] - src->end_uv[1];
        split_uv[0] = src->start_uv[0] + delta_uv0 * t;
        split_uv[1] = src->start_uv[1] + delta_uv1 * t;
        if ((sign_start == 1) || (sign_end == 1)) {
          if ((sign_start == -1) || (sign_end == -1)) {
            if (sign_start == -1) {
              // Edge crosses: start is negative side, end is positive
              // Half on negative side → buf_a
              dst = buf_a + *count_a;
              *dst = *src;
              dst->end_pos = split_pos;
              dst->end_uv[0] = split_uv[0];
              dst->end_uv[1] = split_uv[1];
              dst->start_side = -1;
              dst->end_side = 0;
              *count_a = *count_a + 1;
              // Half on positive side → buf_b
              dst = buf_b + *count_b;
              *dst = *src;
              dst->start_pos = split_pos;
              dst->start_uv[0] = split_uv[0];
              dst->start_uv[1] = split_uv[1];
              dst->start_side = 0;
              dst->end_side = 1;
              *count_b = *count_b + 1;
            }
            else {
              // Edge crosses: start is positive side, end is negative
              // Half on positive side → buf_b
              dst = buf_b + *count_b;
              *dst = *src;
              dst->end_pos = split_pos;
              dst->end_uv[0] = split_uv[0];
              dst->end_uv[1] = split_uv[1];
              dst->start_side = 1;
              dst->end_side = 0;
              *count_b = *count_b + 1;
              // Half on negative side → buf_a
              dst = buf_a + *count_a;
              *dst = *src;
              dst->start_pos = split_pos;
              dst->start_uv[0] = split_uv[0];
              dst->start_uv[1] = split_uv[1];
              dst->start_side = 0;
              dst->end_side = -1;
              *count_a = *count_a + 1;
            }
          }
          else {
            // Both on positive side → buf_b
            dst = buf_b + *count_b;
            *dst = *src;
            dst->start_side = sign_start;
            dst->end_side = sign_end;
            *count_b = *count_b + 1;
          }
        }
        else {
          // Both on negative side → buf_a
          dst = buf_a + *count_a;
          *dst = *src;
          dst->start_side = sign_start;
          dst->end_side = sign_end;
          *count_a = *count_a + 1;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < (uint)this_ptr->expanded_edge_count);
  }
  return;
}
