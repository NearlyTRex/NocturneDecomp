// Name: engine_2d.c_loadPaletteFile_FUN_00401bd0
// Address: 00401bd0
// Address Range: [[00401bd0, 00401c34]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadPaletteFile_FUN_00401bd0(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadPaletteFile_FUN_00401bd0(char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 705;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to open VGA palette");
  }
  _fread(g_SourcePaletteData,0x300,1,file);
  _fclose(file);
  return;
}
