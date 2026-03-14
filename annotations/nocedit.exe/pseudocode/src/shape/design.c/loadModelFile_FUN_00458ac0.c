// Name: shape_design.c_loadModelFile_FUN_00458ac0
// Address: 00458ac0
// Address Range: [[00458ac0, 00459357]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_loadModelFile_FUN_00458ac0(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadModelFile_FUN_00458ac0(char *filename)

{
  byte bVar2;
  char cVar3;
  int iVar3;
  int iVar4;
  _FILE *file;
  uint uVar5;
  uint uVar4;
  byte *str1;
  byte *pbVar6;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar8;
  char *pcVar7;
  char *pcVar9;
  SModelPartName *pSVar8;
  byte bVar9;
  char local_170 [84];
  char local_11c [80];
  char local_cc [88];
  byte local_74 [80];
  int local_24;
  uint local_20;
  int local_1c;
  _FILE *local_18;
  byte *local_14;
  byte bVar1;
  char cVar2;
  
  bVar9 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Loading model...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  pbVar5 = local_74;
  do {
    bVar1 = *filename;
    *pbVar5 = bVar1;
    if (bVar1 == 0) break;
    bVar2 = filename[1];
    filename = filename + 2;
    pbVar5[1] = bVar2;
    pbVar5 = pbVar5 + 2;
  } while (bVar2 != 0);
  local_20 = 0;
  do {
    uVar4 = 0xffffffff;
    pbVar6 = local_74;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar2 != 0);
    if (~uVar4 - 1 <= local_20) break;
    iVar3 = toupper((uint)local_74[local_20]);
    local_74[local_20] = (byte)iVar3;
    local_20 = local_20 + 1;
  } while( true );
  pbVar6 = local_74;
  do {
    str1 = pbVar6;
    if (*pbVar6 == 0x2e) goto LAB_00458b67;
    if (*pbVar6 == 0) break;
    str1 = pbVar6 + 1;
    if (*str1 == 0x2e) goto LAB_00458b67;
    pbVar6 = pbVar6 + 2;
  } while (*str1 != 0);
  str1 = (byte *)0x0;
LAB_00458b67:
  if (str1 != (byte *)0x0) {
    iVar4 = _strcmp((char *)str1,".BIN");
    if (iVar4 == 0) {
      iVar4 = shape_design_c_loadModelBinary_FUN_00458170((char *)local_74);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar6 = local_74;
      pcVar6 = g_LoadedModelName;
      do {
        bVar2 = *pbVar6;
        *pcVar6 = bVar2;
        if (bVar2 == 0) {
          g_VertexOptimizationPasses = 0;
          g_PolygonOptimizationPasses = 0;
          return iVar4;
        }
        bVar2 = pbVar6[1];
        pbVar6 = pbVar6 + 2;
        pcVar6[1] = bVar2;
        pcVar6 = pcVar6 + 2;
      } while (bVar2 != 0);
      g_VertexOptimizationPasses = 0;
      g_PolygonOptimizationPasses = 0;
      return iVar4;
    }
    iVar4 = _strcmp((char *)str1,".S3D");
    if (iVar4 == 0) {
      iVar4 = shape_design_c_loadS3DModelFile_FUN_004593a0((char *)local_74);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar6 = local_74;
      pcVar8 = g_LoadedModelName;
      do {
        bVar2 = *pbVar6;
        *pcVar8 = bVar2;
        if (bVar2 == 0) {
          g_VertexOptimizationPasses = 0;
          g_PolygonOptimizationPasses = 0;
          return iVar4;
        }
        bVar2 = pbVar6[1];
        pbVar6 = pbVar6 + 2;
        pcVar8[1] = bVar2;
        pcVar8 = pcVar8 + 2;
      } while (bVar2 != 0);
      g_VertexOptimizationPasses = 0;
      g_PolygonOptimizationPasses = 0;
      return iVar4;
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("models",(char *)local_74,"rt");
  if (file == (_FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    local_24 = 0;
  }
  else {
    pbVar6 = local_74;
    pcVar8 = g_LoadedModelName;
    do {
      bVar2 = *pbVar6;
      *pcVar8 = bVar2;
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      pbVar6 = pbVar6 + 2;
      pcVar8[1] = bVar2;
      pcVar8 = pcVar8 + 2;
    } while (bVar2 != 0);
    g_PolygonOptimizationPasses = 0;
    g_VertexOptimizationPasses = 0;
    _fscanf(file,"%d\n",&g_VertexCount);
    if (g_VertexCount < 0x4e21) {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        _fscanf(file,"%f,%f,%f\n",g_LoadedVertices + local_20,local_20 * 0x14 + 0x1626410,
                   local_20 * 0x14 + 0x1626414);
      }
      _fscanf(file,"%d\n",&g_PolygonCount);
      if (g_PolygonCount < 0x4e21) {
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          _fgets(local_170,0x51,file);
          pcVar8 = strtok(local_170,",");
          uVar5 = atoi(pcVar8);
          g_ModelPolygonData[local_20].polygon_type = uVar5;
          pcVar8 = strtok((char *)0x0,",");
          uVar5 = atoi(pcVar8);
          g_ModelPolygonData[local_20].vertex_indices_count = uVar5;
          pcVar9 = strtok((char *)0x0,",\n");
          pcVar8 = g_ModelPolygonData[local_20].texture_name;
          do {
            cVar3 = *pcVar9;
            *pcVar8 = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar8[1] = cVar3;
            pcVar8 = pcVar8 + 2;
          } while (cVar3 != '\0');
          pcVar8 = strtok((char *)0x0,",\n");
          if (pcVar8 == (char *)0x0) {
            g_ModelPolygonData[local_20].lightmap_name[0] = '\0';
          }
          else {
            pcVar9 = g_ModelPolygonData[local_20].lightmap_name;
            do {
              cVar3 = *pcVar8;
              *pcVar9 = cVar3;
              if (cVar3 == '\0') break;
              cVar3 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              pcVar9[1] = cVar3;
              pcVar9 = pcVar9 + 2;
            } while (cVar3 != '\0');
          }
          if ((g_ModelPolygonData[local_20].texture_name[0] == 'x') &&
             (g_ModelPolygonData[local_20].texture_name[1] == '\0')) {
            g_ModelPolygonData[local_20].texture_name[0] = '\0';
          }
          for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_20].vertex_indices_count;
              local_1c = local_1c + 1) {
            _fscanf(file,"%d,%f,%f\n",local_20 * 0x184 + 0x16e99c8 + local_1c * 4,
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
        _fscanf(file,"%d\n",&g_PartsCount);
        for (local_20 = 0; (int)local_20 < g_PartsCount; local_20 = local_20 + 1) {
          _fscanf(file,"%s\n",g_ModelPartNames + local_20);
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          _fscanf(file,"%d\n",local_20 * 0x184 + 0x16e9a88);
        }
        if (g_PartsCount == 0) {
          for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
            g_ModelPolygonData[local_20].part_assignment = 0;
          }
          g_PartsCount = 1;
          pcVar8 = "BODY";
          pSVar8 = g_ModelPartNames;
          do {
            cVar3 = *pcVar8;
            pSVar8->name[0] = cVar3;
            if (cVar3 == '\0') break;
            cVar3 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            *(char *)((int)pSVar8 + 1) = cVar3;
            pSVar8 = (SModelPartName *)((int)pSVar8 + 2);
          } while (cVar3 != '\0');
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          g_ModelPolygonData[local_20].material_id = 0;
          _fscanf(file,"%d\n",local_20 * 0x184 + 0x16e9a8c);
          g_ModelPolygonData[local_20].material_id_backup = g_ModelPolygonData[local_20].material_id
          ;
        }
        g_SpatialTreeRoot = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x371);
        shape_design_c_calculateVertexNormals_FUN_0045be40();
        local_24 = 1;
      }
      else {
        _sprintf
                  (local_11c,"ERROR: Too many polygons! (npoly:%d > MAX_POLYS:%d)",g_PolygonCount,20000);
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        pcVar8 = &s_EmptyChar_0061aaa3;
        pcVar9 = g_LoadedModelName;
        do {
          cVar3 = *pcVar8;
          *pcVar9 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar3;
          pcVar9 = pcVar9 + 2;
        } while (cVar3 != '\0');
        g_PartsCount = 0;
        g_PolygonCount = 0;
        g_VertexCount = 0;
        g_SelectedPolygonIndex = -1;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x33b);
        local_24 = 0;
      }
    }
    else {
      _sprintf
                (local_cc,"ERROR: Too many vertices! (npoints:%d > MAX_POINTS:%d)",g_VertexCount,20000);
      engine_2d_c_drawText_FUN_00401fd0(local_cc,0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      pcVar8 = &s_EmptyChar_0061aa4e;
      pcVar7 = g_LoadedModelName;
      do {
        cVar2 = *pcVar8;
        *pcVar7 = cVar2;
        if (cVar2 == '\0') break;
        cVar3 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar7[1] = cVar3;
        pcVar7 = pcVar7 + 2;
      } while (cVar3 != '\0');
      g_PartsCount = 0;
      g_PolygonCount = 0;
      g_VertexCount = 0;
      g_SelectedPolygonIndex = -1;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x329);
      local_24 = 0;
    }
  }
  return local_24;
}
