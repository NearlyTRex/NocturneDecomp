// Name: shape_design.c_exportModelToMDL_FUN_00459e80
// Address: 00459e80
// Address Range: [[00459e80, 0045a1fe]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)

#include "nocturne.h"

void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)

{
  char cVar1;
  char *pcVar2;
  char local_6c [80];
  int local_1c;
  int local_18;
  _FILE *local_14;
  
  shape_design_c_sortPolygonsByTexture_FUN_0045b8b0();
  pcVar2 = local_6c;
  do {
    cVar1 = *mdl_filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = mdl_filename[1];
    mdl_filename = mdl_filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  local_14 = engine_dosio_c_getFile_FUN_00481a50("models",local_6c,"wt");
  if (local_14 == (_FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    _fprintf(local_14,"%d\n");
    for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
      _fprintf(local_14,"%f,%f,%f\n",(double)g_LoadedVertices[local_1c].vertex.x,
                 (double)g_LoadedVertices[local_1c].vertex.y,
                 (double)g_LoadedVertices[local_1c].vertex.z);
    }
    _fprintf(local_14,"%d\n");
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      if (g_ModelPolygonData[local_1c].lightmap_name[0] == '\0') {
        if (g_ModelPolygonData[local_1c].texture_name[0] == '\0') {
          _fprintf(local_14,"%d,%d,x\n",g_ModelPolygonData[local_1c].polygon_type);
        }
        else {
          _fprintf(local_14,"%d,%d,%s\n");
        }
      }
      else {
        _fprintf(local_14,"%d,%d,%s,%s\n",g_ModelPolygonData[local_1c].polygon_type,
                   g_ModelPolygonData[local_1c].vertex_indices_count,local_1c * 0x184 + 0x16e9914);
      }
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
          local_18 = local_18 + 1) {
        _fprintf(local_14,"%d,%f,%f\n");
      }
    }
    _fprintf(local_14,"%d\n");
    for (local_1c = 0; local_1c < g_PartsCount; local_1c = local_1c + 1) {
      _fprintf(local_14,"%s\n");
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      _fprintf(local_14,"%d\n");
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      _fprintf(local_14,"%d\n");
    }
    shape_design_c_writeBinaryTreeNode_FUN_00457fd0(g_SpatialTreeRoot,local_14,1);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\shape\\design.c",0x604);
  }
  return;
}
