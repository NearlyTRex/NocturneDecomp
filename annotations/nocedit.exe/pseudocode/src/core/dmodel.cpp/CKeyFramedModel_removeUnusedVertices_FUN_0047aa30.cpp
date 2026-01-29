// Name: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
// Address Range: [[0047aa30, 0047ad95]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

{
  SMRGLPrimitiveQuad *pSVar1;
  int *dest;
  int iVar2;
  int *piVar3;
  int iVar4;
  CVector3i **ppCVar5;
  int iVar6;
  CVector3i **ppCVar7;
  byte *puVar8;
  int iVar9;
  int iVar10;
  SMRGLPrimitiveQuad **ppSVar11;
  byte bVar12;
  int local_28;
  CKeyFramedModelPart *local_24;
  int local_18;
  byte *local_14;
  SMRGLPrimitiveQuad **local_10;
  
  bVar12 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Removing unused vertices...");
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    dest = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (this_ptr->vertex_count * 4,"..\\core\\dmodel.cpp",0x868);
    if (dest == (int *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x869;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",this_ptr->vertex_count);
    }
    memset(dest,0,this_ptr->vertex_count << 2);
    iVar6 = 0;
    if (0 < this_ptr->poly_count) {
      iVar10 = 0;
      do {
        iVar9 = (int)this_ptr->poly_vert_list + iVar10;
        iVar2 = 0;
        iVar4 = iVar9;
        if (0 < *(int *)(iVar9 + 4)) {
          do {
            dest[*(int *)(iVar4 + 0x18)] = 1;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0xc;
          } while (iVar2 < *(int *)(iVar9 + 4));
        }
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 0x48;
      } while (iVar6 < this_ptr->poly_count);
    }
    iVar6 = 0;
    local_14 = (byte *)0x0;
    piVar3 = dest;
    if (0 < this_ptr->vertex_count) {
      do {
        if (*piVar3 == 0) {
          *piVar3 = -1;
        }
        else {
          *piVar3 = (int)local_14;
          local_14 = (byte *)((int)local_14 + 1);
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar6 < this_ptr->vertex_count);
    }
    puVar8 = local_14;
    if ((int)local_14 < this_ptr->vertex_count) {
      iVar6 = 0;
      if (0 < this_ptr->poly_count) {
        iVar10 = 0;
        do {
          iVar9 = (int)this_ptr->poly_vert_list + iVar10;
          iVar2 = 0;
          iVar4 = iVar9;
          if (0 < *(int *)(iVar9 + 4)) {
            do {
              *(int *)(iVar4 + 0x18) = dest[*(int *)(iVar4 + 0x18)];
              iVar2 = iVar2 + 1;
              iVar4 = iVar4 + 0xc;
            } while (iVar2 < *(int *)(iVar9 + 4));
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 0x48;
        } while (iVar6 < this_ptr->poly_count);
      }
      iVar6 = 0;
      ppCVar5 = this_ptr->vertex_list;
      ppCVar7 = ppCVar5;
      if (0 < this_ptr->frame_count) {
        do {
          iVar10 = 0;
          piVar3 = dest;
          if (0 < this_ptr->vertex_count) {
            do {
              if (-1 < *piVar3) {
                if (ppCVar7 < ppCVar5) {
                  *ppCVar7 = *ppCVar5;
                  ppCVar7[(uint)bVar12 * -2 + 1] = ppCVar5[(uint)bVar12 * -2 + 1];
                  (ppCVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                       (ppCVar5 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
                }
                ppCVar7 = ppCVar7 + 3;
              }
              ppCVar5 = ppCVar5 + 3;
              iVar10 = iVar10 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar10 < this_ptr->vertex_count);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < this_ptr->frame_count);
      }
      local_14 = (byte *)0x0;
      this_ptr->vertex_count = (int)puVar8;
      local_28 = 0;
      local_10 = this_ptr->poly_vert_list;
      if (0 < this_ptr->part_count) {
        local_24 = this_ptr->part_list;
        do {
          puVar8 = (byte *)0xffffffff;
          local_18 = 0;
          if (0 < local_24->poly_count) {
            do {
              iVar6 = 0;
              ppSVar11 = local_10;
              if (0 < (int)local_10[1]) {
                do {
                  pSVar1 = ppSVar11[6];
                  if ((int)pSVar1 < (int)local_14) {
                    g_CurrentFilename = "..\\core\\dmodel.cpp";
                    g_CurrentLineNumber = 0x8ae;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Part vertex overlap detected!");
                  }
                  if ((int)puVar8 <= (int)pSVar1) {
                    puVar8 = (byte *)((int)&(pSVar1->base).base.type + 1);
                  }
                  iVar6 = iVar6 + 1;
                  ppSVar11 = ppSVar11 + 3;
                } while (iVar6 < (int)local_10[1]);
              }
              local_10 = local_10 + 0x12;
              local_18 = local_18 + 1;
            } while (local_18 < local_24->poly_count);
          }
          local_24->vertex_count = (int)puVar8 - (int)local_14;
          local_24 = local_24 + 1;
          local_28 = local_28 + 1;
          local_14 = puVar8;
        } while (local_28 < this_ptr->part_count);
      }
    }
    g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
    g_CurrentDebugLine = 0x8bc;
    shape_memdbg_cpp_free_FUN_005fe659(dest);
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    return;
  }
  return;
}
