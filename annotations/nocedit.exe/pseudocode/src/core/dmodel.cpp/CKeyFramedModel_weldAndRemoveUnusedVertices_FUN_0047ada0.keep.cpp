// Name: core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
// Address: 0047ada0
// MANUAL RECONSTRUCTION
// Address Range: [[0047ada0, 0047b16a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel *this_ptr,float weld_tolerance)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(CKeyFramedModel *this_ptr,float weld_tolerance)

{
  int *ptr;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar9;
  SMRGLPrimitiveQuad *quad;
  CKeyFramedModel *local_48;
  int local_44;
  int *local_30;
  int local_24;
  bool bVar1;
  float fVar2;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    ptr = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                    (this_ptr->vertex_count << 2,"..\\core\\dmodel.cpp",2271);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 2272;
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
    iVar1 = 0;
    local_44 = 0;
    if (0 < this_ptr->part_count) {
      local_48 = this_ptr;
      local_24 = iVar1;
      do {
        iVar1 = local_48->part_list[0].vertex_count + local_24;
        if (this_ptr->vertex_count < iVar1) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 2296;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if (local_24 < iVar1) {
          local_30 = ptr + local_24;
          do {
            if ((bVar1) && ((char)local_24 == '\0')) {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_24,(float)this_ptr->vertex_count);
            }
            if ((local_24 == *local_30) && (iVar9 = local_24 + 1, iVar9 < iVar1)) {
              piVar3 = ptr + iVar9;
              do {
                piVar6 = (int *)(this_ptr->vertex_list + iVar9);
                if (iVar9 == *piVar3) {
                  piVar4 = (int *)(this_ptr->vertex_list + local_24);
                  iVar2 = 0;
                  if (0 < this_ptr->frame_count) {
                    do {
                      if (weld_tolerance * weld_tolerance * fVar2 <
                          (float)(piVar4[2] - piVar6[2]) * (float)(piVar4[2] - piVar6[2]) +
                          (float)(piVar4[1] - piVar6[1]) * (float)(piVar4[1] - piVar6[1]) +
                          (float)(*piVar4 - *piVar6) * (float)(*piVar4 - *piVar6))
                      goto LAB_0047b0cc;
                      piVar4 = piVar4 + 3;
                      iVar2 = iVar2 + 1;
                      piVar6 = piVar6 + 3;
                    } while (iVar2 < this_ptr->frame_count);
                  }
                  *piVar3 = local_24;
                }
LAB_0047b0cc:
                piVar3 = piVar3 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar1);
            }
            local_30 = local_30 + 1;
            local_24 = local_24 + 1;
          } while (local_24 < iVar1);
        }
        local_48 = (CKeyFramedModel *)(local_48->model_filename + 8);
        local_44 = local_44 + 1;
        local_24 = iVar1;
      } while (local_44 < this_ptr->part_count);
    }
    if (iVar1 != this_ptr->vertex_count) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 2353;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
    }
    iVar1 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        quad = this_ptr->poly_vert_list + iVar1;
        iVar5 = 0;
        if (0 < quad->base.base.count) {
          do {
            quad->vertices[iVar5].vertex_index = ptr[quad->vertices[iVar5].vertex_index];
            iVar5 = iVar5 + 1;
          } while (iVar5 < quad->base.base.count);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->poly_count);
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
