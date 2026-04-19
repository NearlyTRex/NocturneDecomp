// Name: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
// MANUAL RECONSTRUCTION
// Address Range: [[00402930, 00402a68]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *filename)

{
  _FILE *p_Var2;
  _FILE *file;
  char *buffer;
  char local_5c [80];

  strcpy(local_5c,filename);
  buffer = strchr(local_5c,'.');
  if (buffer == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x770;
    core_main_c_displayErrorAndQuit_FUN_00506f10("hose!");
  }
  _sprintf(buffer,".map");
  p_Var2 = engine_dosio_c_getFile_FUN_00481a50("fog",local_5c,"rb");
  if (p_Var2 != (_FILE *)0x0) {
    _fread(g_ColorCubeLookup,1,0x8000,p_Var2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\engine\\2d.c",0x77c);
    return;
  }
  engine_2d_c_buildColorLookupTable_FUN_00402870();
  file = engine_dosio_c_getFile_FUN_00481a50("fog",local_5c,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x777;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write quick map!");
  }
  _fwrite(g_ColorCubeLookup,1,0x8000,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\2d.c",0x779);
  return;
}
