// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  char cVar1;
  CVector3i **ppCVar2;
  SMRGLPrimitiveQuad **ppSVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int unaff_EDI;
  char *pcVar9;
  double dVar10;
  int iVar11;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar7 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  dVar4 = 256;
  if (0 < this_ptr->vertex_count) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      ppCVar2 = this_ptr->vertex_list;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar5) * dVar4);
      unaff_EDI = (int)ROUND(dVar10);
      *(int *)((int)ppCVar2 + iVar6) = unaff_EDI;
      ppCVar2 = this_ptr->vertex_list;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar5) * dVar4);
      *(int *)((int)ppCVar2 + iVar6 + 4) = (int)ROUND(dVar10);
      ppCVar2 = this_ptr->vertex_list;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)*(float *)((int)&g_LoadedVertices[0].vertex.z + iVar5) * dVar4);
      iVar5 = iVar5 + 0x14;
      *(int *)((int)ppCVar2 + iVar6 + 8) = (int)ROUND(dVar10);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  local_10 = 0;
  if (0 < this_ptr->poly_count) {
    local_14 = 0;
    local_1c = 0;
    local_18 = g_ModelPolygonData[0].texture_name;
    do {
      iVar7 = local_10 * 0x184;
      iVar6 = 0;
      *(uint *)((int)this_ptr->poly_vert_list + local_14 + 4) =
           g_ModelPolygonData[local_10].vertex_indices_count;
      dVar4 = 65536;
      iVar5 = 0;
      if (0 < (int)g_ModelPolygonData[local_10].vertex_indices_count) {
        do {
          *(uint *)((int)this_ptr->poly_vert_list + iVar5 + local_14 + 0x18) =
               *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar7);
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar7) * dVar4);
          iVar11 = (int)ROUND(dVar10);
          *(int *)(unaff_EDI + 0x1c) = iVar11;
          ppSVar3 = this_ptr->poly_vert_list;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)*(float *)((int)g_ModelPolygonData[0].uv_v + iVar7) * dVar4);
          *(int *)((int)ppSVar3 + iVar5 + local_14 + 0x20) = (int)ROUND(dVar10);
          iVar7 = iVar7 + 4;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0xc;
          unaff_EDI = iVar11;
        } while (iVar6 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_14 + -0x14));
      }
      iVar7 = 0;
      if (0 < this_ptr->texture_count) {
        pcVar8 = this_ptr->texture_list[0].base.texture_name;
        do {
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,local_18);
          if (iVar5 == 0) break;
          iVar7 = iVar7 + 1;
          pcVar8 = pcVar8 + 0x48;
        } while (iVar7 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar7) {
        if (299 < iVar7) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        pcVar9 = this_ptr->texture_list[iVar7].base.texture_name;
        pcVar8 = local_18;
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_14 = local_14 + 0x48;
      local_10 = local_10 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_1c) = iVar7;
      local_1c = local_1c + 4;
      local_18 = local_18 + 0x184;
    } while (local_10 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
