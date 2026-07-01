// Name: core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30
// Address: 0047aa30
// MANUAL RECONSTRUCTION
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
  int *piVar3;
  CVector3i *pCVar5;
  int iVar6;
  int iVar5;
  CVector3i *pCVar7;
  int iVar7;
  SMRGLPrimitiveQuad *quad;
  int local_28;
  CKeyFramedModelPart *local_24;
  int local_18;
  int local_14;
  SMRGLPrimitiveQuad *local_10;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Removing unused vertices...");
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->vertex_count) && (0 < this_ptr->frame_count)) {
    dest = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                     (this_ptr->vertex_count * 4,"..\\core\\dmodel.cpp",2152);
    if (dest == (int *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 2153;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CKeyFramedModel::removeUnusedVertices out of memory for auxArray, vertexCount = %d",this_ptr->vertex_count);
    }
    memset(dest,0,this_ptr->vertex_count << 2);
    iVar6 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        quad = this_ptr->poly_vert_list + iVar6;
        iVar1 = 0;
        if (0 < quad->base.base.count) {
          do {
            dest[quad->vertices[iVar1].vertex_index] = 1;
            iVar1 = iVar1 + 1;
          } while (iVar1 < quad->base.base.count);
        }
        iVar6 = iVar6 + 1;
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
        do {
          quad = this_ptr->poly_vert_list + iVar5;
          iVar3 = 0;
          if (0 < quad->base.base.count) {
            do {
              quad->vertices[iVar3].vertex_index = dest[quad->vertices[iVar3].vertex_index];
              iVar3 = iVar3 + 1;
            } while (iVar3 < quad->base.base.count);
          }
          iVar5 = iVar5 + 1;
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
              if (0 < (local_10->base).base.count) {
                do {
                  iVar2 = local_10->vertices[iVar5].vertex_index;
                  if (iVar2 < local_14) {
                    g_CurrentFilename = "..\\core\\dmodel.cpp";
                    g_CurrentLineNumber = 2222;
                    core_main_c_displayErrorAndQuit_FUN_00506f10
                              ("Part vertex overlap detected!");
                  }
                  if (iVar7 <= iVar2) {
                    iVar7 = iVar2 + 1;
                  }
                  iVar5 = iVar5 + 1;
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
