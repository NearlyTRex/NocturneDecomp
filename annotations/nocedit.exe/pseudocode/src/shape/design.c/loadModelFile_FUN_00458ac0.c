// Name: shape_design.c_loadModelFile_FUN_00458ac0
// Address: 00458ac0
// Address Range: [[00458ac0, 00459357]]
// Convention: __cdecl
// Signature: int shape_design.c_loadModelFile_FUN_00458ac0(char * filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadModelFile_FUN_00458ac0(char *filename)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  SModelPartName *pSVar8;
  byte bVar9;
  char local_170 [84];
  char local_11c [80];
  char local_cc [88];
  byte local_74 [80];
  int local_24;
  uint local_20;
  int local_1c;
  FILE *local_18;
  byte *local_14;
  
  bVar9 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Loading model...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  pbVar5 = local_74;
  do {
    bVar1 = *filename;
    *pbVar5 = bVar1;
    if (bVar1 == 0) break;
    bVar1 = ((byte *)filename)[1];
    filename = (char *)((byte *)filename + 2);
    pbVar5[1] = bVar1;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  local_20 = 0;
  do {
    uVar4 = 0xffffffff;
    pbVar5 = local_74;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
    } while (bVar1 != 0);
    if (~uVar4 - 1 <= local_20) break;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_74[local_20]);
    local_74[local_20] = (byte)iVar3;
    local_20 = local_20 + 1;
  } while( true );
  pbVar5 = local_74;
  do {
    local_14 = pbVar5;
    if (*pbVar5 == 0x2e) goto LAB_00458b67;
    if (*pbVar5 == 0) break;
    local_14 = pbVar5 + 1;
    if (*local_14 == 0x2e) goto LAB_00458b67;
    pbVar5 = pbVar5 + 2;
  } while (*local_14 != 0);
  local_14 = (byte *)0x0;
LAB_00458b67:
  if (local_14 != (byte *)0x0) {
    iVar3 = crt_string_c_strcmp_FUN_005fef20((char *)local_14,".BIN");
    if (iVar3 == 0) {
      iVar3 = shape_design_c_loadModelBinary_FUN_00458170((char *)local_74);
      if (iVar3 == 0) {
        return 0;
      }
      pbVar5 = local_74;
      pcVar6 = g_LoadedModelName;
      do {
        bVar9 = *pbVar5;
        *pcVar6 = bVar9;
        if (bVar9 == 0) {
          g_VertexOptimizationPasses = 0;
          g_PolygonOptimizationPasses = 0;
          return iVar3;
        }
        bVar9 = pbVar5[1];
        pbVar5 = pbVar5 + 2;
        ((byte *)pcVar6)[1] = bVar9;
        pcVar6 = (char *)((byte *)pcVar6 + 2);
      } while (bVar9 != 0);
      g_VertexOptimizationPasses = 0;
      g_PolygonOptimizationPasses = 0;
      return iVar3;
    }
    iVar3 = crt_string_c_strcmp_FUN_005fef20((char *)local_14,".S3D");
    if (iVar3 == 0) {
      iVar3 = shape_design_c_loadS3DModelFile_FUN_004593a0((char *)local_74);
      if (iVar3 == 0) {
        return 0;
      }
      pbVar5 = local_74;
      pcVar6 = g_LoadedModelName;
      do {
        bVar9 = *pbVar5;
        *pcVar6 = bVar9;
        if (bVar9 == 0) {
          g_VertexOptimizationPasses = 0;
          g_PolygonOptimizationPasses = 0;
          return iVar3;
        }
        bVar9 = pbVar5[1];
        pbVar5 = pbVar5 + 2;
        ((byte *)pcVar6)[1] = bVar9;
        pcVar6 = (char *)((byte *)pcVar6 + 2);
      } while (bVar9 != 0);
      g_VertexOptimizationPasses = 0;
      g_PolygonOptimizationPasses = 0;
      return iVar3;
    }
  }
  local_18 = engine_dosio_c_getFile_FUN_00481a50("models",(char *)local_74,"rt");
  if (local_18 == (FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    local_24 = 0;
  }
  else {
    pbVar5 = local_74;
    pcVar6 = g_LoadedModelName;
    do {
      bVar9 = *pbVar5;
      *pcVar6 = bVar9;
      if (bVar9 == 0) break;
      bVar9 = pbVar5[1];
      pbVar5 = pbVar5 + 2;
      ((byte *)pcVar6)[1] = bVar9;
      pcVar6 = (char *)((byte *)pcVar6 + 2);
    } while (bVar9 != 0);
    g_PolygonOptimizationPasses = 0;
    g_VertexOptimizationPasses = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%d\n",&g_VertexCount);
    if (g_VertexCount < 0x4e21) {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (local_18,"%f,%f,%f\n",g_LoadedVertices + local_20,local_20 * 0x14 + 0x1626410
                   ,local_20 * 0x14 + 0x1626414);
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%d\n",&g_PolygonCount);
      if (g_PolygonCount < 0x4e21) {
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          crt_stdio_c_fgets_FUN_005fefd0(local_170,0x51,local_18);
          local_14 = (byte *)crt_string_c_strtok_FUN_005fff50(local_170,",");
          uVar4 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_14);
          g_ModelPolygonData[local_20].polygon_type = uVar4;
          local_14 = (byte *)crt_string_c_strtok_FUN_005fff50((char *)0x0,",");
          uVar4 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_14);
          g_ModelPolygonData[local_20].vertex_indices_count = uVar4;
          local_14 = (byte *)crt_string_c_strtok_FUN_005fff50((char *)0x0,",\n");
          pcVar6 = g_ModelPolygonData[local_20].texture_name;
          pcVar7 = (char *)local_14;
          do {
            cVar2 = *pcVar7;
            *pcVar6 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
          local_14 = (byte *)crt_string_c_strtok_FUN_005fff50((char *)0x0,",\n");
          if (local_14 == (byte *)0x0) {
            g_ModelPolygonData[local_20].lightmap_name[0] = '\0';
          }
          else {
            pcVar6 = g_ModelPolygonData[local_20].lightmap_name;
            pbVar5 = local_14;
            do {
              bVar9 = *pbVar5;
              *pcVar6 = bVar9;
              if (bVar9 == 0) break;
              bVar9 = pbVar5[1];
              pbVar5 = pbVar5 + 2;
              pcVar6[1] = bVar9;
              pcVar6 = pcVar6 + 2;
            } while (bVar9 != 0);
          }
          if ((g_ModelPolygonData[local_20].texture_name[0] == 'x') &&
             (g_ModelPolygonData[local_20].texture_name[1] == '\0')) {
            g_ModelPolygonData[local_20].texture_name[0] = '\0';
          }
          for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_20].vertex_indices_count;
              local_1c = local_1c + 1) {
            crt_stdio_c_fscanf_FUN_005fe7c0
                      (local_18,"%d,%f,%f\n",local_20 * 0x184 + 0x16e99c8 + local_1c * 4,
                       local_20 * 0x184 + 0x16e9a08 + local_1c * 4,
                       local_20 * 0x184 + 0x16e9a48 + local_1c * 4);
            if (g_ModelPolygonData[local_20].uv_u[local_1c] < 0.0) {
              g_ModelPolygonData[local_20].uv_u[local_1c] = 0.0;
            }
            if (g_ModelPolygonData[local_20].uv_v[local_1c] < 0.0) {
              g_ModelPolygonData[local_20].uv_v[local_1c] = 0.0;
            }
            if ((float)255.999741 < g_ModelPolygonData[local_20].uv_u[local_1c]) {
              g_ModelPolygonData[local_20].uv_u[local_1c] = 255.99974;
            }
            if ((float)255.999741 < g_ModelPolygonData[local_20].uv_v[local_1c]) {
              g_ModelPolygonData[local_20].uv_v[local_1c] = 255.99974;
            }
          }
        }
        g_PartsCount = 0;
        crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%d\n",&g_PartsCount);
        for (local_20 = 0; (int)local_20 < g_PartsCount; local_20 = local_20 + 1) {
          crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%s\n",g_ModelPartNames + local_20);
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%d\n",local_20 * 0x184 + 0x16e9a88);
        }
        if (g_PartsCount == 0) {
          for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
            g_ModelPolygonData[local_20].part_assignment = 0;
          }
          g_PartsCount = 1;
          pcVar6 = "BODY";
          pSVar8 = g_ModelPartNames;
          do {
            cVar2 = *pcVar6;
            pSVar8->name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            *(char *)((int)pSVar8 + 1) = cVar2;
            pSVar8 = (SModelPartName *)((int)pSVar8 + 2);
          } while (cVar2 != '\0');
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          g_ModelPolygonData[local_20].material_id = 0;
          crt_stdio_c_fscanf_FUN_005fe7c0(local_18,"%d\n",local_20 * 0x184 + 0x16e9a8c);
          g_ModelPolygonData[local_20].material_id_backup = g_ModelPolygonData[local_20].material_id
          ;
        }
        g_SpatialTreeRoot = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(local_18);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\shape\\design.c",0x371);
        shape_design_c_calculateVertexNormals_FUN_0045be40();
        local_24 = 1;
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_11c,"ERROR: Too many polygons! (npoly:%d > MAX_POLYS:%d)",g_PolygonCount,20000);
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        pcVar6 = &s_EmptyChar_0061aaa3;
        pcVar7 = g_LoadedModelName;
        do {
          cVar2 = *pcVar6;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
        g_PartsCount = 0;
        g_PolygonCount = 0;
        g_VertexCount = 0;
        g_SelectedPolygonIndex = -1;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\shape\\design.c",0x33b);
        local_24 = 0;
      }
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_cc,"ERROR: Too many vertices! (npoints:%d > MAX_POINTS:%d)",g_VertexCount,20000);
      engine_2d_c_drawText_FUN_00401fd0(local_cc,0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      pcVar6 = &s_EmptyChar_0061aa4e;
      pcVar7 = g_LoadedModelName;
      do {
        cVar2 = *pcVar6;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar2;
        pcVar7 = pcVar7 + 2;
      } while (cVar2 != '\0');
      g_PartsCount = 0;
      g_PolygonCount = 0;
      g_VertexCount = 0;
      g_SelectedPolygonIndex = -1;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\shape\\design.c",0x329);
      local_24 = 0;
    }
  }
  return local_24;
}
