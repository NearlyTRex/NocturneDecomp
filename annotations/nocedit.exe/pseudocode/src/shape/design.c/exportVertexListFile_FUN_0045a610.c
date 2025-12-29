// Name: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
// Address Range: [[0045a610, 0045a7aa]]
// Convention: __cdecl
// Signature: void shape_design.c_exportVertexListFile_FUN_0045a610(void)

#include "nocturne.h"

void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)

{
  FILE *file;
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  char *file_00;
  
  file = engine_dosio_c_getFile_FUN_00481a50("models","input.lst","wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x6ca;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open input.lst");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar3 = 0;
  while (iVar3 < g_VertexCount) {
    iVar2 = (int)((ulonglong)(double)g_LoadedVertices[iVar3].vertex.y >> 0x20);
    crt_stdio_c_fprintf_FUN_005fe6d0
              ((FILE *)((ulonglong)(double)g_LoadedVertices[iVar3].vertex.z >> 0x20),
               "%f,%f,%f\n",(double)g_LoadedVertices[iVar2].vertex.x);
    iVar3 = iVar2 + 1;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)g_PolygonCount,"%d\n");
  for (iVar3 = 0; iVar3 < g_PolygonCount; iVar3 = iVar3 + 1) {
    file_00 = "%d";
    uVar1 = 0x45a72900000000;
    crt_stdio_c_fprintf_FUN_005fe6d0
              ((FILE *)"%d","%d",g_ModelPolygonData[iVar3].vertex_indices_count);
    iVar2 = 0;
    while (iVar3 = (int)((ulonglong)uVar1 >> 0x20),
          iVar2 < (int)g_ModelPolygonData[iVar3].vertex_indices_count) {
      iVar4 = 0x45a771;
      crt_stdio_c_fprintf_FUN_005fe6d0
                ((FILE *)file_00,",%d",g_ModelPolygonData[iVar3].vertex_indices[iVar2]);
      iVar2 = iVar4 + 1;
    }
    crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)file_00,"\n");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0
            ((FILE *)"..\\shape\\design.c","..\\shape\\design.c",0x6d8);
  return;
}
