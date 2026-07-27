// Name: engine_2d.c_FUN_00403070
// Address: 00403070
// Address Range: [[00403070, 0040312f]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403070(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void engine_2d_c_FUN_00403070(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"rb");
  if (iVar1 == 0) {
    engine_2d_c_FUN_00402e90(param_2);
    engine_2d_c_FUN_00403130(param_1);
    iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("fog",param_1,"rb");
  }
  if (iVar1 == 0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x69c;
    core_main_c_FUN_004c8440("Unable to read fog table.");
  }
  else {
    _fread(0x1bd1ea0,0x100,0x10,iVar1);
    _fclose(iVar1);
  }
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + 0x1bd2da0) = (char)param_2;
    *(char *)(iVar1 + 0x1bd2ea0) = (char)param_2;
    *(byte *)(iVar1 + 0x1bd1da0) = *(byte *)(iVar1 + 0x1bd1ea0);
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  engine_special_cpp_setFogColorFromPalette_FUN_00532a80(param_2);
  return;
}
