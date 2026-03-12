// Name: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
// Address: 0048f770
// Address Range: [[0048f770, 0048f958]]
// Convention: __cdecl
// Signature: void __cdecl shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(CDSEModel *this_ptr,uint part_index)

{
  char cVar2;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  SShapeEditorPolygon *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar12 = 0;
  this_ptr->vertex_count = 0;
  this_ptr->polygon_count = 0;
  pcVar4 = g_ModelPartNames[part_index].name;
  pcVar8 = this_ptr->model_name;
  do {
    cVar1 = ((SModelPartName *)pcVar4)->name[0];
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = ((SModelPartName *)pcVar4)->name[1];
    pcVar4 = ((SModelPartName *)pcVar4)->name + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    if (g_ModelPolygonData[local_18].part_assignment == part_index) {
      pSVar5 = g_ModelPolygonData + local_18;
      pSVar9 = this_ptr->polygons + this_ptr->polygon_count;
      for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
        pSVar9->polygon_type = pSVar5->polygon_type;
        pSVar5 = (SShapeEditorPolygon *)pSVar5->texture_name;
        pSVar9 = (SShapeEditorPolygon *)pSVar9->texture_name;
      }
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
    puVar10 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + local_18 * 0x14 + 8);
    puVar6 = (uint *)(g_VertexIdRegistry[local_18] * 0x14 + 0x1626410 + (uint)bVar12 * -8);
    this_ptr->vertices[local_18].vertex.x = g_LoadedVertices[g_VertexIdRegistry[local_18]].vertex.x;
    puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar7 = puVar6 + (uint)bVar12 * -2 + 1;
    *puVar10 = *puVar6;
    *puVar11 = *puVar7;
    puVar11[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         (puVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  }
  return;
}
