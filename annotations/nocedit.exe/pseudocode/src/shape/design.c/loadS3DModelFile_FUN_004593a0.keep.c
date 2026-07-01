// Name: shape_design.c_loadS3DModelFile_FUN_004593a0
// Address: 004593a0
// MANUAL RECONSTRUCTION
// Address Range: [[004593a0, 00459a15]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_loadS3DModelFile_FUN_004593a0(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_loadS3DModelFile_FUN_004593a0(char *filename)

{
  _FILE *file;
  int iVar2;
  int iVar3;
  char *pcVar6;
  char *pcVar7;
  int local_9e4;
  char local_9e0 [260];
  int local_8dc;
  int local_8d8 [500];
  char local_108 [200];
  uint local_40;
  char (*local_38)[80];
  int local_30 [3];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  SShapeEditorPolygon *local_14;
  byte bVar6;
  
  bVar6 = 0;
  local_38 = (char (*)[80])0x0;
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
  if (file == (_FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    return 0;
  }
  strcpy(g_LoadedModelName,filename);
  g_PolygonOptimizationPasses = 0;
  g_VertexOptimizationPasses = 0;
  g_SelectedPolygonIndex = -1;
  g_SpatialTreeRoot = (STreeNode *)0x0;
  shape_design_c_skipLines_FUN_00459360(file,1);
  iVar2 = _fscanf(file,"%d\n",local_30);
  if (iVar2 == 1) {
    local_30[1] = 0x67;
    if (local_30[0] != 0x67) {
      _sprintf
                (local_108,"Invalid .S3D version: %d, we can only handle files version of %d",local_30[0],0x67);
      goto LAB_00459491;
    }
    shape_design_c_skipLines_FUN_00459360(file,1);
    iVar3 = _fscanf(file,"%d,%d,%d,%d,%d,%d,%d\n",local_30 + 2,&g_PolygonCount,&g_VertexCount,
                       &g_PartsCount,&local_24,&local_20,&local_1c);
    if (iVar3 == 7) {
      if (20000 < g_PolygonCount) {
        _sprintf
                  (local_108,"Too many polygons: %d, max is %d",g_PolygonCount,20000);
        goto LAB_00459491;
      }
      if (20000 < g_VertexCount) {
        _sprintf
                  (local_108,"Too many vertices: %d, max is %d",g_VertexCount,20000);
        goto LAB_00459491;
      }
      if (500 < g_PartsCount) {
        _sprintf
                  (local_108,"Too many parts: %d, max is %d",g_VertexCount,500);
        goto LAB_00459491;
      }
      shape_design_c_skipLines_FUN_00459360(file,1);
      for (local_40 = 0; (int)local_40 < g_PartsCount; local_40 = local_40 + 1) {
        iVar3 = _fscanf(file,"%d,%d,%d,%d,\"%[^\"]\"\n",&local_8dc,&local_8dc,&local_8dc,
                           local_8d8 + local_40,g_ModelPartNames[local_40].name);
        if (iVar3 != 5) goto LAB_00459478;
      }
      shape_design_c_skipLines_FUN_00459360(file,1);
      if (0 < local_30[2]) {
        local_38 = (char (*)[80])shape_memdbg_cpp_debugMalloc_FUN_0050f250
                                            (local_30[2] * 0x50,"..\\shape\\design.c",1004);
        if (local_38 == (char (*)[80])0x0) {
          _sprintf
                    (local_108,"Out of memory for texture list, numTextures = %d",local_30[2]);
          goto LAB_00459491;
        }
        for (local_40 = 0; (int)local_40 < local_30[2]; local_40 = local_40 + 1) {
          pcVar6 = _fgets(local_9e0,0x104,file);
          if (pcVar6 == (char *)0x0) goto LAB_00459478;
          pcVar7 = strchr(local_9e0,'\n');
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
          }
          splitpath(local_9e0,(char *)0x0,(char *)0x0,local_38[local_40],(char *)0x0);
          strcat(local_38[local_40],".raw");
        }
      }
      shape_design_c_skipLines_FUN_00459360(file,1);
      memset(g_ModelPolygonData,0,sizeof(g_ModelPolygonData));
      local_14 = g_ModelPolygonData;
      for (local_40 = 0; (int)local_40 < g_PartsCount; local_40 = local_40 + 1) {
        for (local_18 = 0; local_18 < local_8d8[local_40]; local_18 = local_18 + 1) {
          local_14->vertex_indices_count = 3;
          local_14->part_assignment = local_40;
          iVar3 = _fscanf(file,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_9e4,local_14->vertex_indices
                             ,local_14->uv_u,local_14->uv_v,local_14->vertex_indices + 1,
                             local_14->uv_u + 1,local_14->uv_v + 1,local_14->vertex_indices + 2,
                             local_14->uv_u + 2,local_14->uv_v + 2);
          if (iVar3 != 10) goto LAB_00459478;
          if (local_9e4 < 0) {
            local_14->polygon_type = 1;
          }
          else {
            local_14->polygon_type = 2;
            strcpy(local_14->lightmap_name,local_38[local_9e4]);
            strcpy(local_14->texture_name,local_38[local_9e4]);
          }
          local_14 = local_14 + 1;
        }
      }
      shape_design_c_skipLines_FUN_00459360(file,1);
      local_40 = 0;
      while( true ) {
        if (g_VertexCount <= (int)local_40) {
          if (local_38 != (char (*)[80])0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(local_38,"..\\shape\\design.c",1071);
          }
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",1075);
          shape_design_c_calculateVertexNormals_FUN_0045be40();
          return 1;
        }
        iVar3 = _fscanf(file,"%f,%f,%f\n",&g_LoadedVertices[local_40].vertex.x,
                           &g_LoadedVertices[local_40].vertex.y,&g_LoadedVertices[local_40].vertex.z);
        if (iVar3 != 3) break;
        local_40 = local_40 + 1;
      }
    }
  }
LAB_00459478:
  _sprintf(local_108,"%s is corrupt.",filename);
LAB_00459491:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",942);
  engine_2d_c_drawText_FUN_00401fd0(local_108,0,0x16);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_LoadedModelName[0] = '\0';
  g_PartsCount = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  if (local_38 != (char (*)[80])0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(local_38,"..\\shape\\design.c",958);
  }
  return 0;
}
