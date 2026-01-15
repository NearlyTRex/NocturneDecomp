// Name: core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
// Address: 0047ea10
// Address Range: [[0047ea10, 0047ecf0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(CKeyFramedModel *this_ptr)

{
  char cVar1;
  CVector3i **ppCVar2;
  int extraout_EAX;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar5;
  char *pcVar6;
  int unaff_EDI;
  char *pcVar7;
  float10 fVar8;
  double dVar9;
  int iVar10;
  int local_1c;
  char *local_18;
  int local_14;
  int local_10;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  if ((g_VertexCount < 1) || (g_PolygonCount < 1)) {
    return;
  }
  iVar5 = 0;
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,g_VertexCount,g_PolygonCount,300,1,1);
  if (0 < this_ptr->vertex_count) {
    fVar8 = (float10)256;
    iVar3 = 0;
    iVar4 = 0;
    do {
      ppCVar2 = this_ptr->vertex_list;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar3) *
                                 fVar8));
      unaff_EDI = (int)ROUND(dVar9);
      *(int *)((int)ppCVar2 + iVar4) = unaff_EDI;
      ppCVar2 = this_ptr->vertex_list;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.y +
                                                     extraout_ECX) * fVar8));
      *(int *)((int)ppCVar2 + extraout_EDX + 4) = (int)ROUND(dVar9);
      ppCVar2 = this_ptr->vertex_list;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.z +
                                                     extraout_ECX_00) * fVar8));
      iVar3 = extraout_ECX_01 + 0x14;
      *(int *)((int)ppCVar2 + extraout_EDX_00 + 8) = (int)ROUND(dVar9);
      iVar5 = iVar5 + 1;
      iVar4 = extraout_EDX_01 + 0xc;
    } while (iVar5 < this_ptr->vertex_count);
  }
  this_ptr->texture_count = 0;
  local_10 = 0;
  if (0 < this_ptr->poly_count) {
    local_14 = 0;
    local_1c = 0;
    local_18 = g_ModelPolygonData[0].texture_name;
    do {
      iVar5 = local_10 * 0x184;
      iVar4 = 0;
      *(uint *)((int)this_ptr->poly_vert_list + local_14 + 4) =
           g_ModelPolygonData[local_10].vertex_indices_count;
      iVar3 = 0;
      if (0 < (int)g_ModelPolygonData[local_10].vertex_indices_count) {
        fVar8 = (float10)65536;
        iVar10 = unaff_EDI;
        do {
          *(uint *)((int)this_ptr->poly_vert_list + iVar3 + local_14 + 0x18) =
               *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar5);
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)((float10)*(float *)((int)g_ModelPolygonData[0].uv_u + iVar5) *
                                     fVar8));
          unaff_EDI = (int)ROUND(dVar9);
          *(int *)(iVar10 + 0x1c) = unaff_EDI;
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)((float10)*(float *)((int)g_ModelPolygonData[0].uv_v +
                                                         extraout_EDX_02) * fVar8));
          *(int *)(extraout_EAX + extraout_ECX_02 + 0x20) = (int)ROUND(dVar9);
          iVar5 = extraout_EDX_03 + 4;
          iVar4 = iVar4 + 1;
          iVar3 = extraout_ECX_02 + 0xc;
          iVar10 = unaff_EDI;
        } while (iVar4 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_14 + -0x14));
      }
      iVar5 = 0;
      if (0 < this_ptr->texture_count) {
        pcVar6 = this_ptr->texture_list[0].base.texture_name;
        do {
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar6,local_18);
          if (iVar3 == 0) break;
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 0x48;
        } while (iVar5 < this_ptr->texture_count);
      }
      if (this_ptr->texture_count <= iVar5) {
        if (299 < iVar5) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0xe45;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::exportToDSE() - Too many textures!");
        }
        pcVar7 = this_ptr->texture_list[iVar5].base.texture_name;
        pcVar6 = local_18;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        this_ptr->texture_count = this_ptr->texture_count + 1;
      }
      local_14 = local_14 + 0x48;
      local_10 = local_10 + 1;
      *(int *)((int)this_ptr->poly_texture_index_list + local_1c) = iVar5;
      local_1c = local_1c + 4;
      local_18 = local_18 + 0x184;
    } while (local_10 < this_ptr->poly_count);
  }
  this_ptr->part_count = 1;
  this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
  this_ptr->part_list[0].poly_count = this_ptr->poly_count;
  return;
}
