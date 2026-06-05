// Name: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// Address: 0047e810
// MANUAL RECONSTRUCTION
// Address Range: [[0047e810, 0047ea01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

{
  float fVar4;
  int iVar6;
  int iVar11;
  int local_1c;
  float fVar3;

  if (1 < this_ptr->frame_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe07;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE - can't export multiple-frame model to DSE");
  }
  g_VertexCount = this_ptr->vertex_count;
  if (0 < g_VertexCount) {
    fVar3 = (float)0.00390625;
    for (iVar6 = 0; iVar6 < g_VertexCount; iVar6 = iVar6 + 1) {
      g_LoadedVertices[iVar6].vertex.x = (float)this_ptr->vertex_list[iVar6].x * fVar3;
      g_LoadedVertices[iVar6].vertex.y = (float)this_ptr->vertex_list[iVar6].y * fVar3;
      g_LoadedVertices[iVar6].vertex.z = (float)this_ptr->vertex_list[iVar6].z * fVar3;
    }
  }
  g_PolygonCount = this_ptr->poly_count;
  if (0 < g_PolygonCount) {
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      g_ModelPolygonData[local_1c].part_assignment = 0;
      g_ModelPolygonData[local_1c].polygon_type = 2;
      g_ModelPolygonData[local_1c].vertex_indices_count =
           this_ptr->poly_vert_list[local_1c].base.base.count;
      if (0 < (int)g_ModelPolygonData[local_1c].vertex_indices_count) {
        fVar4 = (float)1.52587890625e-05;
        for (iVar11 = 0; iVar11 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
             iVar11 = iVar11 + 1) {
          g_ModelPolygonData[local_1c].vertex_indices[iVar11] =
               this_ptr->poly_vert_list[local_1c].vertices[iVar11].vertex_index;
          g_ModelPolygonData[local_1c].uv_u[iVar11] =
               (float)this_ptr->poly_vert_list[local_1c].vertices[iVar11].texture_u * fVar4;
          g_ModelPolygonData[local_1c].uv_v[iVar11] =
               (float)this_ptr->poly_vert_list[local_1c].vertices[iVar11].texture_v * fVar4;
        }
      }
      strcpy(g_ModelPolygonData[local_1c].texture_name,
             this_ptr->texture_list[this_ptr->poly_texture_index_list[local_1c]].
             textures[0].texture_name);
    }
  }
  g_PartsCount = 1;
  return;
}
