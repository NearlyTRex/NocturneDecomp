// Name: shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620
// Address: 00516620
// Address Range: [[00516620, 00516a3c]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh *this_ptr)

{
  CLodFace *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  SSpatialGrid *pSVar8;
  int *piVar9;
  CLodVert *pCVar10;
  int iVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  char *pcVar13;
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
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  local_24 = 0;
  pSVar8 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->spatial_grid_ptr,0x4004,"..\\shape\\meshlod.cpp",0x43f);
  this_ptr->spatial_grid_ptr = pSVar8;
  if (pSVar8 == (SSpatialGrid *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x440;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Creating quick-grid");
  pcVar13 = (char *)0x0;
  local_30 = 0;
  do {
    local_48 = (float)(int)pcVar13 * (float)0.0625 + (float)-0.51000000000000001;
    local_74 = 0;
    fVar2 = local_48 + (float)0.0625;
    fVar3 = (float)0.050000000000000003;
    local_2c = local_30;
    do {
      local_44 = (float)local_74 * (float)0.0625 + (float)-0.51000000000000001;
      local_70 = 0;
      fVar4 = local_44 + (float)0.0625;
      fVar5 = (float)0.050000000000000003;
      local_28 = local_2c;
      do {
        local_14 = (char *)local_70;
        local_40 = (float)local_70 * (float)0.0625 + (float)-0.51000000000000001;
        fVar6 = local_40 + (float)0.0625;
        fVar7 = (float)0.050000000000000003;
        *(int *)((int)this_ptr->spatial_grid_ptr->cell_start_indices[0][0] + local_28) = local_24;
        iVar12 = 0;
        if (0 < this_ptr->tri_count) {
          local_18 = local_24 * 4;
          local_1c = local_18 + 4;
          local_20 = 0;
          do {
            pCVar1 = this_ptr->tri_data;
            pCVar10 = this_ptr->vertex_data + *(int *)((int)(pCVar1->uv_coords + -2) + local_20 + 4)
            ;
            if ((CLodVert *)&local_54 != pCVar10) {
              local_54 = (pCVar10->position).x;
              local_50 = (pCVar10->position).y;
              local_4c = (pCVar10->position).z;
            }
            if (&local_60 != &local_54) {
              local_60 = local_54;
              local_5c = local_50;
              local_58 = local_4c;
            }
            iVar11 = (int)pCVar1->attribute_indices + local_20 + 4;
            do {
              pCVar10 = this_ptr->vertex_data + *(int *)(iVar11 + 0x10);
              local_3c = (pCVar10->position).x;
              local_38 = (pCVar10->position).y;
              local_34 = (pCVar10->position).z;
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
              iVar11 = iVar11 + 4;
            } while (iVar11 != (int)pCVar1->attribute_indices + local_20 + 0xc);
            if ((((local_60 <= fVar2 + fVar3) && (local_48 <= local_54)) &&
                (local_5c <= fVar4 + fVar5)) &&
               (((local_44 <= local_50 && (local_58 <= fVar6 + fVar7)) && (local_40 <= local_4c))))
            {
              piVar9 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->spatial_grid_data,local_1c,"..\\shape\\meshlod.cpp",
                                  0x464);
              this_ptr->spatial_grid_data = piVar9;
              if (piVar9 == (int *)0x0) {
                pcVar13 = "Out of memory creating gridList";
                g_CurrentFilename = "..\\shape\\meshlod.cpp";
                g_CurrentLineNumber = 0x465;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory creating gridList");
              }
              local_18 = local_18 + 4;
              *(int *)((int)this_ptr->spatial_grid_data + (int)local_14) = iVar12;
              local_14 = (char *)((int)local_14 + 4);
              local_20 = local_20 + 1;
            }
            iVar12 = iVar12 + 1;
            local_20 = local_20 + 0x8c;
          } while (iVar12 < this_ptr->tri_count);
        }
        local_70 = local_70 + 1;
        local_28 = local_28 + 4;
      } while (local_70 < 0x10);
      local_74 = local_74 + 1;
      local_2c = local_2c + 0x40;
    } while (local_74 < 0x10);
    pcVar13 = pcVar13 + 1;
    local_14 = pcVar13;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)pcVar13,16.0);
    local_30 = local_30 + 0x400;
  } while ((int)pcVar13 < 0x10);
  if (local_24 < this_ptr->tri_count) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bug creating grid!");
  }
  this_ptr->spatial_grid_ptr->triangle_count = local_24;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
