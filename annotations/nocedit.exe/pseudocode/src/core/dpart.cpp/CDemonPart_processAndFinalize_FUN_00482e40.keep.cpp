// Name: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// Address: 00482e40
// MANUAL RECONSTRUCTION
// Address Range: [[00482e40, 00482fa3]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

{
  int iVar2;
  int iVar5;
  double dVar2;
  
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  if (enable_vertex_reduction != 0) {
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
  }
  if (enable_polygon_optimize != 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  this_ptr->vertex_count = g_VertexCount;
  iVar5 = 0;
  this_ptr->face_count = g_PolygonCount;
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  dVar2 = 256;
  if (0 < this_ptr->vertex_count) {
    do {
      this_ptr->vertex_positions[iVar5].x =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar5].vertex.x * dVar2));
      this_ptr->vertex_positions[iVar5].y =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar5].vertex.y * dVar2));
      this_ptr->vertex_positions[iVar5].z =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar5].vertex.z * dVar2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->vertex_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    do {
      this_ptr->face_data[iVar2].vertex_index_1 = g_ModelPolygonData[iVar2].vertex_indices[0];
      this_ptr->face_data[iVar2].vertex_index_2 = g_ModelPolygonData[iVar2].vertex_indices[1];
      this_ptr->face_data[iVar2].vertex_index_3 = g_ModelPolygonData[iVar2].vertex_indices[2];
      if (g_ModelPolygonData[iVar2].vertex_indices_count == 4) {
        this_ptr->face_data[iVar2].vertex_index_4 = g_ModelPolygonData[iVar2].vertex_indices[3];
      }
      else {
        this_ptr->face_data[iVar2].vertex_index_4 = 0xffffffff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->face_count);
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  return;
}
