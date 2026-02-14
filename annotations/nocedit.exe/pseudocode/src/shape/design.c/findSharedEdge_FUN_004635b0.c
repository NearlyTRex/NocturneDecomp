// Name: shape_design.c_findSharedEdge_FUN_004635b0
// Address: 004635b0
// Address Range: [[004635b0, 004637c2] [004637d8, 004637fa]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_findSharedEdge_FUN_004635b0(int *edge1_vertices,int *edge2_vertices,int vertex_count,int *shared_edge_type)

#include "nocturne.h"

int __cdecl shape_design_c_findSharedEdge_FUN_004635b0(int *edge1_vertices,int *edge2_vertices,int vertex_count,int *shared_edge_type)

{
  if (*shared_edge_type == -1) {
    if ((*edge1_vertices == edge2_vertices[2]) && (edge1_vertices[1] == edge2_vertices[1])) {
      *shared_edge_type = 0;
      return 1;
    }
    if (vertex_count == 3) {
      if ((edge1_vertices[2] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        *shared_edge_type = 1;
        return 1;
      }
      if ((edge1_vertices[1] == *edge2_vertices) && (edge1_vertices[2] == edge2_vertices[2])) {
        *shared_edge_type = 2;
        return 1;
      }
    }
    else if (vertex_count == 4) {
      if ((edge1_vertices[3] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        *shared_edge_type = 3;
        return 1;
      }
      if ((edge1_vertices[1] == edge2_vertices[3]) && (edge1_vertices[2] == edge2_vertices[2])) {
        *shared_edge_type = 4;
        return 1;
      }
    }
  }
  else {
    switch(*shared_edge_type) {
    case 0:
      if ((*edge1_vertices == edge2_vertices[2]) && (edge1_vertices[1] == edge2_vertices[1])) {
        return 1;
      }
      break;
    case 1:
      if ((edge1_vertices[2] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        return 1;
      }
      break;
    case 2:
      if ((edge1_vertices[1] == *edge2_vertices) && (edge1_vertices[2] == edge2_vertices[2])) {
        return 1;
      }
      break;
    case 3:
      if ((edge1_vertices[3] == edge2_vertices[1]) && (*edge1_vertices == *edge2_vertices)) {
        return 1;
      }
      break;
    case 4:
      if ((edge1_vertices[1] == edge2_vertices[3]) && (edge1_vertices[2] == edge2_vertices[2])) {
        return 1;
      }
    }
  }
  return 0;
}
