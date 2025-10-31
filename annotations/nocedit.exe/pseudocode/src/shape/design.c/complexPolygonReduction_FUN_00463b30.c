// Name: shape_design.c_complexPolygonReduction_FUN_00463b30
// Address: 00463b30
// Address Range: [[00463b30, 0046486c]]
// Convention: __cdecl
// Signature: int shape_design.c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)
// Cross-references:
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464bf0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061c0aa
//   TerminatedCString s_shape_design_c_0061c0bc
//   TerminatedCString s_Unable_to_get_mem_in_whe_0061c0ce
//   TerminatedCString s_The_wheel_polygon_reduce_0061c0fa
//   TerminatedCString s_Invalid_polygon_selected_0061c13a
//   TerminatedCString s_Invalid_polygon_selected_0061c16d
//   TerminatedCString s_Invalid_polygon_selected_0061c1a0
//   TerminatedCString s_Max_points_exceeded_in_w_0061c1d3
//   double g_CoplanarityTolerance = -0.100000000000000
//   TerminatedCString s_All_polys_on_selected_pl_0061c20e
//   TerminatedCString s_shape_design_c_0061c246
//   TerminatedCString s_shape_design_c_0061c258
//   TerminatedCString s_Unable_to_get_mem_in_whe_0061c26a
//   TerminatedCString s_shape_design_c_0061c296
//   TerminatedCString s_shape_design_c_0061c2a8
//   int DAT_0066eea8 = 0x2
//   undefined4 DAT_0066eeac
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_design.c_arePolygonsCoplanar_FUN_00461b70
//   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
//   shape_design.c_comparePolygonIndices_FUN_00463800
//   shape_design.c_findSharedEdge_FUN_004635b0
//   shape_design.c_removeUnusedVertices_FUN_00463830
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl shape_design_c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int *piVar4;
  SShapeEditorPolygon *pSVar5;
  int *piVar6;
  SShapeEditorPolygon *pSVar7;
  byte bVar8;
  double dVar9;
  double dVar10;
  uint auStack_22c [51];
  int local_160 [20];
  float afStack_110 [16];
  uint auStack_d0 [16];
  uint auStack_90 [17];
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
  
  bVar8 = 0;
  local_28 = 0;
  local_24 = 0;
  piVar4 = &DAT_0066eea8;
  piVar6 = local_160;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  local_14 = (int *)0x0;
  local_14 = (int *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                              (g_PolygonCount * 0xc,"..\\shape\\design.c",0x1921);
  if (local_14 == (int *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x1922;
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
    for (local_4c = 0; local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      iVar3 = shape_design_c_arePolygonsCoplanar_FUN_00461b70
                        (g_ModelPolygonData + selected_polygon_index,g_ModelPolygonData + local_4c,
                         3.58732e-43,8);
      if (((iVar3 != 0) &&
          (g_ModelPolygonData[selected_polygon_index].vertex_indices_count ==
           g_ModelPolygonData[local_4c].vertex_indices_count)) &&
         (local_4c != selected_polygon_index)) {
        local_14[local_48 * 3] = local_4c;
        local_48 = local_48 + 1;
      }
    }
    local_40 = local_48;
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
      if ((local_1c < -1) || (local_40 + -1 < local_1c)) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Invalid polygon selected in wheel polygon reducer!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        goto LAB_00464840;
      }
    }
    local_48 = local_3c;
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
        for (local_4c = 0; uVar2 = local_44, local_4c < (int)local_48; local_4c = local_4c + 1) {
          if (local_30 == 0) {
            if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 4) {
              auStack_d0[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[0]];
              auStack_90[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                   [local_160[local_30 * 4] + 0x10];
              afStack_110[local_4c * 2] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates
                   [local_160[local_30 * 4]];
              auStack_d0[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                   [local_160[local_30 * 4 + 1]];
              auStack_90[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                   [local_160[local_30 * 4 + 1] + 0x10];
              afStack_110[local_4c * 2 + 1] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates
                   [local_160[local_30 * 4 + 1]];
            }
            else if (g_ModelPolygonData[selected_polygon_index].vertex_indices_count == 3) {
              auStack_d0[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[0]];
              auStack_90[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                   [local_160[local_30 * 4] + 0x10];
              afStack_110[local_4c] =
                   g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates
                   [local_160[local_30 * 4]];
            }
          }
          else if ((local_30 == 1) || (local_30 == 2)) {
            auStack_d0[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[local_30 * 4]];
            auStack_90[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                 [local_160[local_30 * 4] + 0x10];
            afStack_110[local_4c] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates[local_160[local_30 * 4]];
          }
          else if ((local_30 == 3) || (local_30 == 4)) {
            auStack_d0[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices[local_160[local_30 * 4]];
            auStack_90[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                 [local_160[local_30 * 4] + 0x10];
            afStack_110[local_4c * 2] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates[local_160[local_30 * 4]];
            auStack_d0[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                 [local_160[local_30 * 4 + 1]];
            auStack_90[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].vertex_indices
                 [local_160[local_30 * 4 + 1] + 0x10];
            afStack_110[local_4c * 2 + 1] =
                 g_ModelPolygonData[local_14[local_1c * 3]].uv_coordinates
                 [local_160[local_30 * 4 + 1]];
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
          auStack_90[local_4c] =
               g_ModelPolygonData[local_14[local_34 * 3]].vertex_indices
               [local_160[local_30 * 4 + 2] + 0x10];
          afStack_110[local_4c] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_coordinates
               [local_160[local_30 * 4 + 2]];
          auStack_d0[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].vertex_indices
               [local_160[local_30 * 4 + 3]];
          auStack_90[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].vertex_indices
               [local_160[local_30 * 4 + 3] + 0x10];
          afStack_110[local_4c + 1] =
               g_ModelPolygonData[local_14[local_34 * 3]].uv_coordinates
               [local_160[local_30 * 4 + 3]];
        }
        for (local_4c = 0; local_4c < (int)uVar2; local_4c = local_4c + 1) {
          auStack_22c[local_4c] = auStack_d0[local_4c];
        }
        dVar10 = (double)(int)((uVar2 - 2) * 0xb4) + g_CoplanarityTolerance;
        dVar9 = shape_design_c_calculatePolygonAngularArea_FUN_00461ee0
                          ((SShapeEditorPolygon *)&stack0xfffffd1c);
        if (dVar10 <= dVar9) {
          g_ModelPolygonData[selected_polygon_index].vertex_indices_count = local_44;
          for (local_4c = 0;
              local_4c < (int)g_ModelPolygonData[selected_polygon_index].vertex_indices_count;
              local_4c = local_4c + 1) {
            g_ModelPolygonData[selected_polygon_index].vertex_indices[local_4c] =
                 auStack_d0[local_4c];
            g_ModelPolygonData[selected_polygon_index].vertex_indices[local_4c + 0x10] =
                 auStack_90[local_4c];
            g_ModelPolygonData[selected_polygon_index].uv_coordinates[local_4c] =
                 afStack_110[local_4c];
          }
          local_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (local_48 * 4 + -4,"..\\shape\\design.c",0x1a1b);
          if (local_20 == (void *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 0x1a1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to get mem in wheel polygon reducer!");
          }
          local_1c = local_38;
          local_18 = 0;
          for (local_4c = 0; local_4c < (int)local_48; local_4c = local_4c + 1) {
            if (local_1c != 0) {
              *(int *)((int)local_20 + local_18 * 4) = local_14[local_1c * 3];
              local_18 = local_18 + 1;
            }
            local_1c = local_14[local_1c * 3 + 2];
          }
          for (local_4c = local_48 - 2; -1 < local_4c; local_4c = local_4c + -1) {
            for (local_1c = 0; local_1c < local_4c; local_1c = local_1c + 1) {
              iVar3 = shape_design_c_comparePolygonIndices_FUN_00463800
                                ((int *)(local_1c * 4 + (int)local_20),
                                 (int *)(local_1c * 4 + 4 + (int)local_20));
              if (0 < iVar3) {
                uVar1 = *(undefined4 *)(local_1c * 4 + (int)local_20);
                *(undefined4 *)((int)local_20 + local_1c * 4) =
                     *(undefined4 *)((int)local_20 + local_1c * 4 + 4);
                *(undefined4 *)((int)local_20 + local_1c * 4 + 4) = uVar1;
              }
            }
          }
          for (local_4c = 0; local_4c < (int)(local_48 - 1); local_4c = local_4c + 1) {
            for (local_1c = *(int *)(local_4c * 4 + (int)local_20); local_1c < g_PolygonCount + -1;
                local_1c = local_1c + 1) {
              pSVar5 = g_ModelPolygonData + local_1c + 1;
              pSVar7 = g_ModelPolygonData + local_1c;
              for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
                pSVar7->polygon_type = pSVar5->polygon_type;
                pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
                pSVar7 = (SShapeEditorPolygon *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
              }
            }
          }
          if (*(int *)((int)local_20 + local_48 * 4 + -8) < selected_polygon_index) {
            selected_polygon_index = *(int *)((int)local_20 + local_48 * 4 + -8);
          }
          shape_memdbg_cpp_debugFree_FUN_0050f460(local_20,"..\\shape\\design.c",0x1a4d);
          g_PolygonCount = g_PolygonCount - (local_48 - 1);
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
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",0x1a59);
  }
  return selected_polygon_index;
}


// Assembly code:
// 00463b30: PUSH EBX
//   Label: shape_design.c_complexPolygonReduction_FUN_00463b30
// 00463b31: PUSH ESI
// 00463b32: PUSH EDI
// 00463b33: PUSH EBP
// 00463b34: MOV EBP,ESP
// 00463b36: SUB ESP,0x2ec
// 00463b3c: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 00463b43: MOV dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (WRITE)
// 00463b4a: MOV ECX,0x14
// 00463b4f: LEA EDI,[EBP + 0xfffffeb0]
//   XREF to: Stack[-0x160] (DATA)
// 00463b55: MOV ESI,0x66eea8
//   XREF to: 0066eea8 (DATA)
// 00463b5a: MOVSD.REP ES:EDI,ESI
//   XREF to: 0066eea8 (READ)
//   XREF to: 0066eeac (READ)
// 00463b5c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 00463b63: PUSH 0x1921
// 00463b68: MOV EAX,0x61c0aa
//   XREF to: 0061c0aa (DATA)
// 00463b6d: PUSH EAX
//   XREF to: 0061c0aa (DATA)
// 00463b6e: IMUL EAX,dword ptr [0x016e990c],0xc
//   XREF to: 016e990c (READ)
// 00463b75: PUSH EAX
// 00463b76: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00463b7b: ADD ESP,0xc
// 00463b7e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00463b81: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 00463b85: JNZ 0x00463ba9
//   XREF to: 00463ba9 (CONDITIONAL_JUMP)
// 00463b87: MOV dword ptr [0x02f0ca48],0x61c0bc
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061c0bc (DATA)
// 00463b91: MOV dword ptr [0x02f0ca4c],0x1922
//   XREF to: 02f0ca4c (WRITE)
// 00463b9b: MOV EAX,0x61c0ce
//   XREF to: 0061c0ce (PARAM)
// 00463ba0: PUSH EAX
//   XREF to: 0061c0ce (DATA)
// 00463ba1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00463ba6: ADD ESP,0x4
// 00463ba9: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00463ba9
//   XREF to: Stack[0x4] (READ)
// 00463bb0: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00463bb7: JL 0x00463bc9
//   XREF to: 00463bc9 (CONDITIONAL_JUMP)
// 00463bb9: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463bc0: CMP dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 00463bc7: JLE 0x00463bf9
//   XREF to: 00463bf9 (CONDITIONAL_JUMP)
// 00463bc9: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00463bc9
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463bce: PUSH 0x0
// 00463bd0: PUSH 0x0
// 00463bd2: MOV EAX,0x61c0fa
//   XREF to: 0061c0fa (PARAM)
// 00463bd7: PUSH EAX
//   XREF to: 0061c0fa (DATA)
// 00463bd8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463bdd: ADD ESP,0xc
// 00463be0: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463be5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463bea: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463bef: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463bf4: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 00463bf9: MOV dword ptr [EBP + -0x38],0x1
//   Label: LAB_00463bf9
//   XREF to: Stack[-0x48] (WRITE)
// 00463c00: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463c03: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463c06: MOV dword ptr [EDX],EAX
// 00463c08: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463c0f: JMP 0x00463c17
//   XREF to: 00463c17 (UNCONDITIONAL_JUMP)
// 00463c11: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463c11
//   XREF to: Stack[-0x4c] (READ)
// 00463c14: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463c17: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463c17
//   XREF to: Stack[-0x4c] (READ)
// 00463c1a: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 00463c20: JGE 0x00463c98
//   XREF to: 00463c98 (CONDITIONAL_JUMP)
// 00463c26: PUSH 0x8
// 00463c28: PUSH 0x100
// 00463c2d: IMUL EDX,dword ptr [EBP + -0x3c],0x184
//   XREF to: Stack[-0x4c] (READ)
// 00463c34: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00463c39: ADD EAX,EDX
// 00463c3b: PUSH EAX
// 00463c3c: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463c43: MOV EAX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00463c48: ADD EAX,EDX
// 00463c4a: PUSH EAX
// 00463c4b: CALL shape_design.c_arePolygonsCoplanar_FUN_00461b70
//   XREF to: 00461b70 (UNCONDITIONAL_CALL)
// 00463c50: ADD ESP,0x10
// 00463c53: TEST EAX,EAX
// 00463c55: JZ 0x00463c73
//   XREF to: 00463c73 (CONDITIONAL_JUMP)
// 00463c57: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463c5e: IMUL EDX,dword ptr [EBP + -0x3c],0x184
//   XREF to: Stack[-0x4c] (READ)
// 00463c65: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00463c6b: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00463c71: JZ 0x00463c75
//   XREF to: 00463c75 (CONDITIONAL_JUMP)
// 00463c73: JMP 0x00463c7d
//   Label: LAB_00463c73
//   XREF to: 00463c7d (UNCONDITIONAL_JUMP)
// 00463c75: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463c75
//   XREF to: Stack[-0x4c] (READ)
// 00463c78: CMP EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00463c7b: JNZ 0x00463c7f
//   XREF to: 00463c7f (CONDITIONAL_JUMP)
// 00463c7d: JMP 0x00463c93
//   Label: LAB_00463c7d
//   XREF to: 00463c93 (UNCONDITIONAL_JUMP)
// 00463c7f: IMUL EAX,dword ptr [EBP + -0x38],0xc
//   Label: LAB_00463c7f
//   XREF to: Stack[-0x48] (READ)
// 00463c83: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463c86: ADD EDX,EAX
// 00463c88: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00463c8b: MOV dword ptr [EDX],EAX
// 00463c8d: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463c90: INC dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ_WRITE)
// 00463c93: JMP 0x00463c11
//   Label: LAB_00463c93
//   XREF to: 00463c11 (UNCONDITIONAL_JUMP)
// 00463c98: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00463c98
//   XREF to: Stack[-0x48] (READ)
// 00463c9b: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00463c9e: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463ca5: JMP 0x00463cad
//   XREF to: 00463cad (UNCONDITIONAL_JUMP)
// 00463ca7: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463ca7
//   XREF to: Stack[-0x4c] (READ)
// 00463caa: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463cad: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463cad
//   XREF to: Stack[-0x4c] (READ)
// 00463cb0: CMP EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00463cb3: JGE 0x00463cd2
//   XREF to: 00463cd2 (CONDITIONAL_JUMP)
// 00463cb5: IMUL EAX,dword ptr [EBP + -0x3c],0xc
//   XREF to: Stack[-0x4c] (READ)
// 00463cb9: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463cbc: MOV dword ptr [EAX + 0x8],0xffffffff
// 00463cc3: IMUL EDX,dword ptr [EBP + -0x3c],0xc
//   XREF to: Stack[-0x4c] (READ)
// 00463cc7: ADD EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463cca: MOV EAX,dword ptr [EAX + 0x8]
// 00463ccd: MOV dword ptr [EDX + 0x4],EAX
// 00463cd0: JMP 0x00463ca7
//   XREF to: 00463ca7 (UNCONDITIONAL_JUMP)
// 00463cd2: MOV dword ptr [EBP + -0x2c],0x0
//   Label: LAB_00463cd2
//   XREF to: Stack[-0x3c] (WRITE)
// 00463cd9: MOV dword ptr [EBP + -0x20],0xffffffff
//   XREF to: Stack[-0x30] (WRITE)
// 00463ce0: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463ce7: JMP 0x00463cef
//   XREF to: 00463cef (UNCONDITIONAL_JUMP)
// 00463ce9: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463ce9
//   XREF to: Stack[-0x4c] (READ)
// 00463cec: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463cef: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463cef
//   XREF to: Stack[-0x4c] (READ)
// 00463cf2: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463cf5: JGE 0x00463da1
//   XREF to: 00463da1 (CONDITIONAL_JUMP)
// 00463cfb: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00463d02: JMP 0x00463d0a
//   XREF to: 00463d0a (UNCONDITIONAL_JUMP)
// 00463d04: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00463d04
//   XREF to: Stack[-0x1c] (READ)
// 00463d07: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00463d0a: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00463d0a
//   XREF to: Stack[-0x1c] (READ)
// 00463d0d: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463d10: JGE 0x00463d9c
//   XREF to: 00463d9c (CONDITIONAL_JUMP)
// 00463d16: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463d19: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00463d1c: JZ 0x00463d6f
//   XREF to: 00463d6f (CONDITIONAL_JUMP)
// 00463d1e: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 00463d21: PUSH EAX
// 00463d22: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463d29: PUSH dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 00463d2f: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00463d33: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463d36: IMUL EAX,dword ptr [EAX],0x184
// 00463d3c: MOV EDX,0x16e9910
//   XREF to: 016e9910 (DATA)
// 00463d41: ADD EAX,EDX
// 00463d43: ADD EAX,0xb8
// 00463d48: PUSH EAX
// 00463d49: IMUL EAX,dword ptr [EBP + -0x3c],0xc
//   XREF to: Stack[-0x4c] (READ)
// 00463d4d: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463d50: IMUL EAX,dword ptr [EAX],0x184
// 00463d56: MOV EDX,0x16e9910
//   XREF to: 016e9910 (PARAM)
// 00463d5b: ADD EAX,EDX
// 00463d5d: ADD EAX,0xb8
// 00463d62: PUSH EAX
// 00463d63: CALL shape_design.c_findSharedEdge_FUN_004635b0
//   XREF to: 004635b0 (UNCONDITIONAL_CALL)
// 00463d68: ADD ESP,0x10
// 00463d6b: TEST EAX,EAX
// 00463d6d: JNZ 0x00463d71
//   XREF to: 00463d71 (CONDITIONAL_JUMP)
// 00463d6f: JMP 0x00463d97
//   Label: LAB_00463d6f
//   XREF to: 00463d97 (UNCONDITIONAL_JUMP)
// 00463d71: IMUL EAX,dword ptr [EBP + -0x3c],0xc
//   Label: LAB_00463d71
//   XREF to: Stack[-0x4c] (READ)
// 00463d75: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463d78: ADD EDX,EAX
// 00463d7a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463d7d: MOV dword ptr [EDX + 0x8],EAX
// 00463d80: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00463d84: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463d87: ADD EDX,EAX
// 00463d89: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00463d8c: MOV dword ptr [EDX + 0x4],EAX
// 00463d8f: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00463d92: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 00463d95: JMP 0x00463d9c
//   XREF to: 00463d9c (UNCONDITIONAL_JUMP)
// 00463d97: JMP 0x00463d04
//   Label: LAB_00463d97
//   XREF to: 00463d04 (UNCONDITIONAL_JUMP)
// 00463d9c: JMP 0x00463ce9
//   Label: LAB_00463d9c
//   XREF to: 00463ce9 (UNCONDITIONAL_JUMP)
// 00463da1: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_00463da1
//   XREF to: Stack[-0x3c] (READ)
// 00463da4: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00463da7: CMP dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (READ)
// 00463dab: JNZ 0x00463db6
//   XREF to: 00463db6 (CONDITIONAL_JUMP)
// 00463dad: MOV dword ptr [EBP + -0x18],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 00463db4: JMP 0x00463ddf
//   XREF to: 00463ddf (UNCONDITIONAL_JUMP)
// 00463db6: CMP dword ptr [EBP + -0x20],0x1
//   Label: LAB_00463db6
//   XREF to: Stack[-0x30] (READ)
// 00463dba: JZ 0x00463dc2
//   XREF to: 00463dc2 (CONDITIONAL_JUMP)
// 00463dbc: CMP dword ptr [EBP + -0x20],0x2
//   XREF to: Stack[-0x30] (READ)
// 00463dc0: JNZ 0x00463dc4
//   XREF to: 00463dc4 (CONDITIONAL_JUMP)
// 00463dc2: JMP 0x00463dca
//   Label: LAB_00463dc2
//   XREF to: 00463dca (UNCONDITIONAL_JUMP)
// 00463dc4: CMP dword ptr [EBP + -0x20],0x3
//   Label: LAB_00463dc4
//   XREF to: Stack[-0x30] (READ)
// 00463dc8: JNZ 0x00463dcc
//   XREF to: 00463dcc (CONDITIONAL_JUMP)
// 00463dca: JMP 0x00463dd2
//   Label: LAB_00463dca
//   XREF to: 00463dd2 (UNCONDITIONAL_JUMP)
// 00463dcc: CMP dword ptr [EBP + -0x20],0x4
//   Label: LAB_00463dcc
//   XREF to: Stack[-0x30] (READ)
// 00463dd0: JNZ 0x00463ddf
//   XREF to: 00463ddf (CONDITIONAL_JUMP)
// 00463dd2: MOV dword ptr [EBP + -0x14],0x1
//   Label: LAB_00463dd2
//   XREF to: Stack[-0x24] (WRITE)
// 00463dd9: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463ddc: INC dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ_WRITE)
// 00463ddf: MOV dword ptr [EBP + -0x28],0x0
//   Label: LAB_00463ddf
//   XREF to: Stack[-0x38] (WRITE)
// 00463de6: CMP dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x24] (READ)
// 00463dea: JZ 0x00463e27
//   XREF to: 00463e27 (CONDITIONAL_JUMP)
// 00463dec: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463df3: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00463dfa: JMP 0x00463e02
//   XREF to: 00463e02 (UNCONDITIONAL_JUMP)
// 00463dfc: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463dfc
//   XREF to: Stack[-0x4c] (READ)
// 00463dff: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463e02: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463e02
//   XREF to: Stack[-0x4c] (READ)
// 00463e05: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463e08: JGE 0x00463e27
//   XREF to: 00463e27 (CONDITIONAL_JUMP)
// 00463e0a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463e0d: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00463e10: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00463e14: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463e17: MOV EAX,dword ptr [EAX + 0x4]
// 00463e1a: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463e1d: CMP dword ptr [EBP + -0xc],-0x1
//   XREF to: Stack[-0x1c] (READ)
// 00463e21: JNZ 0x00463e25
//   XREF to: 00463e25 (CONDITIONAL_JUMP)
// 00463e23: JMP 0x00463e27
//   XREF to: 00463e27 (UNCONDITIONAL_JUMP)
// 00463e25: JMP 0x00463dfc
//   Label: LAB_00463e25
//   XREF to: 00463dfc (UNCONDITIONAL_JUMP)
// 00463e27: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00463e27
//   XREF to: Stack[-0x38] (READ)
// 00463e2a: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463e2d: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 00463e34: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00463e3b: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463e42: JMP 0x00463e4a
//   XREF to: 00463e4a (UNCONDITIONAL_JUMP)
// 00463e44: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463e44
//   XREF to: Stack[-0x4c] (READ)
// 00463e47: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463e4a: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463e4a
//   XREF to: Stack[-0x4c] (READ)
// 00463e4d: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463e50: JGE 0x00463ec1
//   XREF to: 00463ec1 (CONDITIONAL_JUMP)
// 00463e56: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00463e5a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463e5d: MOV EAX,dword ptr [EAX + 0x8]
// 00463e60: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463e63: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00463e66: INC dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 00463e69: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 00463e6d: JNZ 0x00463e75
//   XREF to: 00463e75 (CONDITIONAL_JUMP)
// 00463e6f: CMP dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (READ)
// 00463e73: JNZ 0x00463e77
//   XREF to: 00463e77 (CONDITIONAL_JUMP)
// 00463e75: JMP 0x00463e80
//   Label: LAB_00463e75
//   XREF to: 00463e80 (UNCONDITIONAL_JUMP)
// 00463e77: MOV dword ptr [EBP + -0x1c],0x1
//   Label: LAB_00463e77
//   XREF to: Stack[-0x2c] (WRITE)
// 00463e7e: JMP 0x00463ec1
//   XREF to: 00463ec1 (UNCONDITIONAL_JUMP)
// 00463e80: CMP dword ptr [EBP + -0xc],-0x1
//   Label: LAB_00463e80
//   XREF to: Stack[-0x1c] (READ)
// 00463e84: JL 0x00463e8f
//   XREF to: 00463e8f (CONDITIONAL_JUMP)
// 00463e86: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 00463e89: DEC EAX
// 00463e8a: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00463e8d: JGE 0x00463ebf
//   XREF to: 00463ebf (CONDITIONAL_JUMP)
// 00463e8f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00463e8f
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463e94: PUSH 0x0
// 00463e96: PUSH 0x0
// 00463e98: MOV EAX,0x61c13a
//   XREF to: 0061c13a (PARAM)
// 00463e9d: PUSH EAX
//   XREF to: 0061c13a (DATA)
// 00463e9e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463ea3: ADD ESP,0xc
// 00463ea6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463eab: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463eb0: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463eb5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463eba: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 00463ebf: JMP 0x00463e44
//   Label: LAB_00463ebf
//   XREF to: 00463e44 (UNCONDITIONAL_JUMP)
// 00463ec1: MOV EAX,dword ptr [EBP + -0x2c]
//   Label: LAB_00463ec1
//   XREF to: Stack[-0x3c] (READ)
// 00463ec4: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00463ec7: CMP dword ptr [EBP + -0x38],0x2
//   XREF to: Stack[-0x48] (READ)
// 00463ecb: JGE 0x00463efd
//   XREF to: 00463efd (CONDITIONAL_JUMP)
// 00463ecd: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463ed2: PUSH 0x0
// 00463ed4: PUSH 0x0
// 00463ed6: MOV EAX,0x61c16d
//   XREF to: 0061c16d (PARAM)
// 00463edb: PUSH EAX
//   XREF to: 0061c16d (DATA)
// 00463edc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463ee1: ADD ESP,0xc
// 00463ee4: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463ee9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463eee: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463ef3: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463ef8: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 00463efd: CMP dword ptr [EBP + -0x18],0x0
//   Label: LAB_00463efd
//   XREF to: Stack[-0x28] (READ)
// 00463f01: JZ 0x00463f09
//   XREF to: 00463f09 (CONDITIONAL_JUMP)
// 00463f03: CMP dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (READ)
// 00463f07: JZ 0x00463f0b
//   XREF to: 00463f0b (CONDITIONAL_JUMP)
// 00463f09: JMP 0x00463f3b
//   Label: LAB_00463f09
//   XREF to: 00463f3b (UNCONDITIONAL_JUMP)
// 00463f0b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00463f0b
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463f10: PUSH 0x0
// 00463f12: PUSH 0x0
// 00463f14: MOV EAX,0x61c1a0
//   XREF to: 0061c1a0 (PARAM)
// 00463f19: PUSH EAX
//   XREF to: 0061c1a0 (DATA)
// 00463f1a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463f1f: ADD ESP,0xc
// 00463f22: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463f27: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463f2c: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463f31: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463f36: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 00463f3b: MOV dword ptr [EBP + -0x34],0x0
//   Label: LAB_00463f3b
//   XREF to: Stack[-0x44] (WRITE)
// 00463f42: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463f49: CMP dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 00463f50: JNZ 0x00463f5c
//   XREF to: 00463f5c (CONDITIONAL_JUMP)
// 00463f52: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463f55: ADD EAX,EAX
// 00463f57: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00463f5a: JMP 0x00463f72
//   XREF to: 00463f72 (UNCONDITIONAL_JUMP)
// 00463f5c: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00463f5c
//   XREF to: Stack[0x4] (READ)
// 00463f63: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00463f6a: JNZ 0x00463f72
//   XREF to: 00463f72 (CONDITIONAL_JUMP)
// 00463f6c: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463f6f: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00463f72: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_00463f72
//   XREF to: Stack[-0x24] (READ)
// 00463f76: JZ 0x00463f7c
//   XREF to: 00463f7c (CONDITIONAL_JUMP)
// 00463f78: ADD dword ptr [EBP + -0x34],0x2
//   XREF to: Stack[-0x44] (READ_WRITE)
// 00463f7c: CMP dword ptr [EBP + -0x34],0x10
//   Label: LAB_00463f7c
//   XREF to: Stack[-0x44] (READ)
// 00463f80: JLE 0x00463fb2
//   XREF to: 00463fb2 (CONDITIONAL_JUMP)
// 00463f82: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00463f87: PUSH 0x0
// 00463f89: PUSH 0x0
// 00463f8b: MOV EAX,0x61c1d3
//   XREF to: 0061c1d3 (PARAM)
// 00463f90: PUSH EAX
//   XREF to: 0061c1d3 (DATA)
// 00463f91: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00463f96: ADD ESP,0xc
// 00463f99: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00463f9e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463fa3: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00463fa8: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00463fad: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 00463fb2: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00463fb2
//   XREF to: Stack[-0x38] (READ)
// 00463fb5: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00463fb8: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00463fbf: JMP 0x00463fc7
//   XREF to: 00463fc7 (UNCONDITIONAL_JUMP)
// 00463fc1: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463fc1
//   XREF to: Stack[-0x4c] (READ)
// 00463fc4: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00463fc7: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00463fc7
//   XREF to: Stack[-0x4c] (READ)
// 00463fca: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00463fcd: JGE 0x004643ca
//   XREF to: 004643ca (CONDITIONAL_JUMP)
// 00463fd3: CMP dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (READ)
// 00463fd7: JNZ 0x004641ce
//   XREF to: 004641ce (CONDITIONAL_JUMP)
// 00463fdd: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00463fe4: CMP dword ptr [EAX + 0x16e99b4],0x4
//   XREF to: 016e99b4 (DATA)
// 00463feb: JNZ 0x00464122
//   XREF to: 00464122 (CONDITIONAL_JUMP)
// 00463ff1: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00463ff5: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00463ff8: IMUL EDX,dword ptr [EAX],0x184
// 00463ffe: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464001: SHL EAX,0x4
// 00464004: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 0046400b: SHL EAX,0x2
// 0046400e: ADD EAX,EDX
// 00464010: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464013: SHL EDX,0x3
// 00464016: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0046401c: MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX
// 00464023: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464027: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046402a: IMUL EDX,dword ptr [EAX],0x184
// 00464030: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464033: SHL EAX,0x4
// 00464036: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 0046403d: SHL EAX,0x2
// 00464040: ADD EDX,EAX
// 00464042: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464045: SHL EAX,0x3
// 00464048: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046404e: FSTP float ptr [EAX + EBP*0x1 + -0x80]
// 00464052: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464056: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464059: IMUL EDX,dword ptr [EAX],0x184
// 0046405f: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464062: SHL EAX,0x4
// 00464065: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 0046406c: SHL EAX,0x2
// 0046406f: ADD EAX,EDX
// 00464071: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464074: SHL EDX,0x3
// 00464077: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046407d: FSTP float ptr [EDX + EBP*0x1 + 0xffffff00]
// 00464084: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464088: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046408b: IMUL EDX,dword ptr [EAX],0x184
// 00464091: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464094: SHL EAX,0x4
// 00464097: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 0046409e: SHL EAX,0x2
// 004640a1: ADD EDX,EAX
// 004640a3: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004640a6: ADD EAX,EAX
// 004640a8: SHL EAX,0x2
// 004640ab: MOV EDX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004640b1: MOV dword ptr [EAX + EBP*0x1 + 0xffffff44],EDX
// 004640b8: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004640bc: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004640bf: IMUL EDX,dword ptr [EAX],0x184
// 004640c5: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004640c8: SHL EAX,0x4
// 004640cb: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 004640d2: SHL EAX,0x2
// 004640d5: ADD EDX,EAX
// 004640d7: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004640da: ADD EAX,EAX
// 004640dc: SHL EAX,0x2
// 004640df: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004640e5: FSTP float ptr [EAX + EBP*0x1 + -0x7c]
// 004640e9: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004640ed: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004640f0: IMUL EDX,dword ptr [EAX],0x184
// 004640f6: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004640f9: SHL EAX,0x4
// 004640fc: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 00464103: SHL EAX,0x2
// 00464106: ADD EDX,EAX
// 00464108: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046410b: ADD EAX,EAX
// 0046410d: SHL EAX,0x2
// 00464110: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00464116: FSTP float ptr [EAX + EBP*0x1 + 0xffffff04]
// 0046411d: JMP 0x004641c9
//   XREF to: 004641c9 (UNCONDITIONAL_JUMP)
// 00464122: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_00464122
//   XREF to: Stack[0x4] (READ)
// 00464129: CMP dword ptr [EAX + 0x16e99b4],0x3
//   XREF to: 016e99b4 (DATA)
// 00464130: JNZ 0x004641c9
//   XREF to: 004641c9 (CONDITIONAL_JUMP)
// 00464136: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046413a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046413d: IMUL EDX,dword ptr [EAX],0x184
// 00464143: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464146: SHL EAX,0x4
// 00464149: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 00464150: SHL EAX,0x2
// 00464153: ADD EAX,EDX
// 00464155: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464158: SHL EDX,0x2
// 0046415b: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00464161: MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX
// 00464168: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046416c: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046416f: IMUL EDX,dword ptr [EAX],0x184
// 00464175: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464178: SHL EAX,0x4
// 0046417b: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 00464182: SHL EAX,0x2
// 00464185: ADD EAX,EDX
// 00464187: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046418a: SHL EDX,0x2
// 0046418d: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00464193: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00464197: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046419b: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046419e: IMUL EDX,dword ptr [EAX],0x184
// 004641a4: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004641a7: SHL EAX,0x4
// 004641aa: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 004641b1: SHL EAX,0x2
// 004641b4: ADD EAX,EDX
// 004641b6: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004641b9: SHL EDX,0x2
// 004641bc: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004641c2: FSTP float ptr [EDX + EBP*0x1 + 0xffffff00]
// 004641c9: JMP 0x004643b2
//   Label: LAB_004641c9
//   XREF to: 004643b2 (UNCONDITIONAL_JUMP)
// 004641ce: CMP dword ptr [EBP + -0x20],0x1
//   Label: LAB_004641ce
//   XREF to: Stack[-0x30] (READ)
// 004641d2: JZ 0x004641de
//   XREF to: 004641de (CONDITIONAL_JUMP)
// 004641d4: CMP dword ptr [EBP + -0x20],0x2
//   XREF to: Stack[-0x30] (READ)
// 004641d8: JNZ 0x00464276
//   XREF to: 00464276 (CONDITIONAL_JUMP)
// 004641de: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   Label: LAB_004641de
//   XREF to: Stack[-0x1c] (READ)
// 004641e2: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004641e5: IMUL EDX,dword ptr [EAX],0x184
// 004641eb: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004641ee: SHL EAX,0x4
// 004641f1: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 004641f8: SHL EAX,0x2
// 004641fb: ADD EAX,EDX
// 004641fd: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464200: SHL EDX,0x2
// 00464203: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00464209: MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX
// 00464210: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464214: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464217: IMUL EDX,dword ptr [EAX],0x184
// 0046421d: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464220: SHL EAX,0x4
// 00464223: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 0046422a: SHL EAX,0x2
// 0046422d: ADD EAX,EDX
// 0046422f: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464232: SHL EDX,0x2
// 00464235: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046423b: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 0046423f: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464243: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464246: IMUL EDX,dword ptr [EAX],0x184
// 0046424c: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046424f: SHL EAX,0x4
// 00464252: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 00464259: SHL EAX,0x2
// 0046425c: ADD EAX,EDX
// 0046425e: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464261: SHL EDX,0x2
// 00464264: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046426a: FSTP float ptr [EDX + EBP*0x1 + 0xffffff00]
// 00464271: JMP 0x004643b2
//   XREF to: 004643b2 (UNCONDITIONAL_JUMP)
// 00464276: CMP dword ptr [EBP + -0x20],0x3
//   Label: LAB_00464276
//   XREF to: Stack[-0x30] (READ)
// 0046427a: JZ 0x00464286
//   XREF to: 00464286 (CONDITIONAL_JUMP)
// 0046427c: CMP dword ptr [EBP + -0x20],0x4
//   XREF to: Stack[-0x30] (READ)
// 00464280: JNZ 0x004643b2
//   XREF to: 004643b2 (CONDITIONAL_JUMP)
// 00464286: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   Label: LAB_00464286
//   XREF to: Stack[-0x1c] (READ)
// 0046428a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046428d: IMUL EDX,dword ptr [EAX],0x184
// 00464293: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464296: SHL EAX,0x4
// 00464299: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 004642a0: SHL EAX,0x2
// 004642a3: ADD EAX,EDX
// 004642a5: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004642a8: SHL EDX,0x3
// 004642ab: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004642b1: MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX
// 004642b8: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004642bc: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004642bf: IMUL EDX,dword ptr [EAX],0x184
// 004642c5: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004642c8: SHL EAX,0x4
// 004642cb: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 004642d2: SHL EAX,0x2
// 004642d5: ADD EDX,EAX
// 004642d7: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004642da: SHL EAX,0x3
// 004642dd: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004642e3: FSTP float ptr [EAX + EBP*0x1 + -0x80]
// 004642e7: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004642eb: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004642ee: IMUL EDX,dword ptr [EAX],0x184
// 004642f4: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004642f7: SHL EAX,0x4
// 004642fa: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0]
// 00464301: SHL EAX,0x2
// 00464304: ADD EAX,EDX
// 00464306: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464309: SHL EDX,0x3
// 0046430c: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00464312: FSTP float ptr [EDX + EBP*0x1 + 0xffffff00]
// 00464319: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 0046431d: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464320: IMUL EDX,dword ptr [EAX],0x184
// 00464326: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464329: SHL EAX,0x4
// 0046432c: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 00464333: SHL EAX,0x2
// 00464336: ADD EDX,EAX
// 00464338: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046433b: ADD EAX,EAX
// 0046433d: SHL EAX,0x2
// 00464340: MOV EDX,dword ptr [EDX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 00464346: MOV dword ptr [EAX + EBP*0x1 + 0xffffff44],EDX
// 0046434d: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464351: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464354: IMUL EDX,dword ptr [EAX],0x184
// 0046435a: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046435d: SHL EAX,0x4
// 00464360: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 00464367: SHL EAX,0x2
// 0046436a: ADD EDX,EAX
// 0046436c: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046436f: ADD EAX,EAX
// 00464371: SHL EAX,0x2
// 00464374: FLD float ptr [EDX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046437a: FSTP float ptr [EAX + EBP*0x1 + -0x7c]
// 0046437e: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 00464382: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464385: IMUL EDX,dword ptr [EAX],0x184
// 0046438b: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0046438e: SHL EAX,0x4
// 00464391: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4]
// 00464398: SHL EAX,0x2
// 0046439b: ADD EDX,EAX
// 0046439d: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004643a0: ADD EAX,EAX
// 004643a2: SHL EAX,0x2
// 004643a5: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 004643ab: FSTP float ptr [EAX + EBP*0x1 + 0xffffff04]
// 004643b2: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004643b2
//   XREF to: Stack[-0x1c] (READ)
// 004643b5: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004643b8: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004643bc: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004643bf: MOV EAX,dword ptr [EAX + 0x8]
// 004643c2: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004643c5: JMP 0x00463fc1
//   XREF to: 00463fc1 (UNCONDITIONAL_JUMP)
// 004643ca: CMP dword ptr [EBP + -0x14],0x0
//   Label: LAB_004643ca
//   XREF to: Stack[-0x24] (READ)
// 004643ce: JZ 0x00464509
//   XREF to: 00464509 (CONDITIONAL_JUMP)
// 004643d4: CMP dword ptr [EBP + -0x20],0x3
//   XREF to: Stack[-0x30] (READ)
// 004643d8: JZ 0x004643e0
//   XREF to: 004643e0 (CONDITIONAL_JUMP)
// 004643da: CMP dword ptr [EBP + -0x20],0x4
//   XREF to: Stack[-0x30] (READ)
// 004643de: JNZ 0x004643e3
//   XREF to: 004643e3 (CONDITIONAL_JUMP)
// 004643e0: SHL dword ptr [EBP + -0x3c],0x1
//   Label: LAB_004643e0
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 004643e3: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   Label: LAB_004643e3
//   XREF to: Stack[-0x34] (READ)
// 004643e7: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004643ea: IMUL EDX,dword ptr [EAX],0x184
// 004643f0: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004643f3: SHL EAX,0x4
// 004643f6: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8]
// 004643fd: SHL EAX,0x2
// 00464400: ADD EAX,EDX
// 00464402: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464405: SHL EDX,0x2
// 00464408: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0046440e: MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX
// 00464415: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   XREF to: Stack[-0x34] (READ)
// 00464419: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046441c: IMUL EDX,dword ptr [EAX],0x184
// 00464422: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464425: SHL EAX,0x4
// 00464428: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8]
// 0046442f: SHL EAX,0x2
// 00464432: ADD EAX,EDX
// 00464434: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464437: SHL EDX,0x2
// 0046443a: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 00464440: FSTP float ptr [EDX + EBP*0x1 + -0x80]
// 00464444: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   XREF to: Stack[-0x34] (READ)
// 00464448: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046444b: IMUL EDX,dword ptr [EAX],0x184
// 00464451: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464454: SHL EAX,0x4
// 00464457: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8]
// 0046445e: SHL EAX,0x2
// 00464461: ADD EDX,EAX
// 00464463: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464466: SHL EAX,0x2
// 00464469: FLD float ptr [EDX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046446f: FSTP float ptr [EAX + EBP*0x1 + 0xffffff00]
// 00464476: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   XREF to: Stack[-0x34] (READ)
// 0046447a: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046447d: IMUL EDX,dword ptr [EAX],0x184
// 00464483: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 00464486: SHL EAX,0x4
// 00464489: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc]
// 00464490: SHL EAX,0x2
// 00464493: ADD EAX,EDX
// 00464495: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464498: SHL EDX,0x2
// 0046449b: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 004644a1: MOV dword ptr [EDX + EBP*0x1 + 0xffffff44],EAX
// 004644a8: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   XREF to: Stack[-0x34] (READ)
// 004644ac: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004644af: IMUL EDX,dword ptr [EAX],0x184
// 004644b5: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004644b8: SHL EAX,0x4
// 004644bb: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc]
// 004644c2: SHL EAX,0x2
// 004644c5: ADD EAX,EDX
// 004644c7: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004644ca: SHL EDX,0x2
// 004644cd: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 004644d3: FSTP float ptr [EDX + EBP*0x1 + -0x7c]
// 004644d7: IMUL EAX,dword ptr [EBP + -0x24],0xc
//   XREF to: Stack[-0x34] (READ)
// 004644db: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004644de: IMUL EDX,dword ptr [EAX],0x184
// 004644e4: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 004644e7: SHL EAX,0x4
// 004644ea: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc]
// 004644f1: SHL EAX,0x2
// 004644f4: ADD EAX,EDX
// 004644f6: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004644f9: SHL EDX,0x2
// 004644fc: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 00464502: FSTP float ptr [EDX + EBP*0x1 + 0xffffff04]
// 00464509: MOV EAX,dword ptr [EBP + -0x34]
//   Label: LAB_00464509
//   XREF to: Stack[-0x44] (READ)
// 0046450c: MOV dword ptr [EBP + 0xfffffdd0],EAX
//   XREF to: Stack[-0x240] (WRITE)
// 00464512: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 00464519: JMP 0x00464521
//   XREF to: 00464521 (UNCONDITIONAL_JUMP)
// 0046451b: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_0046451b
//   XREF to: Stack[-0x4c] (READ)
// 0046451e: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 00464521: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_00464521
//   XREF to: Stack[-0x4c] (READ)
// 00464524: CMP EAX,dword ptr [EBP + 0xfffffdd0]
//   XREF to: Stack[-0x240] (READ)
// 0046452a: JGE 0x00464548
//   XREF to: 00464548 (CONDITIONAL_JUMP)
// 0046452c: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046452f: SHL EAX,0x2
// 00464532: MOV EDX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464535: SHL EDX,0x2
// 00464538: MOV EAX,dword ptr [EAX + EBP*0x1 + 0xffffff40]
// 0046453f: MOV dword ptr [EDX + EBP*0x1 + 0xfffffde4],EAX
// 00464546: JMP 0x0046451b
//   XREF to: 0046451b (UNCONDITIONAL_JUMP)
// 00464548: MOV EAX,dword ptr [EBP + 0xfffffdd0]
//   Label: LAB_00464548
//   XREF to: Stack[-0x240] (READ)
// 0046454e: SUB EAX,0x2
// 00464551: IMUL EAX,EAX,0xb4
// 00464557: MOV dword ptr [EBP + 0xfffffd28],EAX
//   XREF to: Stack[-0x2e8] (WRITE)
// 0046455d: FILD dword ptr [EBP + 0xfffffd28]
//   XREF to: Stack[-0x2e8] (READ)
// 00464563: FADD double ptr [0x0061c206]
//   XREF to: 0061c206 (READ)
// 00464569: FSTP double ptr [EBP + 0xfffffd20]
//   XREF to: Stack[-0x2f0] (WRITE)
// 0046456f: LEA EAX,[EBP + 0xfffffd2c]
//   XREF to: Stack[-0x2e4] (DATA)
// 00464575: PUSH EAX
// 00464576: CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
//   XREF to: 00461ee0 (UNCONDITIONAL_CALL)
// 0046457b: MOV dword ptr [EBP + 0xfffffd18],EAX
//   XREF to: Stack[-0x2f8] (WRITE)
// 00464581: MOV dword ptr [EBP + 0xfffffd1c],EDX
//   XREF to: Stack[-0x2f4] (WRITE)
// 00464587: FLD double ptr [EBP + 0xfffffd18]
//   XREF to: Stack[-0x2f8] (READ)
// 0046458d: ADD ESP,0x4
// 00464590: FCOMP double ptr [EBP + 0xfffffd20]
//   XREF to: Stack[-0x2f0] (READ)
// 00464596: FNSTSW AX
// 00464598: SAHF
// 00464599: JNC 0x004645cb
//   XREF to: 004645cb (CONDITIONAL_JUMP)
// 0046459b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004645a0: PUSH 0x0
// 004645a2: PUSH 0x0
// 004645a4: MOV EAX,0x61c20e
//   XREF to: 0061c20e (PARAM)
// 004645a9: PUSH EAX
//   XREF to: 0061c20e (DATA)
// 004645aa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004645af: ADD ESP,0xc
// 004645b2: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004645b7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004645bc: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 004645c1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004645c6: JMP 0x00464840
//   XREF to: 00464840 (UNCONDITIONAL_JUMP)
// 004645cb: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004645cb
//   XREF to: Stack[0x4] (READ)
// 004645d2: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 004645d5: MOV dword ptr [EDX + 0x16e99b4],EAX
//   XREF to: 016e99b4 (DATA)
// 004645db: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 004645e2: JMP 0x004645ea
//   XREF to: 004645ea (UNCONDITIONAL_JUMP)
// 004645e4: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_004645e4
//   XREF to: Stack[-0x4c] (READ)
// 004645e7: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 004645ea: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_004645ea
//   XREF to: Stack[0x4] (READ)
// 004645f1: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004645f4: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 004645fa: JGE 0x00464661
//   XREF to: 00464661 (CONDITIONAL_JUMP)
// 004645fc: MOV ECX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004645ff: SHL ECX,0x2
// 00464602: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 00464609: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046460c: SHL EAX,0x2
// 0046460f: ADD EDX,EAX
// 00464611: MOV EAX,dword ptr [ECX + EBP*0x1 + 0xffffff40]
// 00464618: MOV dword ptr [EDX + 0x16e99c8],EAX
//   XREF to: 016e99c8 (DATA)
// 0046461e: MOV ECX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464621: SHL ECX,0x2
// 00464624: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046462b: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046462e: SHL EAX,0x2
// 00464631: ADD EAX,EDX
// 00464633: FLD float ptr [ECX + EBP*0x1 + -0x80]
// 00464637: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046463d: MOV ECX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 00464640: SHL ECX,0x2
// 00464643: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0046464a: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046464d: SHL EAX,0x2
// 00464650: ADD EAX,EDX
// 00464652: FLD float ptr [ECX + EBP*0x1 + 0xffffff00]
// 00464659: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046465f: JMP 0x004645e4
//   XREF to: 004645e4 (UNCONDITIONAL_JUMP)
// 00464661: PUSH 0x1a1b
//   Label: LAB_00464661
// 00464666: MOV EAX,0x61c246
//   XREF to: 0061c246 (DATA)
// 0046466b: PUSH EAX
//   XREF to: 0061c246 (DATA)
// 0046466c: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046466f: SHL EAX,0x2
// 00464672: SUB EAX,0x4
// 00464675: PUSH EAX
// 00464676: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0046467b: ADD ESP,0xc
// 0046467e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00464681: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x20] (READ)
// 00464685: JNZ 0x004646a9
//   XREF to: 004646a9 (CONDITIONAL_JUMP)
// 00464687: MOV dword ptr [0x02f0ca48],0x61c258
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 0061c258 (DATA)
// 00464691: MOV dword ptr [0x02f0ca4c],0x1a1c
//   XREF to: 02f0ca4c (WRITE)
// 0046469b: MOV EAX,0x61c26a
//   XREF to: 0061c26a (PARAM)
// 004646a0: PUSH EAX
//   XREF to: 0061c26a (DATA)
// 004646a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004646a6: ADD ESP,0x4
// 004646a9: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_004646a9
//   XREF to: Stack[-0x38] (READ)
// 004646ac: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004646af: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 004646b6: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 004646bd: JMP 0x004646c5
//   XREF to: 004646c5 (UNCONDITIONAL_JUMP)
// 004646bf: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_004646bf
//   XREF to: Stack[-0x4c] (READ)
// 004646c2: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 004646c5: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_004646c5
//   XREF to: Stack[-0x4c] (READ)
// 004646c8: CMP EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 004646cb: JGE 0x00464700
//   XREF to: 00464700 (CONDITIONAL_JUMP)
// 004646cd: CMP dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (READ)
// 004646d1: JZ 0x004646f1
//   XREF to: 004646f1 (CONDITIONAL_JUMP)
// 004646d3: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   XREF to: Stack[-0x1c] (READ)
// 004646d7: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004646da: ADD EDX,EAX
// 004646dc: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004646df: SHL EAX,0x2
// 004646e2: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004646e5: ADD ECX,EAX
// 004646e7: MOV EAX,dword ptr [EDX]
// 004646e9: MOV dword ptr [ECX],EAX
// 004646eb: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004646ee: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004646f1: IMUL EAX,dword ptr [EBP + -0xc],0xc
//   Label: LAB_004646f1
//   XREF to: Stack[-0x1c] (READ)
// 004646f5: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004646f8: MOV EAX,dword ptr [EAX + 0x8]
// 004646fb: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004646fe: JMP 0x004646bf
//   XREF to: 004646bf (UNCONDITIONAL_JUMP)
// 00464700: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_00464700
//   XREF to: Stack[-0x48] (READ)
// 00464703: SUB EAX,0x2
// 00464706: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00464709: JMP 0x0046470f
//   XREF to: 0046470f (UNCONDITIONAL_JUMP)
// 0046470b: ADD dword ptr [EBP + -0x3c],-0x1
//   Label: LAB_0046470b
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 0046470f: CMP dword ptr [EBP + -0x3c],0x0
//   Label: LAB_0046470f
//   XREF to: Stack[-0x4c] (READ)
// 00464713: JL 0x00464797
//   XREF to: 00464797 (CONDITIONAL_JUMP)
// 00464719: MOV dword ptr [EBP + -0xc],0x0
//   XREF to: Stack[-0x1c] (WRITE)
// 00464720: JMP 0x00464725
//   XREF to: 00464725 (UNCONDITIONAL_JUMP)
// 00464722: INC dword ptr [EBP + -0xc]
//   Label: LAB_00464722
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00464725: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_00464725
//   XREF to: Stack[-0x1c] (READ)
// 00464728: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046472b: JGE 0x00464792
//   XREF to: 00464792 (CONDITIONAL_JUMP)
// 0046472d: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00464730: SHL EAX,0x2
// 00464733: ADD EAX,0x4
// 00464736: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464739: PUSH EAX
// 0046473a: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046473d: SHL EAX,0x2
// 00464740: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464743: PUSH EAX
// 00464744: CALL shape_design.c_comparePolygonIndices_FUN_00463800
//   XREF to: 00463800 (UNCONDITIONAL_CALL)
// 00464749: ADD ESP,0x8
// 0046474c: TEST EAX,EAX
// 0046474e: JLE 0x00464790
//   XREF to: 00464790 (CONDITIONAL_JUMP)
// 00464750: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00464753: SHL EAX,0x2
// 00464756: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464759: MOV EAX,dword ptr [EAX]
// 0046475b: MOV dword ptr [EBP + 0xfffffd14],EAX
//   XREF to: Stack[-0x2fc] (WRITE)
// 00464761: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00464764: SHL EAX,0x2
// 00464767: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046476a: ADD EDX,EAX
// 0046476c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046476f: SHL EAX,0x2
// 00464772: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464775: ADD ECX,EAX
// 00464777: MOV EAX,dword ptr [EDX + 0x4]
// 0046477a: MOV dword ptr [ECX],EAX
// 0046477c: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046477f: SHL EAX,0x2
// 00464782: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464785: ADD EDX,EAX
// 00464787: MOV EAX,dword ptr [EBP + 0xfffffd14]
//   XREF to: Stack[-0x2fc] (READ)
// 0046478d: MOV dword ptr [EDX + 0x4],EAX
// 00464790: JMP 0x00464722
//   Label: LAB_00464790
//   XREF to: 00464722 (UNCONDITIONAL_JUMP)
// 00464792: JMP 0x0046470b
//   Label: LAB_00464792
//   XREF to: 0046470b (UNCONDITIONAL_JUMP)
// 00464797: MOV dword ptr [EBP + -0x3c],0x0
//   Label: LAB_00464797
//   XREF to: Stack[-0x4c] (WRITE)
// 0046479e: JMP 0x004647a6
//   XREF to: 004647a6 (UNCONDITIONAL_JUMP)
// 004647a0: MOV EAX,dword ptr [EBP + -0x3c]
//   Label: LAB_004647a0
//   XREF to: Stack[-0x4c] (READ)
// 004647a3: INC dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 004647a6: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_004647a6
//   XREF to: Stack[-0x48] (READ)
// 004647a9: DEC EAX
// 004647aa: CMP EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004647ad: JLE 0x004647f8
//   XREF to: 004647f8 (CONDITIONAL_JUMP)
// 004647af: MOV EAX,dword ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004647b2: SHL EAX,0x2
// 004647b5: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004647b8: MOV EAX,dword ptr [EAX]
// 004647ba: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004647bd: JMP 0x004647c5
//   XREF to: 004647c5 (UNCONDITIONAL_JUMP)
// 004647bf: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_004647bf
//   XREF to: Stack[-0x1c] (READ)
// 004647c2: INC dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004647c5: MOV EAX,[0x016e990c]
//   Label: LAB_004647c5
//   XREF to: 016e990c (READ)
// 004647ca: DEC EAX
// 004647cb: CMP EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004647ce: JLE 0x004647f6
//   XREF to: 004647f6 (CONDITIONAL_JUMP)
// 004647d0: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004647d3: INC EAX
// 004647d4: IMUL EAX,EAX,0x184
// 004647da: IMUL ESI,dword ptr [EBP + -0xc],0x184
//   XREF to: Stack[-0x1c] (READ)
// 004647e1: MOV ECX,0x61
// 004647e6: LEA EDI,[ESI + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004647ec: LEA ESI,[EAX + 0x16e9910]
//   XREF to: 016e9910 (DATA)
// 004647f2: MOVSD.REP ES:EDI,ESI
//   XREF to: 016e9910 (DATA)
//   XREF to: 016e9914 (DATA)
// 004647f4: JMP 0x004647bf
//   XREF to: 004647bf (UNCONDITIONAL_JUMP)
// 004647f6: JMP 0x004647a0
//   Label: LAB_004647f6
//   XREF to: 004647a0 (UNCONDITIONAL_JUMP)
// 004647f8: MOV EAX,dword ptr [EBP + -0x38]
//   Label: LAB_004647f8
//   XREF to: Stack[-0x48] (READ)
// 004647fb: SHL EAX,0x2
// 004647fe: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464801: ADD EDX,EAX
// 00464803: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00464806: CMP EAX,dword ptr [EDX + -0x8]
// 00464809: JLE 0x0046481a
//   XREF to: 0046481a (CONDITIONAL_JUMP)
// 0046480b: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 0046480e: SHL EAX,0x2
// 00464811: ADD EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464814: MOV EAX,dword ptr [EAX + -0x8]
// 00464817: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: Stack[0x4] (WRITE)
// 0046481a: PUSH 0x1a4d
//   Label: LAB_0046481a
// 0046481f: MOV EAX,0x61c296
//   XREF to: 0061c296 (DATA)
// 00464824: PUSH EAX
//   XREF to: 0061c296 (DATA)
// 00464825: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00464828: PUSH EAX
// 00464829: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0046482e: ADD ESP,0xc
// 00464831: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x48] (READ)
// 00464834: DEC EAX
// 00464835: SUB dword ptr [0x016e990c],EAX
//   XREF to: 016e990c (READ_WRITE)
// 0046483b: CALL shape_design.c_removeUnusedVertices_FUN_00463830
//   XREF to: 00463830 (UNCONDITIONAL_CALL)
// 00464840: CMP dword ptr [EBP + -0x4],0x0
//   Label: LAB_00464840
//   XREF to: Stack[-0x14] (READ)
// 00464844: JZ 0x0046485d
//   XREF to: 0046485d (CONDITIONAL_JUMP)
// 00464846: PUSH 0x1a59
// 0046484b: MOV EAX,0x61c2a8
//   XREF to: 0061c2a8 (DATA)
// 00464850: PUSH EAX
//   XREF to: 0061c2a8 (DATA)
// 00464851: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00464854: PUSH EAX
// 00464855: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0046485a: ADD ESP,0xc
// 0046485d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046485d
//   XREF to: Stack[0x4] (READ)
// 00464860: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00464863: MOV EAX,dword ptr [EBP + -0x40]
//   XREF to: Stack[-0x50] (READ)
// 00464866: MOV ESP,EBP
// 00464868: POP EBP
// 00464869: POP EDI
// 0046486a: POP ESI
// 0046486b: POP EBX
// 0046486c: RET
