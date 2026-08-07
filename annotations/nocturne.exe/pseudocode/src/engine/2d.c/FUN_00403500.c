// Name: engine_2d.c_FUN_00403500
// Address: 00403500
// Address Range: [[00403500, 00403564]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_00403500(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_FUN_00403500(char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",filename,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 1848;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to write light tab");
  }
  _fwrite(g_LightTable + 1,0x100,0x20,file);
  _fclose(file);
  return;
}
