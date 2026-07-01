// Name: shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620
// Address: 00516620
// MANUAL RECONSTRUCTION
// Address Range: [[00516620, 00516a3c]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh *this_ptr)

{
  SSpatialGrid *pSVar8;
  int *piVar9;
  CLodVert *pCVar2;
  CLodVert *pCVar10;
  int j;
  int iVar12;
  int local_78;
  int local_74;
  int local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_24;
  int local_1c;
  float fVar7;
  float fVar6;
  float fVar5;
  float fVar4;
  float fVar3;
  float fVar2;
  CLodFace *pCVar1;
  
  local_24 = 0;
  pSVar8 = (SSpatialGrid *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_ptr,sizeof(SSpatialGrid),"..\\shape\\meshlod.cpp",0x43f);
  this_ptr->spatial_grid_ptr = pSVar8;
  if (pSVar8 == (SSpatialGrid *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x440;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Creating quick-grid");
  local_78 = 0;
  do {
    local_48 = (float)local_78 * (float)0.0625 + (float)-0.51000000000000001;
    local_74 = 0;
    fVar2 = local_48 + (float)0.0625;
    fVar3 = (float)0.050000000000000003;
    do {
      local_44 = (float)local_74 * (float)0.0625 + (float)-0.51000000000000001;
      local_70 = 0;
      fVar4 = local_44 + (float)0.0625;
      fVar5 = (float)0.050000000000000003;
      do {
        local_40 = (float)local_70 * (float)0.0625 + (float)-0.51000000000000001;
        fVar6 = local_40 + (float)0.0625;
        fVar7 = (float)0.050000000000000003;
        this_ptr->spatial_grid_ptr->cell_start_indices[local_78][local_74][local_70] = local_24;
        iVar12 = 0;
        if (0 < this_ptr->tri_count) {
          local_1c = (local_24 + 1) * 4;
          do {
            pCVar1 = this_ptr->tri_data + iVar12;
            pCVar10 = this_ptr->vertex_data + pCVar1->vertex_idx_0;
            if ((CLodVert *)&local_54 != pCVar10) {
              local_54 = (pCVar10->position).x;
              local_50 = (pCVar10->position).y;
              local_4c = (pCVar10->position).z;
            }
            local_60 = local_54;
            local_5c = local_50;
            local_58 = local_4c;
            for (j = 1; j < 3; j = j + 1) {
              pCVar2 = this_ptr->vertex_data + (&pCVar1->vertex_idx_0)[j];
              local_3c = (pCVar2->position).x;
              local_38 = (pCVar2->position).y;
              local_34 = (pCVar2->position).z;
              if (local_3c < local_60) {
                local_60 = local_3c;
              }
              if (local_54 < local_3c) {
                local_54 = local_3c;
              }
              if (local_38 < local_5c) {
                local_5c = local_38;
              }
              if (local_50 < local_38) {
                local_50 = local_38;
              }
              if (local_34 < local_58) {
                local_58 = local_34;
              }
              if (local_4c < local_34) {
                local_4c = local_34;
              }
            }
            if ((((local_60 <= fVar2 + fVar3) && (local_48 <= local_54)) &&
                (local_5c <= fVar4 + fVar5)) &&
               (((local_44 <= local_50 && (local_58 <= fVar6 + fVar7)) && (local_40 <= local_4c))))
            {
              piVar9 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->spatial_grid_data,local_1c,"..\\shape\\meshlod.cpp",
                                  0x464);
              this_ptr->spatial_grid_data = piVar9;
              if (piVar9 == (int *)0x0) {
                g_CurrentFilename = "..\\shape\\meshlod.cpp";
                g_CurrentLineNumber = 0x465;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory creating gridList");
              }
              local_1c = local_1c + 4;
              this_ptr->spatial_grid_data[local_24] = iVar12;
              local_24 = local_24 + 1;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < this_ptr->tri_count);
        }
        local_70 = local_70 + 1;
      } while (local_70 < 0x10);
      local_74 = local_74 + 1;
    } while (local_74 < 0x10);
    local_78 = local_78 + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)local_78,16.0);
  } while (local_78 < 0x10);
  if (local_24 < this_ptr->tri_count) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bug creating grid!");
  }
  this_ptr->spatial_grid_ptr->triangle_count = local_24;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
