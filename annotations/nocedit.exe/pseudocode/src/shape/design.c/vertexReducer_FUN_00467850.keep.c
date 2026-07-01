// Name: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
// MANUAL RECONSTRUCTION
// Address Range: [[00467850, 00467e64]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_vertexReducer_FUN_00467850(float tolerance,float angle_tolerance,int ui_mode)

{
  int iVar4;
  int iVar5;
  int iVar2;
  int *base;
  int iVar3;
  int iVar6;
  int iVar7;
  bool bVar9;
  float10 fVar8;
  double dVar9;
  double dVar10;
  byte local_134 [256];
  int local_34;
  int local_30;
  int local_1c;
  int *local_14;

  iVar7 = g_VertexCount;
  bVar9 = false;
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
    if (strlen((char *)local_134) != 0) {
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
        if (strlen((char *)local_134) != 0) {
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
      base = (int *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (g_VertexCount << 3,"..\\shape\\design.c",8376);
      if (base == (int *)0x0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
      for (local_34 = 0; local_34 < g_VertexCount; local_34 = local_34 + 1) {
        base[local_34 * 2] = local_34;
        base[local_34 * 2 + 1] = local_34;
      }
      _qsort
                (base,g_VertexCount,8,shape_design_c_qsortByVertexX_FUN_004676f0);
      if (bVar9) {
        local_14 = (int *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (g_VertexCount << 2,"..\\shape\\design.c",8412);
        if (local_14 == (int *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",8414);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory for vertex reducer array.",0,0);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
          wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
          return;
        }
        for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
          for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
              local_30 = local_30 + 1) {
            local_14[g_ModelPolygonData[local_34].vertex_indices[local_30]] = local_34;
          }
        }
      }
      for (local_34 = 0; local_34 < g_VertexCount + -1; local_34 = local_34 + 1) {
        if (base[local_34 * 2 + 1] == base[local_34 * 2]) {
          iVar4 = base[local_34 * 2];
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (base[local_30 * 2 + 1] == base[local_30 * 2]) {
              iVar5 = base[local_30 * 2];
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
                                    (g_ModelPolygonData + local_14[base[local_34 * 2]],
                                     g_ModelPolygonData + local_14[base[local_30 * 2]],
                                     (double)fVar8);
                  if (iVar3 == 0) goto LAB_00467ba8;
                }
                base[local_30 * 2 + 1] = base[local_34 * 2];
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
               base[g_ModelPolygonData[local_34].vertex_indices[local_30] * 2 + 1];
        }
      }
      if (bVar9) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",8504);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",8508);
      shape_design_c_removeUnusedVertices_FUN_00463830();
    } while (g_VertexCount != iVar6);
    shape_design_c_removeDegenerateTriangles_FUN_00463a20();
    g_VertexOptimizationPasses = g_VertexOptimizationPasses + 1;
    _sprintf
              ((char *)local_134,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d",iVar7,g_VertexCount,
               g_VertexOptimizationPasses,local_1c - g_PolygonCount);
    if (0 < ui_mode) {
      strcat((char *)local_134,"\n\nHit a key...");
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
