// Name: engine_2d.c_loadPaletteFile_FUN_004015a0
// Address: 004015a0
// Address Range: [[004015a0, 0040160e]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadPaletteFile_FUN_004015a0(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadPaletteFile_FUN_004015a0(char *filename)

{
  _FILE *file;
  
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x2c3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open VGA palette");
  }
  _fread(g_SourcePaletteData,0x300,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\2d.c",0x2c5);
  return;
}
