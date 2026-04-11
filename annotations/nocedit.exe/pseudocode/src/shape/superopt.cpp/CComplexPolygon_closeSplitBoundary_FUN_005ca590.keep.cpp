// Name: shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
// Address: 005ca590
// MANUAL RECONSTRUCTION
// Address Range: [[005ca590, 005cb395] [03fc2bb0, 03fc2bf8]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary)

{
  uint uVar2;
  uint uVar3;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double min_edge_length;
  double max_edge_length;
  uint *puVar9;
  uint uVar11;
  uint *puVar14;
  uint uVar12;
  int iVar15;
  CVector3d *pCVar13;
  uint *puVar16;
  int iVar14;
  int local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  int local_14;
  CVector3d first_boundary_pt;
  CVector3d curr_boundary_pt;
  CVector3d farthest_pt;
  CVector3d farthest_pt2;
  CVector3d sort_dir;
  CVector3d ref_point;
  CVector3d boundary_a;
  CVector3d interior_a;
  CVector3d boundary_b;
  CVector3d interior_b;
  CVector3d edge_dir_a;
  CVector3d edge_dir_b;
  CVector3d gap_pt_a;
  CVector3d gap_pt_b;

  local_20 = 0;
  puVar9 = (uint *)shape_memdbg_cpp_malloc_FUN_006021da(*edge_count_ptr << 2);
  local_1c = puVar9;
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  uVar12 = 0;
  min_edge_length = 0.0;
  max_edge_length = 0.0;
  if (*edge_count_ptr != 0) {
    iVar14 = 0;
    pCVar13 = &edges->start_pos;
    do {
      if ((edges[uVar12].start_side == 0) || (edges[uVar12].end_side == 0)) {
        dVar9 = pCVar13[1].x - pCVar13->x;
        dVar10 = pCVar13[1].y - pCVar13->y;
        dVar11 = pCVar13[1].z - pCVar13->z;
        dVar12 = SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9);
        if (local_20 == 0) {
          min_edge_length = dVar12;
          max_edge_length = dVar12;
        }
        else {
          if (dVar12 < min_edge_length) {
            min_edge_length = dVar12;
          }
          if (max_edge_length < dVar12) {
            max_edge_length = dVar12;
          }
        }
        *(uint *)(iVar14 + (int)puVar9) = uVar12;
        iVar14 = iVar14 + 4;
        local_20 = local_20 + 1;
      }
      uVar12 = uVar12 + 1;
      pCVar13 = pCVar13 + 4;
    } while (uVar12 < (uint)*edge_count_ptr);
  }
  if (local_20 == 0) {
    if (is_secondary == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
    }
    shape_memdbg_cpp_free_FUN_005fe659(local_1c);
    return 0;
  }
  if ((local_20 & 1) == 0) {
    uVar2 = *puVar9;
    if (edges[uVar2].start_side == 0) {
      first_boundary_pt = edges[uVar2].start_pos;
    }
    else {
      first_boundary_pt = edges[uVar2].end_pos;
    }
    dVar9 = 0.0;
    if (1 < local_20) {
      puVar16 = puVar9 + 1;
      do {
        uVar2 = *puVar16;
        if (edges[uVar2].start_side == 0) {
          curr_boundary_pt = edges[uVar2].start_pos;
        }
        else {
          curr_boundary_pt = edges[uVar2].end_pos;
        }
        dVar10 = first_boundary_pt.x - curr_boundary_pt.x;
        dVar11 = first_boundary_pt.y - curr_boundary_pt.y;
        dVar12 = first_boundary_pt.z - curr_boundary_pt.z;
        dVar10 = SQRT(dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10);
        if (dVar9 < dVar10) {
          farthest_pt = curr_boundary_pt;
          dVar9 = dVar10;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 < puVar9 + local_20);
    }
    dVar9 = 0.0;
    if (local_20 != 0) {
      puVar16 = puVar9 + local_20;
      do {
        uVar2 = *puVar9;
        if (edges[uVar2].start_side == 0) {
          curr_boundary_pt = edges[uVar2].start_pos;
        }
        else {
          curr_boundary_pt = edges[uVar2].end_pos;
        }
        dVar10 = farthest_pt.x - curr_boundary_pt.x;
        dVar12 = farthest_pt.y - curr_boundary_pt.y;
        dVar11 = farthest_pt.z - curr_boundary_pt.z;
        dVar10 = SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar10 * dVar10);
        if (dVar9 < dVar10) {
          farthest_pt2 = curr_boundary_pt;
          dVar9 = dVar10;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar16);
    }
    sort_dir.x = farthest_pt2.x - farthest_pt.x;
    sort_dir.y = farthest_pt2.y - farthest_pt.y;
    sort_dir.z = farthest_pt2.z - farthest_pt.z;
    dVar9 = (max_edge_length * 10) /
            SQRT(sort_dir.z * sort_dir.z + sort_dir.x * sort_dir.x + sort_dir.y * sort_dir.y);
    local_28 = local_20 - 1;
    ref_point.x = farthest_pt2.x + sort_dir.x * dVar9;
    ref_point.y = farthest_pt2.y + sort_dir.y * dVar9;
    ref_point.z = farthest_pt2.z + sort_dir.z * dVar9;
    do {
      local_14 = 0;
      puVar16 = local_1c;
      if (local_1c < local_1c + local_28) {
        do {
          uVar2 = *puVar16;
          uVar3 = puVar16[1];
          if (edges[uVar2].start_side == 0) {
            boundary_a = edges[uVar2].start_pos;
            interior_a = edges[uVar2].end_pos;
          }
          else {
            boundary_a = edges[uVar2].end_pos;
            interior_a = edges[uVar2].start_pos;
          }
          if (edges[uVar3].start_side == 0) {
            boundary_b = edges[uVar3].start_pos;
            interior_b = edges[uVar3].end_pos;
          }
          else {
            boundary_b = edges[uVar3].end_pos;
            interior_b = edges[uVar3].start_pos;
          }
          edge_dir_a.x = interior_a.x - boundary_a.x;
          edge_dir_a.y = interior_a.y - boundary_a.y;
          edge_dir_a.z = interior_a.z - boundary_a.z;
          edge_dir_b.x = interior_b.x - boundary_b.x;
          edge_dir_b.y = interior_b.y - boundary_b.y;
          edge_dir_b.z = interior_b.z - boundary_b.z;
          dVar9 = min_edge_length / SQRT(edge_dir_a.z * edge_dir_a.z +
                                edge_dir_a.x * edge_dir_a.x + edge_dir_a.y * edge_dir_a.y);
          dVar10 = ref_point.x - (boundary_a.x + edge_dir_a.x * dVar9);
          dVar11 = ref_point.y - (boundary_a.y + edge_dir_a.y * dVar9);
          dVar12 = ref_point.z - (boundary_a.z + edge_dir_a.z * dVar9);
          dVar9 = min_edge_length / SQRT(edge_dir_b.z * edge_dir_b.z +
                                edge_dir_b.x * edge_dir_b.x + edge_dir_b.y * edge_dir_b.y);
          double dVar13a = ref_point.x - (boundary_b.x + edge_dir_b.x * dVar9);
          double dVar14a = ref_point.y - (boundary_b.y + edge_dir_b.y * dVar9);
          double dVar15a = ref_point.z - (boundary_b.z + edge_dir_b.z * dVar9);
          if (SQRT(dVar15a * dVar15a + dVar14a * dVar14a + dVar13a * dVar13a) <
              SQRT(dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10)) {
            uVar2 = *puVar16;
            *puVar16 = puVar16[1];
            local_14 = 1;
            puVar16[1] = uVar2;
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 < local_1c + local_28);
      }
    } while (local_14 != 0);
    if (edges[*local_1c].end_side != 0) {
      puVar16 = local_1c + (local_20 - 1);
      for (puVar14 = local_1c; puVar14 < local_1c + (local_20 >> 1); puVar14 = puVar14 + 1) {
        uVar2 = *puVar14;
        *puVar14 = *puVar16;
        *puVar16 = uVar2;
        puVar16 = puVar16 + -1;
      }
    }
    if (edges[*local_1c].end_side == 0) {
      if (local_20 != 0) {
        local_24 = local_1c + local_20;
        puVar16 = local_1c;
        do {
          uVar2 = *puVar16;
          if (edges[uVar2].start_side == 0) {
            gap_pt_a = edges[uVar2].start_pos;
          }
          else {
            gap_pt_a = edges[uVar2].end_pos;
          }
          uVar2 = puVar16[1];
          if (edges[uVar2].start_side == 0) {
            gap_pt_b = edges[uVar2].start_pos;
          }
          else {
            gap_pt_b = edges[uVar2].end_pos;
          }
          dVar9 = gap_pt_b.x - gap_pt_a.x;
          dVar10 = gap_pt_b.y - gap_pt_a.y;
          dVar11 = gap_pt_b.z - gap_pt_a.z;
          if (9.9999999999999995e-08 <= SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9)) {
            uVar3 = *puVar16;
            uVar2 = uVar3 + 1;
            memmove
                      (edges + uVar3 + 2,edges + uVar2,(*edge_count_ptr - uVar2) * 0x60);
            if (local_20 != 0) {
              puVar14 = local_1c;
              do {
                if (uVar2 <= *puVar14) {
                  *puVar14 = *puVar14 + 1;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 < local_1c + local_20);
            }
            edges[uVar2].start_pos = edges[uVar3].end_pos;
            edges[uVar2].start_uv[0] = edges[uVar3].end_uv[0];
            edges[uVar2].start_uv[1] = edges[uVar3].end_uv[1];
            uVar3 = puVar16[1];
            edges[uVar2].end_pos = edges[uVar3].start_pos;
            edges[uVar2].end_uv[0] = edges[uVar3].start_uv[0];
            edges[uVar2].end_uv[1] = edges[uVar3].start_uv[1];
            *edge_count_ptr = *edge_count_ptr + 1;
          }
          puVar16 = puVar16 + 2;
        } while (puVar16 < local_24);
      }
      shape_memdbg_cpp_free_FUN_005fe659(local_1c);
      return 1;
    }
    shape_superopt_cpp_logToFile_FUN_005c7910("Complex (split) edge list does not have proper vertex arrangement");
    shape_memdbg_cpp_free_FUN_005fe659(local_1c);
    return 0;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Uneven number of edges");
  shape_memdbg_cpp_free_FUN_005fe659(local_1c);
  return 0;
}
