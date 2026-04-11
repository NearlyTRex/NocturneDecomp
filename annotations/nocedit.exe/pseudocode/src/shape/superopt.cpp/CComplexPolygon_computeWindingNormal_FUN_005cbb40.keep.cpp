// Name: shape_superopt.cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
// Address: 005cbb40
// MANUAL RECONSTRUCTION
// Address Range: [[005cbb40, 005cbe16]]
// Convention: __cdecl
// Signature: CVector3d * __cdecl shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40(CComplexPolygon *this_ptr,CVector3d *output_normal,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

CVector3d * __cdecl shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40(CComplexPolygon *this_ptr,CVector3d *output_normal,SExpandedEdge *edges,int edge_count)

{
  double dVar4;
  double dVar5;
  uint uVar4;
  CVector3d dir_a;
  CVector3d dir_b;
  double norm_ax;
  double norm_ay;
  double norm_az;
  double norm_bx;
  double norm_by;
  double norm_bz;
  double dot;
  double min_dot;
  uint local_18;

  local_18 = 0;
  min_dot = 1.0;
  if (edge_count != 0) {
    do {
      uVar4 = local_18 + 1;
      if ((uint)edge_count <= uVar4) {
        uVar4 = 0;
      }
      dir_a.x = edges[local_18].end_pos.x - edges[local_18].start_pos.x;
      dir_a.y = edges[local_18].end_pos.y - edges[local_18].start_pos.y;
      dir_a.z = edges[local_18].end_pos.z - edges[local_18].start_pos.z;
      dVar4 = 1.0 / SQRT(dir_a.z * dir_a.z + dir_a.x * dir_a.x + dir_a.y * dir_a.y);
      norm_ax = dir_a.x * dVar4;
      norm_ay = dir_a.y * dVar4;
      norm_az = dir_a.z * dVar4;
      dir_b.x = edges[uVar4].end_pos.x - edges[local_18].end_pos.x;
      dir_b.y = edges[uVar4].end_pos.y - edges[local_18].end_pos.y;
      dir_b.z = edges[uVar4].end_pos.z - edges[local_18].end_pos.z;
      dVar5 = 1.0 / SQRT(dir_b.z * dir_b.z + dir_b.x * dir_b.x + dir_b.y * dir_b.y);
      norm_bx = dir_b.x * dVar5;
      norm_by = dir_b.y * dVar5;
      norm_bz = dir_b.z * dVar5;
      dot = norm_ax * norm_bx + norm_ay * norm_by + norm_az * norm_bz;
      if (dot < 0.0) {
        dot = -dot;
      }
      if (dot < min_dot) {
        min_dot = dot;
        output_normal->x = norm_ay * norm_bz - norm_az * norm_by;
        output_normal->y = norm_az * norm_bx - norm_ax * norm_bz;
        output_normal->z = norm_ax * norm_by - norm_ay * norm_bx;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)edge_count);
  }
  dVar4 = 1.0 / SQRT(output_normal->z * output_normal->z +
                     output_normal->x * output_normal->x + output_normal->y * output_normal->y);
  output_normal->x = output_normal->x * dVar4;
  output_normal->y = output_normal->y * dVar4;
  output_normal->z = output_normal->z * dVar4;
  return output_normal;
}
