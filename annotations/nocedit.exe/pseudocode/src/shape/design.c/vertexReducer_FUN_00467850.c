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
  char cVar1;
  int iVar2;
  void *base;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  char *pcVar10;
  SShapeEditorPolygon *polygon1;
  char *in_stack_fffffec4;
  uint in_stack_fffffecc;
  int local_34;
  int local_30;
  void *local_14;
  
  bVar7 = 0;
  bVar6 = false;
  if (0 < g_VertexCount) {
    if (display_progress < 1) {
      in_stack_fffffecc = 0;
    }
    else {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar2 = engine_2d_c_getInputWithPrompt_FUN_004032c0
                        (&stack0xfffffecc,0x14,0,0,"Enter tolerance [.1] : ");
      if (iVar2 == 0x1b) {
        return;
      }
    }
    iVar2 = -1;
    pcVar10 = &stack0xfffffecc;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      dVar9 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffec4);
      tolerance = (float)dVar9;
    }
    if (display_progress < 1) {
      if (0.0 <= angle_tolerance) {
        bVar6 = true;
      }
    }
    else {
      pcVar10 = "Check normals? [n] : ";
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xfffffecc,0x14,0,0x16,"Check normals? [n] : ");
      iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(in_stack_fffffecc & 0xff);
      bVar6 = iVar2 == 0x59;
      if (bVar6) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xfffffecc,0x14,0,0x2c,"Enter angle tolerance [90.0] : ");
        angle_tolerance = 90.0;
        iVar2 = -1;
        pcVar4 = &stack0xfffffecc;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          dVar9 = crt_string_c_strtod_FUN_005ff0f3(pcVar10);
          angle_tolerance = (float)dVar9;
        }
      }
    }
    if (-1 < display_progress) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Scanning vertices...",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    do {
      iVar2 = g_VertexCount;
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
      crt_stdlib_c_qsort_FUN_005fdf38
                (base,g_VertexCount,8,shape_design_c_qsortByVertexX_FUN_004676f0);
      if (bVar6) {
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
          polygon1 = (SShapeEditorPolygon *)(g_LoadedVertices + *(int *)(local_34 * 8 + (int)base));
          local_30 = local_34;
LAB_00467ba8:
          local_30 = local_30 + 1;
          if (local_30 < g_VertexCount) {
            if (*(int *)((int)base + local_30 * 8 + 4) == *(int *)((int)base + local_30 * 8)) {
              iVar3 = *(int *)(local_30 * 8 + (int)base);
              if (((CVector3f *)&polygon1->polygon_type)->x + tolerance <
                  g_LoadedVertices[iVar3].vertex.x) goto LAB_00467b49;
              if (((ABS(((CVector3f *)&polygon1->polygon_type)->x - g_LoadedVertices[iVar3].vertex.x
                       ) < tolerance) &&
                  (ABS(*(float *)polygon1->texture_name - g_LoadedVertices[iVar3].vertex.y) <
                   tolerance)) &&
                 (ABS(*(float *)((int)polygon1->texture_name + 4) - g_LoadedVertices[iVar3].vertex.z
                     ) < tolerance)) {
                if (bVar6) {
                  fVar8 = (float10)fcos((float10)angle_tolerance *
                                        (float10)0.01745329252);
                  polygon1 = g_ModelPolygonData +
                             *(int *)(*(int *)(local_34 * 8 + (int)base) * 4 + (int)local_14);
                  iVar3 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                    (polygon1,g_ModelPolygonData +
                                              *(int *)(*(int *)(local_30 * 8 + (int)base) * 4 +
                                                      (int)local_14),(double)fVar8);
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
      crt_stdlib_c_qsort_FUN_005fdf38
                (base,g_VertexCount,8,shape_design_c_qsortByOriginalIndex_FUN_004677c0);
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        for (local_30 = 0; local_30 < (int)g_ModelPolygonData[local_34].vertex_indices_count;
            local_30 = local_30 + 1) {
          g_ModelPolygonData[local_34].vertex_indices[local_30] =
               *(uint *)((int)base + g_ModelPolygonData[local_34].vertex_indices[local_30] * 8 + 4);
        }
      }
      if (bVar6) {
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_14,"..\\shape\\design.c",0x2138);
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(base,"..\\shape\\design.c",0x213c);
      shape_design_c_removeUnusedVertices_FUN_00463830();
    } while (g_VertexCount != iVar2);
    shape_design_c_removeDegenerateTriangles_FUN_00463a20();
    g_VertexOptimizationPasses = g_VertexOptimizationPasses + 1;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffecc,"Original vertices: %d    New total: %d\n\nTotal passes: %d\n\nPolys removed: %d");
    if (0 < display_progress) {
      pcVar4 = "\n\nHit a key...";
      iVar2 = -1;
      pcVar10 = &stack0xfffffecc;
      do {
        pcVar5 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar10 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    if (-1 < display_progress) {
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffecc,0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    if (0 < display_progress) {
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  return;
}
