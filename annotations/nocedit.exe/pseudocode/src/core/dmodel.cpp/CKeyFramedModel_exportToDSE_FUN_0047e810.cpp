// Name: core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
// Address: 0047e810
// Address Range: [[0047e810, 0047ea01]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(CKeyFramedModel *this_ptr)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  if (1 < this_ptr->frame_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe07;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE - can't export multiple-frame model to DSE");
  }
  g_VertexCount = this_ptr->vertex_count;
  if (0 < g_VertexCount) {
    fVar2 = (float)0.00390625;
    iVar4 = 0;
    iVar7 = g_VertexCount * 0xc;
    iVar5 = 0;
    do {
      *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar4) * fVar2;
      *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar4 + 4) * fVar2;
      iVar6 = iVar4 + 8;
      iVar4 = iVar4 + 0xc;
      *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar5) =
           (float)*(int *)((int)this_ptr->vertex_list + iVar6) * fVar2;
      iVar5 = iVar5 + 0x14;
    } while (iVar4 < iVar7);
  }
  g_PolygonCount = this_ptr->poly_count;
  local_1c = 0;
  if (0 < g_PolygonCount) {
    local_18 = 0;
    local_20 = 0;
    iVar5 = 0;
    do {
      iVar7 = 0;
      *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar5 + 0x40) = 0;
      pcVar8 = g_ModelPolygonData[0].texture_name + iVar5 + -4;
      pcVar8[0] = '\x02';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14) =
           *(uint *)((int)this_ptr->poly_vert_list + local_18 + 4);
      iVar4 = 0;
      if (0 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14)) {
        fVar2 = (float)1.52587890625e-05;
        iVar6 = iVar5;
        do {
          *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) =
               *(uint *)((int)this_ptr->poly_vert_list + iVar4 + local_18 + 0x18);
          *(float *)((int)g_ModelPolygonData[0].uv_u + iVar6) =
               (float)*(int *)((int)this_ptr->poly_vert_list + iVar4 + local_18 + 0x1c) * fVar2;
          iVar3 = iVar4 + local_18 + 0x20;
          iVar4 = iVar4 + 0xc;
          iVar7 = iVar7 + 1;
          *(float *)((int)g_ModelPolygonData[0].uv_v + iVar6) =
               (float)*(int *)((int)this_ptr->poly_vert_list + iVar3) * fVar2;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -0x14));
      }
      pcVar8 = this_ptr->texture_list[*(int *)((int)this_ptr->poly_texture_index_list + local_20)].
               textures[0].texture_name;
      local_20 = local_20 + 4;
      pcVar9 = g_ModelPolygonData[0].texture_name + iVar5;
      local_18 = local_18 + 0x48;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_1c = local_1c + 1;
      iVar5 = iVar5 + 0x184;
    } while (local_1c < g_PolygonCount);
  }
  g_PartsCount = 1;
  return;
}
