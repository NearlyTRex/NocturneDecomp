// Name: engine_2d.c_FUN_00403070
// Address: 00403070
// Address Range: [[00403070, 0040312f]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403070(char *param_1,int param_2)

#include "nocturne.h"

void engine_2d_c_FUN_00403070(char *param_1,int param_2)

{
  _FILE *file;
  int iVar1;
  int iVar2;
  
  file = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"rb");
  if (file == (_FILE *)0x0) {
    engine_2d_c_FUN_00402e90(param_2);
    engine_2d_c_FUN_00403130(param_1);
    file = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"rb");
  }
  if (file == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x69c;
    core_main_c_FUN_004c8440("Unable to read fog table.");
  }
  else {
    _fread((void *)0x1bd1ea0,0x100,0x10,file);
    _fclose(file);
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    *(char *)(iVar2 + 0x1bd2da0) = (char)param_2;
    *(char *)(iVar2 + 0x1bd2ea0) = (char)param_2;
    *(byte *)(iVar2 + 0x1bd1da0) = *(byte *)(iVar2 + 0x1bd1ea0);
    iVar2 = iVar1;
  } while (iVar1 < 0x100);
  engine_special_cpp_setFogColorFromPalette_FUN_00532a80(param_2);
  return;
}
