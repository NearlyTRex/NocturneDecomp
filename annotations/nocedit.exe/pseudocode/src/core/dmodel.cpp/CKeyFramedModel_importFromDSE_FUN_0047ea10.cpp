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
  int extraout_EAX;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  double dVar11;
  SMRGLTextureExtended *local_1c;
  int local_14;
  char *local_10;
  int local_c;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar6 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  if (0 < this_ptr->vertex_count) {
    fVar10 = (float10)256;
    iVar4 = 0;
    iVar5 = 0;
    do {
      ppCVar3 = this_ptr->vertex_list;
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4) *
                                  fVar10));
      *(int *)((int)ppCVar3 + iVar5) = (int)ROUND(dVar11);
      ppCVar3 = this_ptr->vertex_list;
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.y +
                                                      extraout_ECX) * fVar10));
      *(int *)((int)ppCVar3 + extraout_EDX + 4) = (int)ROUND(dVar11);
      ppCVar3 = this_ptr->vertex_list;
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.z +
                                                      extraout_ECX_00) * fVar10));
      iVar4 = extraout_ECX_01 + 0x14;
      *(int *)((int)ppCVar3 + extraout_EDX_00 + 8) = (int)ROUND(dVar11);
      iVar6 = iVar6 + 1;
      iVar5 = extraout_EDX_01 + 0xc;
    } while (iVar6 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  iVar6 = 0;
  if (0 < this_ptr->poly_count) {
    local_c = 0;
    local_14 = 0;
    local_10 = g_ModelPolygonData[0].texture_name;
    local_1c = this_ptr->texture_list;
    do {
      iVar4 = iVar6 * 0x184;
      iVar7 = 0;
      *(uint *)((int)this_ptr->poly_vert_list + local_c + 4) =
           g_ModelPolygonData[iVar6].vertex_indices_count;
      iVar5 = 0;
      if (0 < (int)g_ModelPolygonData[iVar6].vertex_indices_count) {
        fVar10 = (float10)65536;
        do {
          *(uint *)((int)this_ptr->poly_vert_list + iVar5 + local_c + 0x18) =
               *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar4);
          dVar11 = crt_math_c_round_FUN_005fe6b0
                             ((double)((float10)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar4)
                                      * fVar10));
          pSVar1 = (SMRGLTextureExtended *)(int)ROUND(dVar11);
          *(SMRGLTextureExtended **)(local_1c->unknown + 4) = pSVar1;
          dVar11 = crt_math_c_round_FUN_005fe6b0
                             ((double)((float10)*(float *)((int)g_ModelPolygonData[0].uv_v +
                                                          extraout_EDX_02) * fVar10));
          *(int *)(extraout_EAX + extraout_ECX_02 + 0x20) = (int)ROUND(dVar11);
          iVar4 = extraout_EDX_03 + 4;
          iVar7 = iVar7 + 1;
          iVar5 = extraout_ECX_02 + 0xc;
          local_1c = pSVar1;
        } while (iVar7 < (int)g_ModelPolygonData[iVar6].vertex_indices_count);
      }
      iVar4 = 0;
      if (0 < this_ptr->texture_count) {
        pcVar8 = (local_1c->base).texture_name;
        do {
          iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,local_10);
          if (iVar5 == 0) break;
          iVar4 = iVar4 + 1;
          pcVar8 = pcVar8 + 0x48;
        } while (iVar4 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar4) {
        if (299 < iVar4) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        pcVar9 = this_ptr->texture_list[iVar4].base.texture_name;
        pcVar8 = local_10;
        do {
          cVar2 = *pcVar8;
          *pcVar9 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar2;
          pcVar9 = pcVar9 + 2;
        } while (cVar2 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_c = local_c + 0x48;
      iVar6 = iVar6 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_14) = iVar4;
      local_14 = local_14 + 4;
      local_10 = local_10 + 0x184;
    } while (iVar6 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
