// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// MANUAL RECONSTRUCTION
// Address Range: [[005ce580, 005d0004] [006058d9, 006059c0] [0060f38f, 0060f3fd] [03fc56e7, 03fc5807]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
  CVector3d other_min, other_max, this_min, this_max;
  CVector3d dummy_intersect;
  CVert *other_verts;
  CVert *this_verts;
  int iVar5;
  int iVar19;
  CVector3d positions[3];
  CP2D uvs[3];
  CVector3d plane_point;
  CVector3d plane_normal;
  double plane_d;
  double sdist[3];
  int alone_idx, other1_idx, other2_idx;
  int plane_idx, edge_a_idx, edge_b_idx;
  double t1, t2, t;
  CVector3d cut1_pos, cut2_pos, cut_pos;
  CVector2d cut1_uv, cut2_uv, cut_uv;

  // AABB overlap check
  (*other_poly->vtable->getBounds)(other_poly, &other_min, &other_max);
  (*this_ptr->vtable->getBounds)(this_ptr, &this_min, &this_max);
  if (!((other_min.x <= this_max.x) && (this_min.x <= other_max.x) &&
        (other_min.y <= this_max.y) && (this_min.y <= other_max.y) &&
        (other_min.z <= this_max.z) && (this_min.z <= other_max.z))) {
    return 0;
  }

  // Edge/triangle intersection test — at least one edge of either triangle must cross the other
  other_verts = other_poly->parent_obj->vertex_data;
  iVar5 = (*this_ptr->vtable->rayIntersect)(this_ptr,
            &other_verts[other_poly->vertex_idx_0].position,
            &other_verts[other_poly->vertex_idx_1].position, &dummy_intersect);
  if (iVar5 == 0) {
    iVar19 = (*this_ptr->vtable->rayIntersect)(this_ptr,
              &other_verts[other_poly->vertex_idx_1].position,
              &other_verts[other_poly->vertex_idx_2].position, &dummy_intersect);
    if (iVar19 == 0) {
      iVar19 = (*this_ptr->vtable->rayIntersect)(this_ptr,
                &other_verts[other_poly->vertex_idx_2].position,
                &other_verts[other_poly->vertex_idx_0].position, &dummy_intersect);
      if (iVar19 == 0) {
        this_verts = this_ptr->parent_obj->vertex_data;
        iVar19 = (*other_poly->vtable->rayIntersect)(other_poly,
                  &this_verts[this_ptr->vertex_idx_0].position,
                  &this_verts[this_ptr->vertex_idx_1].position, &dummy_intersect);
        if (iVar19 == 0) {
          iVar19 = (*other_poly->vtable->rayIntersect)(other_poly,
                    &this_verts[this_ptr->vertex_idx_1].position,
                    &this_verts[this_ptr->vertex_idx_2].position, &dummy_intersect);
          if (iVar19 == 0) {
            iVar19 = (*other_poly->vtable->rayIntersect)(other_poly,
                      &this_verts[this_ptr->vertex_idx_2].position,
                      &this_verts[this_ptr->vertex_idx_0].position, &dummy_intersect);
            if (iVar19 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }

  memset(out_result, 0, 0x148);

  // Load this_ptr's triangle: 3 vertex positions and 3 UV coords
  this_verts = this_ptr->parent_obj->vertex_data;
  positions[0] = this_verts[this_ptr->vertex_idx_0].position;
  positions[1] = this_verts[this_ptr->vertex_idx_1].position;
  positions[2] = this_verts[this_ptr->vertex_idx_2].position;
  uvs[0] = this_ptr->uv_coords[0];
  uvs[1] = this_ptr->uv_coords[1];
  uvs[2] = this_ptr->uv_coords[2];

  // other_poly's plane: anchor point + normal → scalar equation normal·X = plane_d
  plane_point = other_verts[other_poly->vertex_idx_0].position;
  plane_normal = other_poly->normal.impl;
  plane_d = plane_normal.x * plane_point.x + plane_normal.y * plane_point.y + plane_normal.z * plane_point.z;

  // Signed distance of each this_ptr vertex to other_poly's plane, epsilon-clamped to zero
  sdist[0] = plane_normal.x * positions[0].x + plane_normal.y * positions[0].y + plane_normal.z * positions[0].z - plane_d;
  sdist[1] = plane_normal.x * positions[1].x + plane_normal.y * positions[1].y + plane_normal.z * positions[1].z - plane_d;
  sdist[2] = plane_normal.x * positions[2].x + plane_normal.y * positions[2].y + plane_normal.z * positions[2].z - plane_d;
  if ((sdist[0] < 1e-08) && (-1e-08 <= sdist[0])) sdist[0] = 0.0;
  if ((sdist[1] < 1e-08) && (-1e-08 < sdist[1])) sdist[1] = 0.0;
  if ((sdist[2] < 1e-08) && (-1e-08 <= sdist[2])) sdist[2] = 0.0;

  // Need at least one vertex strictly on each side of the plane
  if (!(((sdist[0] < 0.0) || (sdist[1] < 0.0) || (sdist[2] < 0.0)) &&
        ((0.0 < sdist[0]) || (0.0 < sdist[1]) || (0.0 < sdist[2])))) {
    return 0;
  }

  if ((sdist[0] != 0.0) && (sdist[1] != 0.0) && (sdist[2] != 0.0)) {
    // Case A: no vertex lies on the plane — two edges are cut, producing a triangle + a quad

    // Identify the "alone" vertex (the one on its own side of the plane)
    if (((0.0 <= sdist[1]) && (0.0 <= sdist[2])) || ((sdist[1] < 0.0) && (sdist[2] < 0.0))) {
      alone_idx = 0; other1_idx = 1; other2_idx = 2;
    } else if (((0.0 <= sdist[0]) && (0.0 <= sdist[2])) || ((sdist[0] < 0.0) && (sdist[2] < 0.0))) {
      alone_idx = 1; other1_idx = 2; other2_idx = 0;
    } else {
      alone_idx = 2; other1_idx = 0; other2_idx = 1;
    }

    // Cut points on the two edges connecting "alone" to the other two
    t1 = sdist[other1_idx] / (sdist[other1_idx] - sdist[alone_idx]);
    cut1_pos.x = positions[other1_idx].x - (positions[other1_idx].x - positions[alone_idx].x) * t1;
    cut1_pos.y = positions[other1_idx].y - (positions[other1_idx].y - positions[alone_idx].y) * t1;
    cut1_pos.z = positions[other1_idx].z - (positions[other1_idx].z - positions[alone_idx].z) * t1;
    cut1_uv.x = uvs[other1_idx].impl.x - (uvs[other1_idx].impl.x - uvs[alone_idx].impl.x) * t1;
    cut1_uv.y = uvs[other1_idx].impl.y - (uvs[other1_idx].impl.y - uvs[alone_idx].impl.y) * t1;

    t2 = sdist[other2_idx] / (sdist[other2_idx] - sdist[alone_idx]);
    cut2_pos.x = positions[other2_idx].x - (positions[other2_idx].x - positions[alone_idx].x) * t2;
    cut2_pos.y = positions[other2_idx].y - (positions[other2_idx].y - positions[alone_idx].y) * t2;
    cut2_pos.z = positions[other2_idx].z - (positions[other2_idx].z - positions[alone_idx].z) * t2;
    cut2_uv.x = uvs[other2_idx].impl.x - (uvs[other2_idx].impl.x - uvs[alone_idx].impl.x) * t2;
    cut2_uv.y = uvs[other2_idx].impl.y - (uvs[other2_idx].impl.y - uvs[alone_idx].impl.y) * t2;

    if (0.0 < sdist[alone_idx]) {
      // "alone" is on positive side: poly1 = triangle on positive side, poly2 = quad on negative side
      (out_result->poly1).vertex_count = 3;
      (out_result->poly1).vertices[0] = positions[alone_idx];
      (out_result->poly1).uvs[0] = uvs[alone_idx].impl;
      (out_result->poly1).vertices[1] = cut1_pos;
      (out_result->poly1).uvs[1] = cut1_uv;
      (out_result->poly1).vertices[2] = cut2_pos;
      (out_result->poly1).uvs[2] = cut2_uv;

      (out_result->poly2).vertex_count = 4;
      (out_result->poly2).vertices[0] = cut1_pos;
      (out_result->poly2).uvs[0] = cut1_uv;
      (out_result->poly2).vertices[1] = positions[other1_idx];
      (out_result->poly2).uvs[1] = uvs[other1_idx].impl;
      (out_result->poly2).vertices[2] = positions[other2_idx];
      (out_result->poly2).uvs[2] = uvs[other2_idx].impl;
      (out_result->poly2).vertices[3] = cut2_pos;
      (out_result->poly2).uvs[3] = cut2_uv;
      return 1;
    }

    // "alone" is on negative side: poly1 = quad, poly2 = triangle
    (out_result->poly1).vertex_count = 4;
    (out_result->poly1).vertices[0] = cut1_pos;
    (out_result->poly1).uvs[0] = cut1_uv;
    (out_result->poly1).vertices[1] = positions[other1_idx];
    (out_result->poly1).uvs[1] = uvs[other1_idx].impl;
    (out_result->poly1).vertices[2] = positions[other2_idx];
    (out_result->poly1).uvs[2] = uvs[other2_idx].impl;
    (out_result->poly1).vertices[3] = cut2_pos;
    (out_result->poly1).uvs[3] = cut2_uv;

    (out_result->poly2).vertex_count = 3;
    (out_result->poly2).vertices[0] = positions[alone_idx];
    (out_result->poly2).uvs[0] = uvs[alone_idx].impl;
    (out_result->poly2).vertices[1] = cut1_pos;
    (out_result->poly2).uvs[1] = cut1_uv;
    (out_result->poly2).vertices[2] = cut2_pos;
    (out_result->poly2).uvs[2] = cut2_uv;
    return 1;
  }

  // Case B: exactly one vertex lies on the plane — the other two straddle it.
  // edge_a_idx / edge_b_idx = the two non-zero-sdist vertices (in the decomp's selection order)
  if (sdist[0] == 0.0) {
    edge_a_idx = 1; edge_b_idx = 2; plane_idx = 0;
  } else if (sdist[1] == 0.0) {
    edge_a_idx = 2; edge_b_idx = 0; plane_idx = 1;
  } else {
    edge_a_idx = 0; edge_b_idx = 1; plane_idx = 2;
  }

  // Single cut point on the edge connecting the two straddling vertices
  t = sdist[edge_a_idx] / (sdist[edge_a_idx] - sdist[edge_b_idx]);
  cut_pos.x = positions[edge_a_idx].x - (positions[edge_a_idx].x - positions[edge_b_idx].x) * t;
  cut_pos.y = positions[edge_a_idx].y - (positions[edge_a_idx].y - positions[edge_b_idx].y) * t;
  cut_pos.z = positions[edge_a_idx].z - (positions[edge_a_idx].z - positions[edge_b_idx].z) * t;
  cut_uv.x = uvs[edge_a_idx].impl.x - (uvs[edge_a_idx].impl.x - uvs[edge_b_idx].impl.x) * t;
  cut_uv.y = uvs[edge_a_idx].impl.y - (uvs[edge_a_idx].impl.y - uvs[edge_b_idx].impl.y) * t;

  if (0.0 < sdist[edge_a_idx]) {
    // edge_a is on positive side: poly1 = positive-side triangle, poly2 = negative-side triangle
    (out_result->poly1).vertex_count = 3;
    (out_result->poly1).vertices[0] = positions[plane_idx];
    (out_result->poly1).uvs[0] = uvs[plane_idx].impl;
    (out_result->poly1).vertices[1] = positions[edge_a_idx];
    (out_result->poly1).uvs[1] = uvs[edge_a_idx].impl;
    (out_result->poly1).vertices[2] = cut_pos;
    (out_result->poly1).uvs[2] = cut_uv;

    (out_result->poly2).vertex_count = 3;
    (out_result->poly2).vertices[0] = positions[plane_idx];
    (out_result->poly2).uvs[0] = uvs[plane_idx].impl;
    (out_result->poly2).vertices[1] = cut_pos;
    (out_result->poly2).uvs[1] = cut_uv;
    (out_result->poly2).vertices[2] = positions[edge_b_idx];
    (out_result->poly2).uvs[2] = uvs[edge_b_idx].impl;
    return 1;
  }

  // edge_a is on negative side (or exactly 0, but that's ruled out): roles swap
  (out_result->poly2).vertex_count = 3;
  (out_result->poly2).vertices[0] = positions[plane_idx];
  (out_result->poly2).uvs[0] = uvs[plane_idx].impl;
  (out_result->poly2).vertices[1] = positions[edge_a_idx];
  (out_result->poly2).uvs[1] = uvs[edge_a_idx].impl;
  (out_result->poly2).vertices[2] = cut_pos;
  (out_result->poly2).uvs[2] = cut_uv;

  (out_result->poly1).vertex_count = 3;
  (out_result->poly1).vertices[0] = positions[plane_idx];
  (out_result->poly1).uvs[0] = uvs[plane_idx].impl;
  (out_result->poly1).vertices[1] = cut_pos;
  (out_result->poly1).uvs[1] = cut_uv;
  (out_result->poly1).vertices[2] = positions[edge_b_idx];
  (out_result->poly1).uvs[2] = uvs[edge_b_idx].impl;
  return 1;
}
