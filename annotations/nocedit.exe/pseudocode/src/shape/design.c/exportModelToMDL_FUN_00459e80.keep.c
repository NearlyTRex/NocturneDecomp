// Name: shape_design.c_exportModelToMDL_FUN_00459e80
// Address: 00459e80
// MANUAL RECONSTRUCTION
// Address Range: [[00459e80, 0045a1fe]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)

#include "nocturne.h"

void __cdecl shape_design_c_exportModelToMDL_FUN_00459e80(char *mdl_filename)

{
  _FILE *file;
  char local_6c [80];
  int local_1c;
  int local_18;

  shape_design_c_sortPolygonsByTexture_FUN_0045b8b0();
  strcpy(local_6c, mdl_filename);
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",local_6c,"wt");
  if (file == (_FILE *)0x0) {
    engine_2d_c_drawText_FUN_00401fd0("FILE ERROR! Nothing changed!",0,0x16);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  else {
    _fprintf(file,"%d\n",g_VertexCount);
    for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
      _fprintf(file,"%f,%f,%f\n",(double)g_LoadedVertices[local_1c].vertex.x,
                 (double)g_LoadedVertices[local_1c].vertex.y,
                 (double)g_LoadedVertices[local_1c].vertex.z);
    }
    _fprintf(file,"%d\n",g_PolygonCount);
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      if (g_ModelPolygonData[local_1c].lightmap_name[0] == '\0') {
        if (g_ModelPolygonData[local_1c].texture_name[0] == '\0') {
          _fprintf(file,"%d,%d,x\n",g_ModelPolygonData[local_1c].polygon_type,
                     g_ModelPolygonData[local_1c].vertex_indices_count);
        }
        else {
          _fprintf(file,"%d,%d,%s\n",g_ModelPolygonData[local_1c].polygon_type,
                     g_ModelPolygonData[local_1c].vertex_indices_count,
                     g_ModelPolygonData[local_1c].texture_name);
        }
      }
      else {
        _fprintf(file,"%d,%d,%s,%s\n",g_ModelPolygonData[local_1c].polygon_type,
                   g_ModelPolygonData[local_1c].vertex_indices_count,
                   g_ModelPolygonData[local_1c].texture_name,
                   g_ModelPolygonData[local_1c].lightmap_name);
      }
      for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
          local_18 = local_18 + 1) {
        _fprintf(file,"%d,%f,%f\n",g_ModelPolygonData[local_1c].vertex_indices[local_18],
                   (double)g_ModelPolygonData[local_1c].uv_u[local_18],
                   (double)g_ModelPolygonData[local_1c].uv_v[local_18]);
      }
    }
    _fprintf(file,"%d\n",g_PartsCount);
    for (local_1c = 0; local_1c < g_PartsCount; local_1c = local_1c + 1) {
      _fprintf(file,"%s\n",g_ModelPartNames[local_1c].name);
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      _fprintf(file,"%d\n",g_ModelPolygonData[local_1c].part_assignment);
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      _fprintf(file,"%d\n",g_ModelPolygonData[local_1c].material_id);
    }
    shape_design_c_writeBinaryTreeNode_FUN_00457fd0(g_SpatialTreeRoot,file,1);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",1540);
  }
  return;
}
