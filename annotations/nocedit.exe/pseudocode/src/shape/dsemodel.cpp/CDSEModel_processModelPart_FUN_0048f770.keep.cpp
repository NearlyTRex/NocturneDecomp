// Name: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
// Address: 0048f770
// MANUAL RECONSTRUCTION
// Address Range: [[0048f770, 0048f958] [00604def, 00604e15]]
// Convention: __cdecl
// Signature: void __cdecl shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index)

{
  int iVar4;
  uint uVar2;
  uint *puVar6;
  uint *puVar7;
  uint *puVar10;
  uint *puVar11;
  int local_18;
  int local_14;

  this_ptr->vertex_count = 0;
  this_ptr->polygon_count = 0;
  strcpy(this_ptr->model_name,g_ModelPartNames[part_index].name);
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    if (g_ModelPolygonData[local_18].part_assignment == part_index) {
      memcpy(this_ptr->polygons + this_ptr->polygon_count,g_ModelPolygonData + local_18,sizeof(SShapeEditorPolygon));
      this_ptr->polygon_count = this_ptr->polygon_count + 1;
    }
  }
  for (local_18 = 0; local_18 < this_ptr->polygon_count; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)this_ptr->polygons[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660
                (this_ptr,this_ptr->polygons[local_18].vertex_indices[local_14]);
    }
  }
  for (local_18 = 0; local_18 < this_ptr->polygon_count; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)this_ptr->polygons[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      uVar2 = shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0
                        (this_ptr,this_ptr->polygons[local_18].vertex_indices[local_14]);
      this_ptr->polygons[local_18].vertex_indices[local_14] = uVar2;
    }
  }
  for (local_18 = 0; local_18 < this_ptr->vertex_count; local_18 = local_18 + 1) {
    iVar4 = g_VertexIdRegistry[local_18];
    this_ptr->vertices[local_18].vertex.x = g_LoadedVertices[iVar4].vertex.x;
    this_ptr->vertices[local_18].vertex.y = g_LoadedVertices[iVar4].vertex.y;
    this_ptr->vertices[local_18].vertex.z = g_LoadedVertices[iVar4].vertex.z;
    this_ptr->vertices[local_18].u = g_LoadedVertices[iVar4].u;
    this_ptr->vertices[local_18].v = g_LoadedVertices[iVar4].v;
  }
  return;
}
