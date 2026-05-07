// Name: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
// Address: 0048f960
// MANUAL RECONSTRUCTION
// Address Range: [[0048f960, 0048fa4a] [00604dcb, 00604dee]]
// Convention: __cdecl
// Signature: void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)

{
  int local_14;

  g_PartsCount = 1;
  strcpy(g_ModelPartNames[0].name,this_ptr->model_name);
  g_VertexCount = this_ptr->vertex_count;
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    g_LoadedVertices[local_14].vertex.x = this_ptr->vertices[local_14].vertex.x;
    g_LoadedVertices[local_14].vertex.y = this_ptr->vertices[local_14].vertex.y;
    g_LoadedVertices[local_14].vertex.z = this_ptr->vertices[local_14].vertex.z;
    g_LoadedVertices[local_14].u = this_ptr->vertices[local_14].u;
    g_LoadedVertices[local_14].v = this_ptr->vertices[local_14].v;
  }
  g_PolygonCount = this_ptr->polygon_count;
  for (local_14 = 0; local_14 < this_ptr->polygon_count; local_14 = local_14 + 1) {
    g_ModelPolygonData[local_14] = this_ptr->polygons[local_14];
    g_ModelPolygonData[local_14].part_assignment = 0;
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
}
