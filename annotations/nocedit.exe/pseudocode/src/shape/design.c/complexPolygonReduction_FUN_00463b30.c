// Name: shape_design.c_complexPolygonReduction_FUN_00463b30
// Address: 00463b30
// Address Range: [[00463b30, 0046486c]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)

#include "nocturne.h"

int __cdecl shape_design_c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)

{
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  SShapeEditorPolygon *pSVar6;
  int *piVar7;
  SShapeEditorPolygon *pSVar8;
  byte bVar9;
  double dVar10;
  SShapeEditorPolygon local_2e4;
  int local_160 [20];
  float afStack_110 [16];
  uint auStack_d0 [16];
  float afStack_90 [17];
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint uVar3;
  double dVar2;
  uint uVar1;
  
  bVar9 = 0;
  local_28 = 0;
  local_24 = 0;
  piVar5 = g_PolygonReductionParams;
  piVar7 = local_160;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  local_14 = (int *)0x0;
  local_14 = (int *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (g_PolygonCount * 0xc,"..\\shape\\design.c",6433);
  if (local_14 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 6434;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem in wheel polygon reducer!");
  }
  if (((int)g_ModelPolygonData[selected_polygon_index].vertex_indices_count < 3) ||
     (4 < (int)g_ModelPolygonData[selected_polygon_index].vertex_indices_count)) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("The wheel polygon reducer only handles polys with 3 or 4 sides.",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
  }
  else {
    local_48 = 1;
    *local_14 = selected_polygon_index;
    for (local_4c = 0; uVar2 = local_48, local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      iVar3 = shape_design_c_arePolygonsCoplanar_FUN_00461b70
                        (g_ModelPolygonData + selected_polygon_index,g_ModelPolygonData + local_4c,
                         0x100,8);
      if (((iVar3 != 0) &&
          (g_ModelPolygonData[selected_polygon_index].vertex_indices_count ==
           g_ModelPolygonData[local_4c].vertex_indices_count)) &&
         (local_4c != selected_polygon_index)) {
        local_14[local_48 * 3] = local_4c;
        local_48 = local_48 + 1;
      }
    }
    for (local_4c = 0; local_4c < (int)local_48; local_4c = local_4c + 1) {
      local_14[local_4c * 3 + 2] = -1;
      local_14[local_4c * 3 + 1] = local_14[local_4c * 3 + 2];
    }
    local_3c = 0;
    local_30 = -1;
    for (local_4c = 0; local_4c < (int)local_48; local_4c = local_4c + 1) {
      for (local_1c = 0; local_1c < (int)local_48; local_1c = local_1c + 1) {
        if ((local_1c != local_4c) &&
           (iVar3 = shape_design_c_findSharedEdge_FUN_004635b0
                              ((int *)g_ModelPolygonData[local_14[local_4c * 3]].vertex_indices,
                               (int *)g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices,
                               g_ModelPolygonData[selected_polygon_index].vertex_indices_count,
                               &local_30), iVar3 != 0)) {
          local_14[local_4c * 3 + 2] = local_1c;
          local_14[local_1c * 3 + 1] = local_4c;
          local_3c = local_3c + 1;
          break;
        }
      }
    }
    local_48 = local_3c;
    if (local_30 == 0) {
      local_28 = 1;
    }
    else if (((local_30 == 1) || (local_30 == 2)) || ((local_30 == 3 || (local_30 == 4)))) {
      local_24 = 1;
      local_48 = local_3c + 1;
    }
    local_38 = 0;
    if (local_24 != 0) {
      local_1c = 0;
      for (local_4c = 0; local_4c < (int)local_48; local_4c = local_4c + 1) {
        local_38 = local_1c;
        local_1c = local_14[local_1c * 3 + 1];
        if (local_1c == -1) break;
      }
    }
    local_1c = local_38;
    local_3c = 0;
    local_2c = 0;
    for (local_4c = 0; local_4c < (int)local_48; local_4c = local_4c + 1) {
      local_1c = local_14[local_1c * 3 + 2];
      local_3c = local_3c + 1;
      if ((local_1c == 0) && (local_28 != 0)) {
        local_2c = 1;
        break;
      }
      if ((local_1c < -1) || ((int)(uVar2 - 1) < local_1c)) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Invalid polygon selected in wheel polygon reducer!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        goto LAB_00464840;
      }
    }
    if ((int)local_3c < 2) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Invalid polygon selected in wheel polygon reducer!",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    else if ((local_28 == 0) || (local_2c != 0)) {
      local_44 = 0;
      if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 4) {
        local_44 = local_3c * 2;
      }
      else if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 3) {
        local_44 = local_3c;
      }
      if (local_24 != 0) {
        local_44 = local_44 + 2;
      }
      if ((int)local_44 < 0x11) {
        local_1c = local_38;
        for (local_4c = 0; local_4c < (int)local_3c; local_4c = local_4c + 1) {
          if (local_30 == 0) {
            if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 4) {
              auStack_d0[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[0]];
              afStack_90[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4]];
              afStack_110[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4]];
              auStack_d0[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                   [local_160[local_30 * 4 + 1]];
              afStack_90[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4 + 1]];
              afStack_110[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4 + 1]];
            }
            else if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 3) {
              auStack_d0[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[0]];
              afStack_90[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4]];
              afStack_110[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4]];
            }
          }
          else if ((local_30 == 1) || (local_30 == 2)) {
            auStack_d0[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[local_30 * 4]];
            afStack_90[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4]];
            afStack_110[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4]];
          }
          else if ((local_30 == 3) || (local_30 == 4)) {
            auStack_d0[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[local_30 * 4]];
            afStack_90[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4]];
            afStack_110[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4]];
            auStack_d0[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                 [local_160[local_30 * 4 + 1]];
            afStack_90[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_u[local_160[local_30 * 4 + 1]];
            afStack_110[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_v[local_160[local_30 * 4 + 1]];
          }
          local_34 = local_1c;
          local_1c = local_14[local_1c * 3 + 2];
        }
        if (local_24 != 0) {
          if ((local_30 == 3) || (local_30 == 4)) {
            local_4c = local_4c << 1;
          }
          auStack_d0[local_4c] =
               g_ModelPolygonData[local_14[local_34 * 3]].vertex_indices
               [local_160[local_30 * 4 + 2]];
          afStack_90[local_4c] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_u[local_160[local_30 * 4 + 2]];
          afStack_110[local_4c] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_v[local_160[local_30 * 4 + 2]];
          auStack_d0[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].vertex_indices
               [local_160[local_30 * 4 + 3]];
          afStack_90[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_u[local_160[local_30 * 4 + 3]];
          afStack_110[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_v[local_160[local_30 * 4 + 3]];
        }
        local_2e4.vertex_indices_count = local_44;
        for (local_4c = 0; local_4c < (int)local_44; local_4c = local_4c + 1) {
          local_2e4.vertex_indices[local_4c] = auStack_d0[local_4c];
        }
        dVar2 = (double)(int)((local_44 - 2) * 0xb4) + -0.10000000000000001;
        dVar10 = shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(&local_2e4);
        if (dVar2 <= dVar10) {
          g_ModelPolygonData[selected_polygon_index].vertex_indices_count = local_44;
          for (local_4c = 0;
              local_4c < (int)g_ModelPolygonData[selected_polygon_index].vertex_indices_count;
              local_4c = local_4c + 1) {
            g_ModelPolygonData[selected_polygon_index].vertex_indices[local_4c] =
                 auStack_d0[local_4c];
            g_ModelPolygonData[selected_polygon_index].uv_u[local_4c] = afStack_90[local_4c];
            g_ModelPolygonData[selected_polygon_index].uv_v[local_4c] = afStack_110[local_4c];
          }
          local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (local_3c * 4 + -4,"..\\shape\\design.c",6683);
          if (local_20 == (void *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 6684;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem in wheel polygon reducer!");
          }
          local_1c = local_38;
          local_18 = 0;
          for (local_4c = 0; local_4c < (int)local_3c; local_4c = local_4c + 1) {
            if (local_1c != 0) {
              *(int *)((int)local_20 + local_18 * 4) = local_14[local_1c * 3];
              local_18 = local_18 + 1;
            }
            local_1c = local_14[local_1c * 3 + 2];
          }
          for (local_4c = local_3c - 2; -1 < local_4c; local_4c = local_4c + -1) {
            for (local_1c = 0; local_1c < local_4c; local_1c = local_1c + 1) {
              iVar3 = shape_design_c_comparePolygonIndices_FUN_00463800
                                ((int *)(local_1c * 4 + (int)local_20),
                                 (int *)(local_1c * 4 + 4 + (int)local_20));
              if (0 < iVar3) {
                uVar1 = *(uint *)(local_1c * 4 + (int)local_20);
                *(uint *)((int)local_20 + local_1c * 4) =
                     *(uint *)((int)local_20 + local_1c * 4 + 4);
                *(uint *)((int)local_20 + local_1c * 4 + 4) = uVar1;
              }
            }
          }
          for (local_4c = 0; local_4c < (int)(local_3c - 1); local_4c = local_4c + 1) {
            for (local_1c = *(int *)(local_4c * 4 + (int)local_20); local_1c < g_PolygonCount + -1;
                local_1c = local_1c + 1) {
              pSVar6 = g_ModelPolygonData + local_1c + 1;
              pSVar8 = g_ModelPolygonData + local_1c;
              for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
                pSVar8 = (SShapeEditorPolygon *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
                pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
                pSVar8->polygon_type = pSVar6->polygon_type;
                pSVar6 = pSVar6;
                pSVar8 = pSVar8;
              }
            }
          }
          if (*(int *)((int)local_20 + local_3c * 4 + -8) < selected_polygon_index) {
            selected_polygon_index = *(int *)((int)local_20 + local_3c * 4 + -8);
          }
          shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\shape\\design.c",6733);
          g_PolygonCount = g_PolygonCount - (local_3c - 1);
          shape_design_c_removeUnusedVertices_FUN_00463830();
        }
        else {
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("All polys on selected plane must form a convex polygon.",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          engine_2d_c_clearInputAndWait_FUN_00403260();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          engine_2d_c_clearInputAndWait_FUN_00403260();
        }
      }
      else {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Max points exceeded in wheel polygon reducer!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
      }
    }
    else {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Invalid polygon selected in wheel polygon reducer!",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
LAB_00464840:
  if (local_14 != (int *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",6745);
  }
  return selected_polygon_index;
}
