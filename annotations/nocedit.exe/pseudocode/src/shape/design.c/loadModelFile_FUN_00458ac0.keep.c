// Name: shape_design.c_loadModelFile_FUN_00458ac0
// Address: 00458ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00458ac0, 00459357]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_loadModelFile_FUN_00458ac0(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadModelFile_FUN_00458ac0(char *filename)

{
  int iVar3;
  int iVar4;
  _FILE *file;
  uint uVar5;
  byte *str1;
  char *pcVar8;
  char *pcVar9;
  char local_170 [84];
  char local_11c [80];
  char local_cc [88];
  byte local_74 [80];
  int local_24;
  uint local_20;
  int local_1c;

  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Loading model...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  strcpy((char *)local_74,filename);
  local_20 = 0;
  do {
    if (strlen((char *)local_74) <= local_20) break;
    iVar3 = toupper((uint)local_74[local_20]);
    local_74[local_20] = (byte)iVar3;
    local_20 = local_20 + 1;
  } while( true );
  str1 = (byte *)strchr((char *)local_74,'.');
  if (str1 != (byte *)0x0) {
    iVar4 = _strcmp((char *)str1,".BIN");
    if (iVar4 == 0) {
      iVar4 = shape_design_c_loadModelBinary_FUN_00458170((char *)local_74);
      if (iVar4 == 0) {
        return 0;
      }
      strcpy(g_LoadedModelName,(char *)local_74);
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
      strcpy(g_LoadedModelName,(char *)local_74);
      g_VertexOptimizationPasses = 0;
      g_PolygonOptimizationPasses = 0;
      return iVar4;
    }
  }
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",(char *)local_74,"rt");
  if (file == (_FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    local_24 = 0;
  }
  else {
    strcpy(g_LoadedModelName,(char *)local_74);
    g_PolygonOptimizationPasses = 0;
    g_VertexOptimizationPasses = 0;
    _fscanf(file,"%d\n",&g_VertexCount);
    if (g_VertexCount < 0x4e21) {
      for (local_20 = 0; (int)local_20 < g_VertexCount; local_20 = local_20 + 1) {
        _fscanf(file,"%f,%f,%f\n",&g_LoadedVertices[local_20].vertex.x,
                   &g_LoadedVertices[local_20].vertex.y,
                   &g_LoadedVertices[local_20].vertex.z);
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
          strcpy(g_ModelPolygonData[local_20].texture_name,pcVar9);
          pcVar8 = strtok((char *)0x0,",\n");
          if (pcVar8 == (char *)0x0) {
            g_ModelPolygonData[local_20].lightmap_name[0] = '\0';
          }
          else {
            strcpy(g_ModelPolygonData[local_20].lightmap_name,pcVar8);
          }
          if ((g_ModelPolygonData[local_20].texture_name[0] == 'x') &&
             (g_ModelPolygonData[local_20].texture_name[1] == '\0')) {
            g_ModelPolygonData[local_20].texture_name[0] = '\0';
          }
          for (local_1c = 0; local_1c < (int)g_ModelPolygonData[local_20].vertex_indices_count;
              local_1c = local_1c + 1) {
            _fscanf(file,"%d,%f,%f\n",&g_ModelPolygonData[local_20].vertex_indices[local_1c],
                       &g_ModelPolygonData[local_20].uv_u[local_1c],
                       &g_ModelPolygonData[local_20].uv_v[local_1c]);
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
          _fscanf(file,"%s\n",g_ModelPartNames[local_20].name);
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          _fscanf(file,"%d\n",&g_ModelPolygonData[local_20].part_assignment);
        }
        if (g_PartsCount == 0) {
          for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
            g_ModelPolygonData[local_20].part_assignment = 0;
          }
          g_PartsCount = 1;
          strcpy(g_ModelPartNames[0].name,"BODY");
        }
        for (local_20 = 0; (int)local_20 < g_PolygonCount; local_20 = local_20 + 1) {
          g_ModelPolygonData[local_20].material_id = 0;
          _fscanf(file,"%d\n",&g_ModelPolygonData[local_20].material_id);
          g_ModelPolygonData[local_20].material_id_backup = g_ModelPolygonData[local_20].material_id
          ;
        }
        g_SpatialTreeRoot = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",881);
        shape_design_c_calculateVertexNormals_FUN_0045be40();
        local_24 = 1;
      }
      else {
        _sprintf
                  (local_11c,"ERROR: Too many polygons! (npoly:%d > MAX_POLYS:%d)",g_PolygonCount,20000);
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,0x16);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        strcpy(g_LoadedModelName,&s_EmptyChar_0061aaa3);
        g_PartsCount = 0;
        g_PolygonCount = 0;
        g_VertexCount = 0;
        g_SelectedPolygonIndex = -1;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",827);
        local_24 = 0;
      }
    }
    else {
      _sprintf
                (local_cc,"ERROR: Too many vertices! (npoints:%d > MAX_POINTS:%d)",g_VertexCount,20000);
      engine_2d_c_drawText_FUN_00401fd0(local_cc,0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      strcpy(g_LoadedModelName,&s_EmptyChar_0061aa4e);
      g_PartsCount = 0;
      g_PolygonCount = 0;
      g_VertexCount = 0;
      g_SelectedPolygonIndex = -1;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",809);
      local_24 = 0;
    }
  }
  return local_24;
}
