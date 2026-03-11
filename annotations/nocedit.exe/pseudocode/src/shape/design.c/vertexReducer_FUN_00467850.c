// Name: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
// Address Range: [[00467850, 00467e64]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  byte local_134 [256];
  int local_34;
  int local_30;
  SShapeEditorPolygon *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  byte *pbVar6;
  
  bVar7 = 0;
  local_24 = g_VertexCount;
  local_20 = 0;
  local_1c = g_PolygonCount;
  if (0 < g_VertexCount) {
    if (ui_mode < 1) {
      local_134[0] = 0;
    }
    else {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                        ((char *)local_134,0x14,0,0,"Enter tolerance [.1] : ");
      if (iVar2 == 0x1b) {
        return;
      }
    }
    iVar2 = -1;
    pbVar6 = local_134;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + (uint)bVar7 * -2 + 1;
    } while (bVar1 != 0);
    if (iVar2 != -2) {
      dVar9 = _strtod((char *)local_134);
      tolerance = (float)dVar9;
    }
    if (ui_mode < 1) {
      if (0.0 <= angle_tolerance) {
        local_20 = 1;
      }
    }
    else {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_134,0x14,0,0x16,"Check normals? [n] : ");
      iVar2 = toupper((uint)local_134[0]);
      if (iVar2 == 0x59) {
        local_20 = 1;
      }
      if (local_20 == 1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  ((char *)local_134,0x14,0,0x2c,"Enter angle tolerance [90.0] : ");
        angle_tolerance = 90.0;
        iVar2 = -1;
        pbVar6 = local_134;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + (uint)bVar7 * -2 + 1;
        } while (bVar1 != 0);
        if (iVar2 != -2) {
          dVar9 = _strtod((char *)local_134);
          angle_tolerance = (float)dVar9;
        }
      }
    }
    if (-1 < ui_mode) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Scanning vertices...",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    do {
      local_28 = g_VertexCount;
      local_18 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (g_VertexCount << 3,"..\\shape\\design.c",0x20b8);
      if (local_18 == (void *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
      for (local_34 = 0; local_34 < g_VertexCount; local_34 = local_34 + 1) {
        *(int *)((int)local_18 + local_34 * 8) = local_34;
        *(int *)((int)local_18 + local_34 * 8 + 4) = local_34;
      }
      _qsort
                (local_18,g_VertexCount,8,shape_design_c_qsortByVertexX_FUN_004676f0);
      if (local_20 != 0) {
        local_14 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_VertexCount << 2,"..\\shape\\design.c",0x20dc);
        if (local_14 == (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(local_18,"..\\shape\\design.c",0x20de);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
          local_2c = g_ModelPolygonData + local_34;
          for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
              local_30 = local_30 + 1) {
            *(int *)((int)local_14 + local_2c->vertex_indices[local_30] * 4) = local_34;
          }
        }
      }
      for (local_34 = 0; local_34 < g_VertexCount + -1; local_34 = local_34 + 1) {
        if (*(int *)((int)local_18 + local_34 * 8 + 4) == *(int *)((int)local_18 + local_34 * 8)) {
          iVar2 = *(int *)(local_34 * 8 + (int)local_18);
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (*(int *)((int)local_18 + local_30 * 8 + 4) == *(int *)((int)local_18 + local_30 * 8)
               ) {
              iVar3 = *(int *)(local_30 * 8 + (int)local_18);
              if (g_LoadedVertices[iVar2].vertex.x + tolerance < g_LoadedVertices[iVar3].vertex.x)
              goto LAB_00467b49;
              if (((ABS(g_LoadedVertices[iVar2].vertex.x - g_LoadedVertices[iVar3].vertex.x) <
                    tolerance) &&
                  (ABS(g_LoadedVertices[iVar2].vertex.y - g_LoadedVertices[iVar3].vertex.y) <
                   tolerance)) &&
                 (ABS(g_LoadedVertices[iVar2].vertex.z - g_LoadedVertices[iVar3].vertex.z) <
                  tolerance)) {
                if (local_20 != 0) {
                  fVar8 = (float10)fcos((float10)angle_tolerance *
                                        (float10)0.01745329252);
                  iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                    (g_ModelPolygonData +
                                     *(int *)(*(int *)(local_34 * 8 + (int)local_18) * 4 +
                                             (int)local_14),
                                     g_ModelPolygonData +
                                     *(int *)(*(int *)(local_30 * 8 + (int)local_18) * 4 +
                                             (int)local_14),(double)fVar8);
                  if (iVar3 == 0) goto LAB_00467ba8;
                }
                *(uint *)((int)local_18 + local_30 * 8 + 4) =
                     *(uint *)((int)local_18 + local_34 * 8);
              }
            }
            goto LAB_00467ba8;
          }
        }
LAB_00467b49:
      }
      _qsort
                (local_18,g_VertexCount,8,shape_design_c_qsortByOriginalIndex_FUN_004677c0);
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        local_2c = g_ModelPolygonData + local_34;
        for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
            local_30 = local_30 + 1) {
          local_2c->vertex_indices[local_30] =
               *(uint *)((int)local_18 + local_2c->vertex_indices[local_30] * 8 + 4);
        }
      }
      if (local_20 != 0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",0x2138);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(local_18,"..\\shape\\design.c",0x213c);
      shape_design_c_removeUnusedVertices_FUN_00463830();
    } while (g_VertexCount != local_28);
    shape_design_c_removeDegenerateTriangles_FUN_00463a20();
    g_VertexOptimizationPasses = g_VertexOptimizationPasses + 1;
    _sprintf
              ((char *)local_134,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d",local_24,g_VertexCount,
               g_VertexOptimizationPasses);
    if (0 < ui_mode) {
      pcVar4 = "\n\nHit a key...";
      iVar2 = -1;
      pbVar6 = local_134;
      do {
        pbVar5 = pbVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pbVar5 = pbVar6 + (uint)bVar7 * -2 + 1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar5;
      } while (bVar1 != 0);
      pbVar5 = pbVar5 + -1;
      do {
        bVar7 = *pcVar4;
        *pbVar5 = bVar7;
        if (bVar7 == 0) break;
        bVar7 = ((byte *)pcVar4)[1];
        pcVar4 = (char *)((byte *)pcVar4 + 2);
        pbVar5[1] = bVar7;
        pbVar5 = pbVar5 + 2;
      } while (bVar7 != 0);
    }
    if (-1 < ui_mode) {
      engine_2d_c_drawText_FUN_00401fd0((char *)local_134,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    if (0 < ui_mode) {
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  return;
}
