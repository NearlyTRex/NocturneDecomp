// Name: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// Address: 0047e810
// Address Range: [[0047e810, 0047ea01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

{
  char *pcVar1;
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar9;
  int iVar6;
  int iVar7;
  int iVar10;
  int iVar8;
  int iVar11;
  char *pcVar9;
  char *pcVar10;
  int local_20;
  int local_1c;
  int local_18;
  int iVar4;
  float fVar3;
  char cVar2;
  int *piVar1;
  
  if (1 < this_ptr->frame_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 3591;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE - can't export multiple-frame model to DSE");
  }
  g_VertexCount = this_ptr->vertex_count;
  if (0 < g_VertexCount) {
    fVar3 = (float)0.00390625;
    iVar5 = 0;
    iVar8 = g_VertexCount * 0xc;
    iVar6 = 0;
    do {
      *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar6) =
           (float)*(int *)((int)&this_ptr->vertex_list->x + iVar5) * fVar3;
      *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar6) =
           (float)*(int *)((int)&this_ptr->vertex_list->y + iVar5) * fVar3;
      piVar1 = (int *)((int)&this_ptr->vertex_list->z + iVar5);
      iVar5 = iVar5 + 0xc;
      *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar6) = (float)*piVar1 * fVar3;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < iVar8);
  }
  g_PolygonCount = this_ptr->poly_count;
  local_1c = 0;
  if (0 < g_PolygonCount) {
    local_18 = 0;
    local_20 = 0;
    iVar10 = 0;
    do {
      iVar11 = 0;
      *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar10 + 0x40) = 0;
      pcVar1 = g_ModelPolygonData[0].texture_name + iVar10 + -4;
      pcVar1[0] = '\x02';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar10 + -0x14) =
           *(uint *)((int)this_ptr->poly_vert_list->vertices + local_18 + -0x14);
      iVar9 = 0;
      if (0 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar10 + -0x14)) {
        fVar4 = (float)1.52587890625e-05;
        iVar7 = iVar10;
        do {
          *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar7) =
               *(uint *)
                ((int)&this_ptr->poly_vert_list->vertices[0].vertex_index + iVar9 + local_18);
          *(float *)((int)g_ModelPolygonData[0].uv_u + iVar7) =
               (float)*(int *)((int)&this_ptr->poly_vert_list->vertices[0].texture_u +
                              iVar9 + local_18) * fVar4;
          iVar4 = iVar9 + local_18;
          iVar9 = iVar9 + 0xc;
          iVar11 = iVar11 + 1;
          *(float *)((int)g_ModelPolygonData[0].uv_v + iVar7) =
               (float)*(int *)((int)&this_ptr->poly_vert_list->vertices[0].texture_v + iVar4) *
               fVar4;
          iVar7 = iVar7 + 4;
        } while (iVar11 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar10 + -0x14));
      }
      pcVar9 = this_ptr->texture_list[*(int *)((int)this_ptr->poly_texture_index_list + local_20)].
               textures[0].texture_name;
      local_20 = local_20 + 4;
      pcVar10 = g_ModelPolygonData[0].texture_name + iVar10;
      local_18 = local_18 + 0x48;
      do {
        cVar2 = *pcVar9;
        *pcVar10 = cVar2;
        if (cVar2 == '\0') break;
        cVar3 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar3;
        pcVar10 = pcVar10 + 2;
      } while (cVar3 != '\0');
      local_1c = local_1c + 1;
      iVar10 = iVar10 + 0x184;
    } while (local_1c < g_PolygonCount);
  }
  g_PartsCount = 1;
  return;
}
