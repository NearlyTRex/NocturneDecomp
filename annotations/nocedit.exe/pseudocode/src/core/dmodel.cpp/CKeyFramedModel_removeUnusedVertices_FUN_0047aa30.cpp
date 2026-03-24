// Name: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
// Address Range: [[0047aa30, 0047ad95] [0060c3c2, 0060c3de]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(CKeyFramedModel *this_ptr)

{
  int *dest;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar2;
  int iVar4;
  int *piVar3;
  CVector3i *pCVar5;
  int iVar6;
  int iVar5;
  CVector3i *pCVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar7;
  uint *puVar11;
  SMRGLPrimitiveQuad *pSVar12;
  byte bVar13;
  int local_28;
  CKeyFramedModelPart *local_24;
  int local_18;
  int local_14;
  SMRGLPrimitiveQuad *local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Removing unused vertices...");
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    dest = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
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
        iVar5 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base
                      .type + iVar10;
        iVar1 = 0;
        iVar7 = iVar5;
        if (0 < *(int *)(iVar5 + 4)) {
          do {
            dest[*(int *)(iVar7 + 0x18)] = 1;
            iVar1 = iVar1 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar1 < *(int *)(iVar5 + 4));
        }
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 0x48;
      } while (iVar6 < this_ptr->poly_count);
    }
    iVar7 = 0;
    local_14 = 0;
    piVar2 = dest;
    if (0 < this_ptr->vertex_count) {
      do {
        if (*piVar2 == 0) {
          *piVar2 = -1;
        }
        else {
          *piVar2 = local_14;
          local_14 = local_14 + 1;
        }
        iVar7 = iVar7 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar7 < this_ptr->vertex_count);
    }
    iVar7 = local_14;
    if (local_14 < this_ptr->vertex_count) {
      iVar5 = 0;
      if (0 < this_ptr->poly_count) {
        iVar4 = 0;
        do {
          iVar8 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                        base.type + iVar4;
          iVar3 = 0;
          iVar2 = iVar8;
          if (0 < *(int *)(iVar8 + 4)) {
            do {
              *(int *)(iVar2 + 0x18) = dest[*(int *)(iVar2 + 0x18)];
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 0xc;
            } while (iVar3 < *(int *)(iVar8 + 4));
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x48;
        } while (iVar5 < this_ptr->poly_count);
      }
      iVar5 = 0;
      pCVar5 = this_ptr->vertex_list;
      pCVar7 = pCVar5;
      if (0 < this_ptr->frame_count) {
        do {
          iVar2 = 0;
          piVar3 = dest;
          if (0 < this_ptr->vertex_count) {
            do {
              if (-1 < *piVar3) {
                if (pCVar7 < pCVar5) {
                  pCVar7->x = pCVar5->x;
                  pCVar7->y = pCVar5->y;
                  iVar5 = pCVar5->z;
                  pCVar7->z = iVar5;
                }
                pCVar7 = pCVar7 + 1;
              }
              pCVar5 = pCVar5 + 1;
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < this_ptr->vertex_count);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < this_ptr->frame_count);
      }
      local_14 = 0;
      this_ptr->vertex_count = iVar7;
      local_28 = 0;
      local_10 = this_ptr->poly_vert_list;
      if (0 < this_ptr->part_count) {
        local_24 = this_ptr->part_list;
        do {
          iVar7 = -1;
          local_18 = 0;
          if (0 < local_24->poly_count) {
            do {
              iVar5 = 0;
              pSVar12 = local_10;
              if (0 < (local_10->base).base.count) {
                do {
                  iVar2 = pSVar12->vertices[0].vertex_index;
                  if (iVar2 < local_14) {
                    g_CurrentFilename = "..\\core\\dmodel.cpp";
                    g_CurrentLineNumber = 0x8ae;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Part vertex overlap detected!");
                  }
                  if (iVar7 <= iVar2) {
                    iVar7 = iVar2 + 1;
                  }
                  iVar5 = iVar5 + 1;
                  pSVar12 = (SMRGLPrimitiveQuad *)&(pSVar12->base).surface_normal.B;
                } while (iVar5 < (local_10->base).base.count);
              }
              local_10 = local_10 + 1;
              local_18 = local_18 + 1;
            } while (local_18 < local_24->poly_count);
          }
          local_24->vertex_count = iVar7 - local_14;
          local_24 = local_24 + 1;
          local_28 = local_28 + 1;
          local_14 = iVar7;
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
