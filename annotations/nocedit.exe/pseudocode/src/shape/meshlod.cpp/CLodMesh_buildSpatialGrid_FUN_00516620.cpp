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
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24._0_1_ = '\0';
  local_24._1_1_ = '\0';
  local_24._2_1_ = '\0';
  local_24._3_1_ = '\0';
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
  local_24 = 0;
  do {
    local_3c = (float)(int)pcVar13 * (float)0.0625 + (float)-0.51000000000000001;
    iVar14 = 0;
    fVar2 = local_3c + (float)0.0625;
    fVar3 = (float)0.050000000000000003;
    local_20 = local_24;
    do {
      local_38 = (float)iVar14 * (float)0.0625 + (float)-0.51000000000000001;
      local_64 = 0;
      fVar4 = local_38 + (float)0.0625;
      fVar5 = (float)0.050000000000000003;
      local_1c = local_20;
      do {
        local_34 = (float)local_64 * (float)0.0625 + (float)-0.51000000000000001;
        fVar6 = local_34 + (float)0.0625;
        fVar7 = (float)0.050000000000000003;
        *(int *)((int)this_ptr->spatial_grid_ptr->cell_start_indices[0][0] + local_1c) = local_18;
        iVar12 = 0;
        if (0 < this_ptr->tri_count) {
          unaff_EBP = local_18 * 4 + 4;
          local_14 = 0;
          do {
            pCVar1 = this_ptr->tri_data;
            pCVar10 = this_ptr->vertex_data + *(int *)((int)(pCVar1->uv_coords + -2) + local_14 + 4)
            ;
            if ((CLodVert *)&local_48 != pCVar10) {
              local_48 = (pCVar10->position).x;
              local_44 = (pCVar10->position).y;
              local_40 = (pCVar10->position).z;
            }
            if (&local_54 != &local_48) {
              local_54 = local_48;
              local_50 = local_44;
              local_4c = local_40;
            }
            iVar11 = (int)pCVar1->attribute_indices + local_14 + 4;
            do {
              pCVar10 = this_ptr->vertex_data + *(int *)(iVar11 + 0x10);
              local_30 = (pCVar10->position).x;
              local_2c = (pCVar10->position).y;
              local_28 = (pCVar10->position).z;
              if (local_30 < local_54) {
                local_54 = local_30;
              }
              if (local_48 < local_30) {
                local_48 = local_30;
              }
              if (local_2c < local_50) {
                local_50 = local_2c;
              }
              if (local_44 < local_2c) {
                local_44 = local_2c;
              }
              if (local_28 < local_4c) {
                local_4c = local_28;
              }
              if (local_40 < local_28) {
                local_40 = local_28;
              }
              iVar11 = iVar11 + 4;
            } while (iVar11 != (int)pCVar1->attribute_indices + local_14 + 0xc);
            if ((((local_54 <= fVar2 + fVar3) && (local_3c <= local_48)) &&
                (local_50 <= fVar4 + fVar5)) &&
               (((local_38 <= local_44 && (local_4c <= fVar6 + fVar7)) && (local_34 <= local_40))))
            {
              piVar9 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                                 (this_ptr->spatial_grid_data,unaff_EBP,"..\\shape\\meshlod.cpp"
                                  ,0x464);
              this_ptr->spatial_grid_data = piVar9;
              if (piVar9 == (int *)0x0) {
                pcVar13 = "Out of memory creating gridList";
                g_CurrentFilename = "..\\shape\\meshlod.cpp";
                g_CurrentLineNumber = 0x465;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory creating gridList");
              }
              *(int *)((int)this_ptr->spatial_grid_data + unaff_EBX) = iVar12;
              unaff_EBX = unaff_EBX + 4;
              unaff_EBP = unaff_EBP + 1;
            }
            iVar12 = iVar12 + 1;
            local_14 = local_14 + 0x8c;
          } while (iVar12 < this_ptr->tri_count);
        }
        local_64 = local_64 + 1;
        local_1c = local_1c + 4;
      } while (local_64 < 0x10);
      iVar14 = iVar14 + 1;
      local_20 = local_20 + 0x40;
    } while (iVar14 < 0x10);
    pcVar13 = pcVar13 + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)pcVar13,16.0);
    local_20 = local_20 + 0x400;
  } while ((int)pcVar13 < 0x10);
  if (local_14 < this_ptr->tri_count) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x46d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bug creating grid!");
  }
  this_ptr->spatial_grid_ptr->triangle_count = unaff_EBP;
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
