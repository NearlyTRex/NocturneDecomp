// Name: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
// Address Range: [[00467850, 00467e64]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

{
  byte bVar2;
  int iVar4;
  int iVar5;
  int iVar2;
  void *base;
  int iVar3;
  int iVar6;
  int iVar7;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar8;
  bool bVar9;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
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
  byte bVar1;
  byte *pbVar6;
  
  iVar7 = g_VertexCount;
  bVar7 = 0;
  bVar9 = false;
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
    iVar6 = -1;
    pbVar8 = local_134;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + (uint)bVar7 * -2 + 1;
    } while (bVar1 != 0);
    if (iVar6 != -2) {
      dVar9 = _strtod((char *)local_134);
      tolerance = (float)dVar9;
    }
    if (ui_mode < 1) {
      if (0.0 <= angle_tolerance) {
        bVar9 = true;
      }
    }
    else {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_134,0x14,0,0x16,"Check normals? [n] : ");
      iVar6 = toupper((uint)local_134[0]);
      bVar9 = iVar6 == 0x59;
      if (bVar9) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  ((char *)local_134,0x14,0,0x2c,"Enter angle tolerance [90.0] : ");
        angle_tolerance = 90.0;
        iVar6 = -1;
        pbVar8 = local_134;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + (uint)bVar7 * -2 + 1;
        } while (bVar2 != 0);
        if (iVar6 != -2) {
          dVar10 = _strtod((char *)local_134);
          angle_tolerance = (float)dVar10;
        }
      }
    }
    if (-1 < ui_mode) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Scanning vertices...",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    do {
      iVar6 = g_VertexCount;
      base = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (g_VertexCount << 3,"..\\shape\\design.c",0x20b8);
      if (base == (void *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
      for (local_34 = 0; local_34 < g_VertexCount; local_34 = local_34 + 1) {
        *(int *)((int)base + local_34 * 8) = local_34;
        *(int *)((int)base + local_34 * 8 + 4) = local_34;
      }
      _qsort
                (base,g_VertexCount,8,shape_design_c_qsortByVertexX_FUN_004676f0);
      if (bVar9) {
        local_14 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_VertexCount << 2,"..\\shape\\design.c",0x20dc);
        if (local_14 == (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",0x20de);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
          for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
              local_30 = local_30 + 1) {
            *(int *)((int)local_14 + g_ModelPolygonData[local_34].vertex_indices[local_30] * 4) =
                 local_34;
          }
        }
      }
      for (local_34 = 0; local_34 < g_VertexCount + -1; local_34 = local_34 + 1) {
        if (*(int *)((int)base + local_34 * 8 + 4) == *(int *)((int)base + local_34 * 8)) {
          iVar4 = *(int *)(local_34 * 8 + (int)base);
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (*(int *)((int)base + local_30 * 8 + 4) == *(int *)((int)base + local_30 * 8)) {
              iVar5 = *(int *)(local_30 * 8 + (int)base);
              if (g_LoadedVertices[iVar4].vertex.x + tolerance < g_LoadedVertices[iVar5].vertex.x)
              goto LAB_00467b49;
              if (((ABS(g_LoadedVertices[iVar4].vertex.x - g_LoadedVertices[iVar5].vertex.x) <
                    tolerance) &&
                  (ABS(g_LoadedVertices[iVar4].vertex.y - g_LoadedVertices[iVar5].vertex.y) <
                   tolerance)) &&
                 (ABS(g_LoadedVertices[iVar4].vertex.z - g_LoadedVertices[iVar5].vertex.z) <
                  tolerance)) {
                if (bVar9) {
                  fVar8 = (float10)fcos((float10)angle_tolerance *
                                        (float10)0.01745329252);
                  iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                    (g_ModelPolygonData +
                                     *(int *)(*(int *)(local_34 * 8 + (int)base) * 4 + (int)local_14
                                             ),
                                     g_ModelPolygonData +
                                     *(int *)(*(int *)(local_30 * 8 + (int)base) * 4 + (int)local_14
                                             ),(double)fVar8);
                  if (iVar3 == 0) goto LAB_00467ba8;
                }
                *(uint *)((int)base + local_30 * 8 + 4) =
                     *(uint *)((int)base + local_34 * 8);
              }
            }
            goto LAB_00467ba8;
          }
        }
LAB_00467b49:
      }
      _qsort
                (base,g_VertexCount,8,shape_design_c_qsortByOriginalIndex_FUN_004677c0);
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
            local_30 = local_30 + 1) {
          g_ModelPolygonData[local_34].vertex_indices[local_30] =
               *(uint *)((int)base + g_ModelPolygonData[local_34].vertex_indices[local_30] * 8 + 4);
        }
      }
      if (bVar9) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",0x2138);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",0x213c);
      shape_design_c_removeUnusedVertices_FUN_00463830();
    } while (g_VertexCount != iVar6);
    shape_design_c_removeDegenerateTriangles_FUN_00463a20();
    g_VertexOptimizationPasses = g_VertexOptimizationPasses + 1;
    _sprintf((char *)local_134,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d",iVar7,g_VertexCount,
               g_VertexOptimizationPasses);
    if (0 < ui_mode) {
      pcVar4 = "\n\nHit a key...";
      iVar7 = -1;
      pbVar5 = local_134;
      do {
        pbVar5 = pbVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar5 = pbVar5 + (uint)bVar7 * -2 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5;
      } while (bVar2 != 0);
      pbVar8 = pbVar5 + -1;
      do {
        bVar2 = *pcVar4;
        *pbVar8 = bVar2;
        if (bVar2 == 0) break;
        bVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pbVar8[1] = bVar2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
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
