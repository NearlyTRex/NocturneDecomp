// Name: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
// Address Range: [[0045a610, 0045a7aa]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)

#include "nocturne.h"

void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)

{
  _FILE *file;
  int local_1c;
  int local_18;
  
  file = engine_dosio_cpp_getFile_FUN_00481a50("models","input.lst","wt")
  ;
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 1738;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open input.lst");
  }
  _fprintf(file,"%d\n");
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    _fprintf(file,"%f,%f,%f\n",(double)g_LoadedVertices[local_1c].vertex.x,
               (double)g_LoadedVertices[local_1c].vertex.y,
               (double)g_LoadedVertices[local_1c].vertex.z);
  }
  _fprintf(file,"%d\n");
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    _fprintf(file,"%d");
    for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
        local_18 = local_18 + 1) {
      _fprintf(file,",%d");
    }
    _fprintf(file,"\n");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",1752);
  return;
}
