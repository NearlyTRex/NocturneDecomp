// Name: engine_2d.c_FUN_00403500
// Address: 00403500
// Address Range: [[00403500, 00403564]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403500(char *param_1)

#include "nocturne.h"

void engine_2d_c_FUN_00403500(char *param_1)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"wb");
  if (file == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x738;
    core_main_c_FUN_004c8440("Unable to write light tab");
  }
  _fwrite((void *)0x1bf5620,0x100,0x20,file);
  _fclose(file);
  return;
}
