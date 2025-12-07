// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  SMRGLTextureExtended *pSVar1;
  char cVar2;
  CVector3i **ppCVar3;
  SMRGLPrimitiveQuad **ppSVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  double dVar12;
  SMRGLTextureExtended *local_1c;
  int local_14;
  char *local_10;
  int local_c;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar8 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  dVar5 = 256;
  if (0 < this_ptr->vertex_count) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      ppCVar3 = this_ptr->vertex_list;
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar6) * dVar5);
      *(int *)((int)ppCVar3 + iVar7) = (int)ROUND(dVar12);
      ppCVar3 = this_ptr->vertex_list;
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar6) * dVar5);
      *(int *)((int)ppCVar3 + iVar7 + 4) = (int)ROUND(dVar12);
      ppCVar3 = this_ptr->vertex_list;
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar6) * dVar5);
      iVar6 = iVar6 + 0x14;
      *(int *)((int)ppCVar3 + iVar7 + 8) = (int)ROUND(dVar12);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  iVar8 = 0;
  if (0 < this_ptr->poly_count) {
    local_c = 0;
    local_14 = 0;
    local_10 = g_ModelPolygonData[0].texture_name;
    local_1c = this_ptr->texture_list;
    do {
      iVar6 = iVar8 * 0x184;
      iVar9 = 0;
      *(uint *)((int)this_ptr->poly_vert_list + local_c + 4) =
           g_ModelPolygonData[iVar8].vertex_indices_count;
      dVar5 = 65536;
      iVar7 = 0;
      if (0 < (int)g_ModelPolygonData[iVar8].vertex_indices_count) {
        do {
          *(uint *)((int)this_ptr->poly_vert_list + iVar7 + local_c + 0x18) =
               *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6);
          dVar12 = crt_math_c_round_FUN_005fe6b0
                             ((double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar6) * dVar5);
          pSVar1 = (SMRGLTextureExtended *)(int)ROUND(dVar12);
          *(SMRGLTextureExtended **)(local_1c->unknown + 4) = pSVar1;
          ppSVar4 = this_ptr->poly_vert_list;
          dVar12 = crt_math_c_round_FUN_005fe6b0
                             ((double)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar6) * dVar5);
          *(int *)((int)ppSVar4 + iVar7 + local_c + 0x20) = (int)ROUND(dVar12);
          iVar6 = iVar6 + 4;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 0xc;
          local_1c = pSVar1;
        } while (iVar9 < (int)g_ModelPolygonData[iVar8].vertex_indices_count);
      }
      iVar6 = 0;
      if (0 < this_ptr->texture_count) {
        pcVar10 = (local_1c->base).texture_name;
        do {
          iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar10,local_10);
          if (iVar7 == 0) break;
          iVar6 = iVar6 + 1;
          pcVar10 = pcVar10 + 0x48;
        } while (iVar6 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar6) {
        if (299 < iVar6) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        pcVar11 = this_ptr->texture_list[iVar6].base.texture_name;
        pcVar10 = local_10;
        do {
          cVar2 = *pcVar10;
          *pcVar11 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar11[1] = cVar2;
          pcVar11 = pcVar11 + 2;
        } while (cVar2 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_c = local_c + 0x48;
      iVar8 = iVar8 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_14) = iVar6;
      local_14 = local_14 + 4;
      local_10 = local_10 + 0x184;
    } while (iVar8 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
