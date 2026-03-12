// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  char cVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar7;
  int iVar5;
  int iVar6;
  int iVar8;
  char *pcVar7;
  char *str1;
  char *pcVar8;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  double dVar3;
  char cVar2;
  float *pfVar1;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar6 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  dVar3 = 256;
  if (0 < this_ptr->vertex_count) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      *(int *)((int)&this_ptr->vertex_list->x + iVar5) =
           (int)ROUND(ROUND((double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4) * dVar3))
      ;
      *(int *)((int)&this_ptr->vertex_list->y + iVar5) =
           (int)ROUND(ROUND((double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar4) * dVar3))
      ;
      pfVar1 = (float *)((int)&g_LoadedVertices[0].vertex.z + iVar4);
      iVar4 = iVar4 + 0x14;
      *(int *)((int)&this_ptr->vertex_list->z + iVar5) = (int)ROUND(ROUND((double)*pfVar1 * dVar3));
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar6 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  local_10 = 0;
  if (0 < this_ptr->poly_count) {
    local_14 = 0;
    local_1c = 0;
    local_18 = g_ModelPolygonData[0].texture_name;
    do {
      iVar3 = local_10 * 0x184;
      iVar8 = 0;
      *(uint *)((int)this_ptr->poly_vert_list->vertices + local_14 + -0x14) =
           g_ModelPolygonData[local_10].vertex_indices_count;
      dVar2 = 65536;
      iVar7 = 0;
      if (0 < (int)g_ModelPolygonData[local_10].vertex_indices_count) {
        do {
          *(uint *)
           ((int)&this_ptr->poly_vert_list->vertices[0].vertex_index + iVar7 + local_14) =
               *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar3);
          *(int *)((int)&this_ptr->poly_vert_list->vertices[0].texture_u + iVar7 + local_14) =
               (int)ROUND(ROUND((double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar3) * dVar2)
                         );
          *(int *)((int)&this_ptr->poly_vert_list->vertices[0].texture_v + iVar7 + local_14) =
               (int)ROUND(ROUND((double)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar3) * dVar2)
                         );
          iVar3 = iVar3 + 4;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0xc;
        } while (iVar8 < (int)g_ModelPolygonData[local_10].vertex_indices_count);
      }
      iVar3 = 0;
      if (0 < this_ptr->texture_count) {
        str1 = this_ptr->texture_list[0].textures[0].texture_name;
        do {
          iVar7 = _stricmp(str1,local_18);
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
        pcVar8 = this_ptr->texture_list[iVar3].textures[0].texture_name;
        pcVar7 = local_18;
        do {
          cVar2 = *pcVar7;
          *pcVar8 = cVar2;
          if (cVar2 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_14 = local_14 + 0x48;
      local_10 = local_10 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_1c) = iVar3;
      local_1c = local_1c + 4;
      local_18 = local_18 + 0x184;
    } while (local_10 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
