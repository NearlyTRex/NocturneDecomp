// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// MANUAL RECONSTRUCTION
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  double dVar2;
  int iVar3;
  int iVar7;
  int iVar6;
  int iVar8;
  char *str1;
  int local_10;
  double dVar3;
  SMRGLPrimitiveQuad *poly;

  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  dVar3 = 256;
  if (0 < this_ptr->vertex_count) {
    for (iVar6 = 0; iVar6 < this_ptr->vertex_count; iVar6 = iVar6 + 1) {
      this_ptr->vertex_list[iVar6].x =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar6].vertex.x * dVar3));
      this_ptr->vertex_list[iVar6].y =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar6].vertex.y * dVar3));
      this_ptr->vertex_list[iVar6].z =
           (int)ROUND(ROUND((double)g_LoadedVertices[iVar6].vertex.z * dVar3));
    }
  }
  this_ptr->texture_count = 0;
  if (0 < this_ptr->poly_count) {
    for (local_10 = 0; local_10 < this_ptr->poly_count; local_10 = local_10 + 1) {
      poly = this_ptr->poly_vert_list + local_10;
      poly->base.base.count = g_ModelPolygonData[local_10].vertex_indices_count;
      dVar2 = 65536;
      if (0 < (int)g_ModelPolygonData[local_10].vertex_indices_count) {
        for (iVar8 = 0; iVar8 < (int)g_ModelPolygonData[local_10].vertex_indices_count;
             iVar8 = iVar8 + 1) {
          poly->vertices[iVar8].vertex_index = g_ModelPolygonData[local_10].vertex_indices[iVar8];
          poly->vertices[iVar8].texture_u =
               (int)ROUND(ROUND((double)g_ModelPolygonData[local_10].uv_u[iVar8] * dVar2));
          poly->vertices[iVar8].texture_v =
               (int)ROUND(ROUND((double)g_ModelPolygonData[local_10].uv_v[iVar8] * dVar2));
        }
      }
      iVar3 = 0;
      if (0 < this_ptr->texture_count) {
        str1 = this_ptr->texture_list[0].textures[0].texture_name;
        do {
          iVar7 = _stricmp(str1,g_ModelPolygonData[local_10].texture_name);
          if (iVar7 == 0) break;
          iVar3 = iVar3 + 1;
          str1 = str1 + 0x48;
        } while (iVar3 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar3) {
        if (299 < iVar3) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        strcpy(this_ptr->texture_list[iVar3].textures[0].texture_name,
               g_ModelPolygonData[local_10].texture_name);
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      this_ptr->poly_texture_index_list[local_10] = iVar3;
    }
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
