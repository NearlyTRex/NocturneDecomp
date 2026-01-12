// Name: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
// Address Range: [[00467850, 00467e64]]
// Convention: __cdecl
// Signature: void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress)

#include "nocturne.h"

void __cdecl
shape_design_c_vertexReducer_FUN_00467850
          (float tolerance,float angle_tolerance,int display_progress)

{
  byte bVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte *pbVar4;
  byte bVar6;
  float10 fVar7;
  double dVar8;
  char *in_stack_fffffebc;
  SVertexData *pSVar9;
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
  byte *pbVar5;
  
  bVar6 = 0;
  local_24 = g_VertexCount;
  local_20 = 0;
  local_1c = g_PolygonCount;
  if (0 < g_VertexCount) {
    if (display_progress < 1) {
      local_134[0] = 0;
    }
    else {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      in_stack_fffffebc = "Enter tolerance [.1] : ";
      iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                        ((char *)local_134,0x14,0,0,"Enter tolerance [.1] : ");
      if (iVar2 == 0x1b) {
        return;
      }
    }
    iVar2 = -1;
    pbVar5 = local_134;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + (uint)bVar6 * -2 + 1;
    } while (bVar1 != 0);
    if (iVar2 != -2) {
      dVar8 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffebc);
      tolerance = (float)dVar8;
    }
    if (display_progress < 1) {
      if (0.0 <= angle_tolerance) {
        local_20 = 1;
      }
    }
    else {
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_134,0x14,0,0x16,"Check normals? [n] : ");
      iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_134[0]);
      if (iVar2 == 0x59) {
        local_20 = 1;
      }
      if (local_20 == 1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  ((char *)local_134,0x14,0,0x2c,"Enter angle tolerance [90.0] : ");
        angle_tolerance = 90.0;
        iVar2 = -1;
        pbVar5 = local_134;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + (uint)bVar6 * -2 + 1;
        } while (bVar1 != 0);
        if (iVar2 != -2) {
          dVar8 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffebc);
          angle_tolerance = (float)dVar8;
        }
      }
    }
    if (-1 < display_progress) {
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
      crt_stdlib_c_qsort_FUN_005fdf38
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
          pSVar9 = g_LoadedVertices + *(int *)(local_34 * 8 + (int)local_18);
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (*(int *)((int)local_18 + local_30 * 8 + 4) == *(int *)((int)local_18 + local_30 * 8)
               ) {
              iVar2 = *(int *)(local_30 * 8 + (int)local_18);
              if ((pSVar9->vertex).x + tolerance < g_LoadedVertices[iVar2].vertex.x)
              goto LAB_00467b49;
              if (((ABS((pSVar9->vertex).x - g_LoadedVertices[iVar2].vertex.x) < tolerance) &&
                  (ABS((pSVar9->vertex).y - g_LoadedVertices[iVar2].vertex.y) < tolerance)) &&
                 (ABS((pSVar9->vertex).z - g_LoadedVertices[iVar2].vertex.z) < tolerance)) {
                if (local_20 != 0) {
                  fVar7 = (float10)fcos((float10)angle_tolerance *
                                        (float10)0.01745329252);
                  iVar2 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                    (g_ModelPolygonData +
                                     *(int *)(*(int *)(local_34 * 8 + (int)local_18) * 4 +
                                             (int)local_14),
                                     g_ModelPolygonData +
                                     *(int *)(*(int *)(local_30 * 8 + (int)local_18) * 4 +
                                             (int)local_14),(double)fVar7);
                  if (iVar2 == 0) goto LAB_00467ba8;
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
      crt_stdlib_c_qsort_FUN_005fdf38
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
    crt_stdio_c_sprintf_FUN_005fdbd0
              ((char *)local_134,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d",local_24,g_VertexCount,
               g_VertexOptimizationPasses,local_1c - g_PolygonCount);
    if (0 < display_progress) {
      pcVar3 = "\n\nHit a key...";
      iVar2 = -1;
      pbVar5 = local_134;
      do {
        pbVar4 = pbVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pbVar4 = pbVar5 + (uint)bVar6 * -2 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar4;
      } while (bVar1 != 0);
      pbVar4 = pbVar4 + -1;
      do {
        bVar6 = *pcVar3;
        *pbVar4 = bVar6;
        if (bVar6 == 0) break;
        bVar6 = ((byte *)pcVar3)[1];
        pcVar3 = (char *)((byte *)pcVar3 + 2);
        pbVar4[1] = bVar6;
        pbVar4 = pbVar4 + 2;
      } while (bVar6 != 0);
    }
    if (-1 < display_progress) {
      engine_2d_c_drawText_FUN_00401fd0((char *)local_134,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    if (0 < display_progress) {
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  return;
}
