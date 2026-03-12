// Name: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
// Address: 0048f960
// Address Range: [[0048f960, 0048fa4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_load_FUN_0048f960(CDSEModel *this_ptr)

{
  char cVar2;
  int iVar2;
  char *pcVar3;
  SShapeEditorPolygon *pSVar4;
  SModelPartName *pSVar5;
  SShapeEditorPolygon *pSVar6;
  int local_14;
  char cVar1;
  
  g_PartsCount = 1;
  pcVar3 = this_ptr->model_name;
  pSVar5 = g_ModelPartNames;
  do {
    cVar1 = *pcVar3;
    pSVar5->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pSVar5 + 1) = cVar2;
    pSVar5 = (SModelPartName *)((int)pSVar5 + 2);
  } while (cVar2 != '\0');
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
    pSVar4 = this_ptr->polygons + local_14;
    pSVar6 = g_ModelPolygonData + local_14;
    for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar6->polygon_type = pSVar4->polygon_type;
      pSVar4 = (SShapeEditorPolygon *)pSVar4->texture_name;
      pSVar6 = (SShapeEditorPolygon *)pSVar6->texture_name;
    }
    g_ModelPolygonData[local_14].part_assignment = 0;
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
}
