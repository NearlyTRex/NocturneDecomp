// Name: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
// Address Range: [[0045a610, 0045a7aa]]
// Convention: __cdecl
// Signature: void shape_design.c_exportVertexListFile_FUN_0045a610(void)

#include "nocturne.h"

void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)

{
  FILE *file;
  int local_1c;
  int local_18;
  
  file = engine_dosio_c_getFile_FUN_00481a50("models","input.lst","wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x6ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open input.lst");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file,"%f,%f,%f\n",(double)g_LoadedVertices[local_1c].vertex.x,
               (double)g_LoadedVertices[local_1c].vertex.y,
               (double)g_LoadedVertices[local_1c].vertex.z);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d");
    for (local_18 = 0; local_18 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
        local_18 = local_18 + 1) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,",%d");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"\n");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x6d8);
  return;
}
