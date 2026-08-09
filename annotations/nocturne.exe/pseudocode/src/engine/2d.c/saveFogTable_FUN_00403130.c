// Name: engine_2d.c_saveFogTable_FUN_00403130
// Address: 00403130
// Address Range: [[00403130, 00403194]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_saveFogTable_FUN_00403130(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_saveFogTable_FUN_00403130(char *filename)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",filename,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 1719;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to write fog tab");
  }
  _fwrite(g_FogTable + 1,0x100,0x10,file);
  _fclose(file);
  return;
}
