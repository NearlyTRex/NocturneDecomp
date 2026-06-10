// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// MANUAL RECONSTRUCTION
// Address Range: [[005d47b0, 005d57f3] [0060522c, 006052a3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
  int iVar16;
  int iVar17;
  CVert *v0;
  CVert *v1;
  CVert *v2;
  CPoly *source;
  uint candidate_idx;
  int new_polys_remaining;
  uint poly_index;
  void *progress_state;
  char msg_buf[256];
  CVector3d candidate_pos;
  double min_x, min_y, min_z;
  double max_x, max_y, max_z;
  CVector3d *edge_start;
  CVector3d *edge_end;
  CP2D *uv_edge_start;
  CP2D *uv_edge_end;
  int slot_replace;
  int slot_keep;
  double dx, dy, dz;
  double px, py, pz;
  double t;
  double new_u;
  double new_v;
  CPoly new_triangle;

  if (validate_first != 0) {
    iVar16 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar16 == 0) {
      return 0;
    }
  }
  progress_state = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    progress_state = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  new_polys_remaining = this_ptr->vertex_count;
  poly_index = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((progress_state != (void *)0x0) && ((char)poly_index == '\0')) {
        _sprintf(msg_buf,"Deleting T-Junctions (%d deleted so far)",0);
      }
      source = this_ptr->poly_array + poly_index;
      v0 = this_ptr->vertex_data + source->vertex_idx_0;
      v1 = this_ptr->vertex_data + source->vertex_idx_1;
      v2 = this_ptr->vertex_data + source->vertex_idx_2;

      min_x = (v0->position).x;
      if ((v1->position).x < min_x) min_x = (v1->position).x;
      if ((v2->position).x < min_x) min_x = (v2->position).x;
      min_y = (v0->position).y;
      if ((v1->position).y < min_y) min_y = (v1->position).y;
      if ((v2->position).y < min_y) min_y = (v2->position).y;
      min_z = (v0->position).z;
      if ((v1->position).z < min_z) min_z = (v1->position).z;
      if ((v2->position).z < min_z) min_z = (v2->position).z;
      max_x = (v0->position).x;
      if (max_x < (v1->position).x) max_x = (v1->position).x;
      if (max_x < (v2->position).x) max_x = (v2->position).x;
      max_y = (v0->position).y;
      if (max_y < (v1->position).y) max_y = (v1->position).y;
      if (max_y < (v2->position).y) max_y = (v2->position).y;
      max_z = (v0->position).z;
      if (max_z < (v1->position).z) max_z = (v1->position).z;
      if (max_z < (v2->position).z) max_z = (v2->position).z;
      min_x = min_x - 0.0001;
      min_y = min_y - 0.0001;
      min_z = min_z - 0.0001;
      max_x = max_x + 0.0001;
      max_y = max_y + 0.0001;
      max_z = max_z + 0.0001;

      candidate_idx = 0;
      if (this_ptr->vertex_count != 0) {
        do {
          if (((candidate_idx != (uint)source->vertex_idx_0) &&
               (candidate_idx != (uint)source->vertex_idx_1)) &&
              (candidate_idx != (uint)source->vertex_idx_2)) {
            candidate_pos = this_ptr->vertex_data[candidate_idx].position;
            if (((min_x <= candidate_pos.x) && (candidate_pos.x <= max_x)) &&
                ((min_y <= candidate_pos.y && ((candidate_pos.y <= max_y && (min_z <= candidate_pos.z)))))
                && (candidate_pos.z <= max_z)) {
              iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 (&candidate_pos,&v0->position,&v1->position);
              if (iVar16 != 0) {
                edge_start = &v0->position;
                edge_end = &v1->position;
                uv_edge_start = &source->uv_coords[0];
                uv_edge_end = &source->uv_coords[1];
                slot_replace = 1;
                slot_keep = 2;
              }
              else {
                iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   (&candidate_pos,&v1->position,&v2->position);
                if (iVar16 != 0) {
                  edge_start = &v1->position;
                  edge_end = &v2->position;
                  uv_edge_start = &source->uv_coords[1];
                  uv_edge_end = &source->uv_coords[2];
                  slot_replace = 2;
                  slot_keep = 0;
                }
                else {
                  iVar16 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     (&candidate_pos,&v2->position,&v0->position);
                  if (iVar16 == 0) goto LAB_NEXT;
                  edge_start = &v2->position;
                  edge_end = &v0->position;
                  uv_edge_start = &source->uv_coords[2];
                  uv_edge_end = &source->uv_coords[0];
                  slot_replace = 0;
                  slot_keep = 1;
                }
              }
              new_polys_remaining = new_polys_remaining + -1;
              if (new_polys_remaining < 1) {
                shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(progress_state);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&new_triangle,(CObj *)0x0);
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(&new_triangle,source,this_ptr);

              dx = edge_end->x - edge_start->x;
              dy = edge_end->y - edge_start->y;
              dz = edge_end->z - edge_start->z;
              px = candidate_pos.x - edge_start->x;
              py = candidate_pos.y - edge_start->y;
              pz = candidate_pos.z - edge_start->z;
              t = SQRT(px * px + py * py + pz * pz) / SQRT(dx * dx + dy * dy + dz * dz);
              new_u = uv_edge_start->impl.x + (uv_edge_end->impl.x - uv_edge_start->impl.x) * t;
              new_v = uv_edge_start->impl.y + (uv_edge_end->impl.y - uv_edge_start->impl.y) * t;

              new_triangle.vertex_idx_0 = candidate_idx;
              new_triangle.vertex_idx_1 = (&source->vertex_idx_0)[slot_replace];
              new_triangle.vertex_idx_2 = (&source->vertex_idx_0)[slot_keep];
              new_triangle.uv_coords[0].impl.x = new_u;
              new_triangle.uv_coords[0].impl.y = new_v;
              new_triangle.uv_coords[1] = source->uv_coords[slot_replace];
              new_triangle.uv_coords[2] = source->uv_coords[slot_keep];

              (&source->vertex_idx_0)[slot_replace] = candidate_idx;
              source->uv_coords[slot_replace].impl.x = new_u;
              source->uv_coords[slot_replace].impl.y = new_v;

              iVar16 = this_ptr->poly_count;
              iVar17 = (*this_ptr->vtable->addPolygons)(this_ptr,1);
              if (iVar17 == 0) {
                shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(progress_state);
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&new_triangle,0);
                return 0;
              }
              (*(this_ptr->poly_array[iVar16].vtable)->copyFrom)
                        (this_ptr->poly_array + iVar16,&new_triangle,this_ptr);
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&new_triangle,0);
              break;
            }
          }
LAB_NEXT:
          candidate_idx = candidate_idx + 1;
        } while (candidate_idx < (uint)this_ptr->vertex_count);
      }
      poly_index = poly_index + 1;
    } while (poly_index < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(progress_state);
  return 1;
}
