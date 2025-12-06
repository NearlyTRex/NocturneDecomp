// Name: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// Address: 0047ada0
// Address Range: [[0047ada0, 0047b16a]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel * this_ptr, float weld_tolerance)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
          (CKeyFramedModel *this_ptr,float weld_tolerance)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float in_stack_00000018;
  CKeyFramedModel *pCVar11;
  int local_34;
  int local_30;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (this_ptr->vertex_count << 2,"..\\core\\dmodel.cpp",0x8df);
    if (pvVar3 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x8e0;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",this_ptr->vertex_count);
    }
    iVar4 = 0;
    piVar8 = local_28;
    if (0 < this_ptr->vertex_count) {
      do {
        *piVar8 = iVar4;
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar4 < this_ptr->vertex_count);
    }
    fVar2 = (float)65536;
    bVar1 = 2000 < this_ptr->vertex_count;
    if (bVar1) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing vertices...");
    }
    iVar4 = 0;
    local_34 = 0;
    local_14 = iVar4;
    pCVar11 = this_ptr;
    if (0 < this_ptr->part_count) {
      do {
        iVar4 = pCVar11->part_list[0].vertex_count + local_14;
        if (this_ptr->vertex_count < iVar4) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x8f8;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if (local_14 < iVar4) {
          local_24 = local_14 * 0xc;
          local_20 = local_28 + local_14;
          do {
            if ((bVar1) && ((char)local_14 == '\0')) {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_14,(float)this_ptr->vertex_count);
            }
            if ((local_14 == *local_20) && (iVar10 = local_14 + 1, iVar10 < iVar4)) {
              local_1c = local_24;
              iVar6 = iVar10 * 0xc;
              piVar8 = local_28 + iVar10;
              do {
                piVar7 = (int *)(iVar6 + (int)this_ptr->vertex_list);
                if (iVar10 == *piVar8) {
                  piVar5 = (int *)((int)this_ptr->vertex_list + local_24);
                  iVar9 = 0;
                  if (0 < this_ptr->frame_count) {
                    do {
                      if (in_stack_00000018 * in_stack_00000018 * fVar2 <
                          (float)(piVar5[2] - piVar7[2]) * (float)(piVar5[2] - piVar7[2]) +
                          (float)(piVar5[1] - piVar7[1]) * (float)(piVar5[1] - piVar7[1]) +
                          (float)(*piVar5 - *piVar7) * (float)(*piVar5 - *piVar7))
                      goto LAB_0047b0cc;
                      piVar5 = piVar5 + 3;
                      iVar9 = iVar9 + 1;
                      piVar7 = piVar7 + 3;
                    } while (iVar9 < this_ptr->frame_count);
                  }
                  *piVar8 = local_14;
                }
LAB_0047b0cc:
                piVar8 = piVar8 + 1;
                iVar6 = iVar6 + 0xc;
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar4);
            }
            local_20 = local_20 + 1;
            local_24 = local_24 + 0xc;
            local_14 = local_14 + 1;
          } while (local_14 < iVar4);
        }
        local_34 = local_34 + 1;
        local_14 = iVar4;
        pCVar11 = (CKeyFramedModel *)(pCVar11->model_filename + 8);
      } while (local_34 < this_ptr->part_count);
    }
    if (iVar4 != this_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x931;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
    }
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      local_30 = 0;
      do {
        iVar9 = (int)this_ptr->poly_vert_list + local_30;
        iVar6 = 0;
        iVar10 = iVar9;
        if (0 < *(int *)(iVar9 + 4)) {
          do {
            *(int *)(iVar10 + 0x18) = local_28[*(int *)(iVar10 + 0x18)];
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar6 < *(int *)(iVar9 + 4));
        }
        iVar4 = iVar4 + 1;
        local_30 = local_30 + 0x48;
      } while (iVar4 < this_ptr->poly_count);
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x943;
    crt_memory_c_free_FUN_005fe659(local_28);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_1c != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
