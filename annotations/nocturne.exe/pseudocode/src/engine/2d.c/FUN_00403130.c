// Name: engine_2d.c_FUN_00403130
// Address: 00403130
// Address Range: [[00403130, 00403194]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403130(char *param_1)

#include "nocturne.h"

void engine_2d_c_FUN_00403130(char *param_1)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 1719;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to write fog tab");
  }
  _fwrite((void *)0x1bd1ea0,0x100,0x10,file);
  _fclose(file);
  return;
}
