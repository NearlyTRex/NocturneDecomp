// Name: shape_design.c_loadS3DModelFile_FUN_004593a0
// Address: 004593a0
// Address Range: [[004593a0, 00459a15]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_loadS3DModelFile_FUN_004593a0(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadS3DModelFile_FUN_004593a0(char *filename)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int local_9e4;
  char local_9e0 [260];
  byte local_8dc [4];
  int local_8d8 [500];
  char local_108 [200];
  uint local_40;
  void *local_38;
  FILE *local_34;
  int local_30 [3];
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  int local_18;
  SShapeEditorPolygon *local_14;
  
  bVar6 = 0;
  local_38 = (void *)0x0;
  local_34 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (local_34 == (FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    return 0;
  }
  pcVar4 = g_LoadedModelName;
  pcVar3 = filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_PolygonOptimizationPasses = 0;
  g_VertexOptimizationPasses = 0;
  g_SelectedPolygonIndex = -1;
  g_SpatialTreeRoot = (STreeNode *)0x0;
  shape_design_c_skipLines_FUN_00459360(local_34,1);
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(local_34,"%d\n",local_30);
  if (iVar2 == 1) {
    local_30[1] = 0x67;
    if (local_30[0] != 0x67) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_108,"Invalid .S3D version: %d, we can only handle files version of %d",local_30[0],0x67);
      goto LAB_00459491;
    }
    shape_design_c_skipLines_FUN_00459360(local_34,1);
    iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (local_34,"%d,%d,%d,%d,%d,%d,%d\n",local_30 + 2,&g_PolygonCount,&g_VertexCount
                       ,&g_PartsCount,local_24,local_20,local_1c);
    if (iVar2 == 7) {
      if (20000 < g_PolygonCount) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_108,"Too many polygons: %d, max is %d",g_PolygonCount,20000);
        goto LAB_00459491;
      }
      if (20000 < g_VertexCount) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_108,"Too many vertices: %d, max is %d",g_VertexCount,20000);
        goto LAB_00459491;
      }
      if (500 < g_PartsCount) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_108,"Too many parts: %d, max is %d",g_VertexCount,500);
        goto LAB_00459491;
      }
      shape_design_c_skipLines_FUN_00459360(local_34,1);
      for (local_40 = 0; (int)local_40 < g_PartsCount; local_40 = local_40 + 1) {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (local_34,"%d,%d,%d,%d,\"%[^\"]\"\n",local_8dc,local_8dc,local_8dc,
                           local_8d8 + local_40,g_ModelPartNames + local_40);
        if (iVar2 != 5) goto LAB_00459478;
      }
      shape_design_c_skipLines_FUN_00459360(local_34,1);
      if (0 < local_30[2]) {
        local_38 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (local_30[2] * 0x50,"..\\shape\\design.c",0x3ec);
        if (local_38 == (void *)0x0) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_108,"Out of memory for texture list, numTextures = %d",local_30[2]);
          goto LAB_00459491;
        }
        for (local_40 = 0; (int)local_40 < local_30[2]; local_40 = local_40 + 1) {
          pcVar3 = crt_stdio_c_fgets_FUN_005fefd0(local_9e0,0x104,local_34);
          if (pcVar3 == (char *)0x0) goto LAB_00459478;
          pcVar3 = local_9e0;
          do {
            pcVar4 = pcVar3;
            if (*pcVar3 == '\n') goto LAB_0045976f;
            if (*pcVar3 == '\0') break;
            pcVar4 = pcVar3 + 1;
            if (*pcVar4 == '\n') goto LAB_0045976f;
            pcVar3 = pcVar3 + 2;
          } while (*pcVar4 != '\0');
          pcVar4 = (char *)0x0;
LAB_0045976f:
          if (pcVar4 != (char *)0x0) {
            pcVar3 = local_9e0;
            do {
              pcVar4 = pcVar3;
              if (*pcVar3 == '\n') goto LAB_00459796;
              if (*pcVar3 == '\0') break;
              pcVar4 = pcVar3 + 1;
              if (*pcVar4 == '\n') goto LAB_00459796;
              pcVar3 = pcVar3 + 2;
            } while (*pcVar4 != '\0');
            pcVar4 = (char *)0x0;
LAB_00459796:
            *pcVar4 = '\0';
          }
          crt_string_c_splitpath_FUN_005ff178
                    (local_9e0,(char *)0x0,(char *)0x0,(char *)(local_40 * 0x50 + (int)local_38),
                     (char *)0x0);
          pcVar4 = ".raw";
          iVar2 = -1;
          pcVar3 = (char *)(local_40 * 0x50 + (int)local_38);
          do {
            pcVar5 = pcVar3;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar3 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar5;
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
      }
      shape_design_c_skipLines_FUN_00459360(local_34,1);
      crt_memory_c_memset_FUN_005fde40(g_ModelPolygonData,0,0x766880);
      local_14 = g_ModelPolygonData;
      for (local_40 = 0; (int)local_40 < g_PartsCount; local_40 = local_40 + 1) {
        for (local_18 = 0; local_18 < local_8d8[local_40]; local_18 = local_18 + 1) {
          local_14->vertex_indices_count = 3;
          local_14->part_assignment = local_40;
          iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (local_34,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_9e4,
                             local_14->vertex_indices,local_14->uv_u,local_14->uv_v,
                             local_14->vertex_indices + 1,local_14->uv_u + 1,local_14->uv_v + 1,
                             local_14->vertex_indices + 2,local_14->uv_u + 2,local_14->uv_v + 2);
          if (iVar2 != 10) goto LAB_00459478;
          if (local_9e4 < 0) {
            local_14->polygon_type = 1;
          }
          else {
            local_14->polygon_type = 2;
            pcVar3 = (char *)(local_9e4 * 0x50 + (int)local_38);
            pcVar4 = local_14->lightmap_name;
            do {
              cVar1 = *pcVar3;
              *pcVar4 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar3[1];
              pcVar3 = pcVar3 + 2;
              pcVar4[1] = cVar1;
              pcVar4 = pcVar4 + 2;
            } while (cVar1 != '\0');
            pcVar3 = (char *)(local_9e4 * 0x50 + (int)local_38);
            pcVar4 = local_14->texture_name;
            do {
              cVar1 = *pcVar3;
              *pcVar4 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar3[1];
              pcVar3 = pcVar3 + 2;
              pcVar4[1] = cVar1;
              pcVar4 = pcVar4 + 2;
            } while (cVar1 != '\0');
          }
          local_14 = local_14 + 1;
        }
      }
      shape_design_c_skipLines_FUN_00459360(local_34,1);
      local_40 = 0;
      while( true ) {
        if (g_VertexCount <= (int)local_40) {
          if (local_38 != (void *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(local_38,"..\\shape\\design.c",0x42f);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\shape\\design.c",0x433);
          shape_design_c_calculateVertexNormals_FUN_0045be40();
          return 1;
        }
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (local_34,"%f,%f,%f\n",g_LoadedVertices + local_40,
                           local_40 * 0x14 + 0x1626410,local_40 * 0x14 + 0x1626414);
        if (iVar2 != 3) break;
        local_40 = local_40 + 1;
      }
    }
  }
LAB_00459478:
  crt_stdio_c_sprintf_FUN_005fdbd0(local_108,"%s is corrupt.",filename);
LAB_00459491:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_34,"..\\shape\\design.c",0x3ae);
  engine_2d_c_drawText_FUN_00401fd0(local_108,0,0x16);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pcVar3 = &s_EmptyChar_0061ab51;
  pcVar4 = g_LoadedModelName;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_PartsCount = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  if (local_38 != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_38,"..\\shape\\design.c",0x3be);
  }
  return 0;
}
