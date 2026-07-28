// Name: engine_2d.c_FUN_00401bd0
// Address: 00401bd0
// Address Range: [[00401bd0, 00401c34]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00401bd0(char *param_1)

#include "nocturne.h"

void engine_2d_c_FUN_00401bd0(char *param_1)

{
  _FILE *file;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (file == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x2c1;
    core_main_c_FUN_004c8440("Unable to open VGA palette");
  }
  _fread(&DAT_01c00648,0x300,1,file);
  _fclose(file);
  return;
}
