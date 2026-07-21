// Name: FUN_00401bd0
// Address: 00401bd0
// Address Range: [[00401bd0, 00401c34]]
// Convention: unknown
// Signature: void FUN_00401bd0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401bd0(uint param_1)

{
  int iVar1;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00577157,param_1,&DAT_00577154);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x2c1;
    FUN_004c8440("Unable to open VGA palette");
  }
  _fread(&DAT_01c00648,0x300,1,iVar1);
  _fclose(iVar1);
  return;
}
