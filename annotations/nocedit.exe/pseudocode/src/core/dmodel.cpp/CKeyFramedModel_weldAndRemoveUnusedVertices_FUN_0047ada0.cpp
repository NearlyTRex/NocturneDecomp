// Name: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// Address: 0047ada0
// Address Range: [[0047ada0, 0047b16a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel *this_ptr,float weld_tolerance)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel *this_ptr,float weld_tolerance)

{
  bool bVar1;
  float fVar2;
  int *ptr;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  CKeyFramedModel *local_48;
  int local_44;
  int local_40;
  int local_34;
  int *local_30;
  int local_24;
  int local_1c;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                    (this_ptr->vertex_count << 2,"..\\core\\dmodel.cpp",0x8df);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x8e0;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",this_ptr->vertex_count);
    }
    iVar3 = 0;
    piVar7 = ptr;
    if (0 < this_ptr->vertex_count) {
      do {
        *piVar7 = iVar3;
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar3 < this_ptr->vertex_count);
    }
    fVar2 = (float)65536;
    bVar1 = 2000 < this_ptr->vertex_count;
    if (bVar1) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing vertices...");
    }
    iVar3 = 0;
    local_44 = 0;
    if (0 < this_ptr->part_count) {
      local_48 = this_ptr;
      local_24 = iVar3;
      do {
        iVar3 = local_48->part_list[0].vertex_count + local_24;
        if (this_ptr->vertex_count < iVar3) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x8f8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if (local_24 < iVar3) {
          local_34 = local_24 * 0xc;
          local_30 = ptr + local_24;
          do {
            if ((bVar1) && ((char)local_24 == '\0')) {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_24,(float)this_ptr->vertex_count);
            }
            if ((local_24 == *local_30) && (iVar9 = local_24 + 1, iVar9 < iVar3)) {
              local_1c = iVar9 * 0xc;
              piVar7 = ptr + iVar9;
              do {
                piVar6 = (int *)((int)&this_ptr->vertex_list->x + local_1c);
                if (iVar9 == *piVar7) {
                  piVar4 = (int *)((int)&this_ptr->vertex_list->x + local_34);
                  iVar5 = 0;
                  if (0 < this_ptr->frame_count) {
                    do {
                      if (weld_tolerance * weld_tolerance * fVar2 <
                          (float)(piVar4[2] - piVar6[2]) * (float)(piVar4[2] - piVar6[2]) +
                          (float)(piVar4[1] - piVar6[1]) * (float)(piVar4[1] - piVar6[1]) +
                          (float)(*piVar4 - *piVar6) * (float)(*piVar4 - *piVar6))
                      goto LAB_0047b0cc;
                      piVar4 = piVar4 + 3;
                      iVar5 = iVar5 + 1;
                      piVar6 = piVar6 + 3;
                    } while (iVar5 < this_ptr->frame_count);
                  }
                  *piVar7 = local_24;
                }
LAB_0047b0cc:
                piVar7 = piVar7 + 1;
                local_1c = local_1c + 0xc;
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar3);
            }
            local_30 = local_30 + 1;
            local_34 = local_34 + 0xc;
            local_24 = local_24 + 1;
          } while (local_24 < iVar3);
        }
        local_48 = (CKeyFramedModel *)(local_48->model_filename + 8);
        local_44 = local_44 + 1;
        local_24 = iVar3;
      } while (local_44 < this_ptr->part_count);
    }
    if (iVar3 != this_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x931;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
    }
    iVar3 = 0;
    if (0 < this_ptr->poly_count) {
      local_40 = 0;
      do {
        iVar8 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base
                      .type + local_40;
        iVar5 = 0;
        iVar9 = iVar8;
        if (0 < *(int *)(iVar8 + 4)) {
          do {
            *(int *)(iVar9 + 0x18) = ptr[*(int *)(iVar9 + 0x18)];
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0xc;
          } while (iVar5 < *(int *)(iVar8 + 4));
        }
        iVar3 = iVar3 + 1;
        local_40 = local_40 + 0x48;
      } while (iVar3 < this_ptr->poly_count);
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x943;
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (bVar1) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
